#include "Game.h"

#if defined(__linux__) || defined(__APPLE__)
	#include <SDL2/SDL.h>
#elif defined(_WIN32)
	#include <SDL.h>
#endif
#include <Windows.h>
#include "GameTime.h"
#include "Input.h"
#include "Screen.h"

#define FRAMES_PER_SECOND 1000
#define TIME_PER_FRAME (1000 / FRAMES_PER_SECOND)
#define TICKS_PER_FRAME (1.0 / FRAMES_PER_SECOND)

Game::Game ()
{
	_currentScene = new Scene ();
	_currentScene2 = new Scene2();
	GameTime::Init();
}

Game::~Game ()
{

}

Game* Game::Instance ()
{
	static Game instance;

	return &instance;
}

void Game::Start ()
{
	bool running=true;
	bool running2 = false;
	while(running)
	{
		Screen::Clear ();

		GameTime::UpdateFrame ();
		Input::UpdateState ();

        if (Input::GetQuit () || Input::GetKeyDown (27)) {
        	running = false;
        	continue;
        }
		if (_currentScene->get_finish() == true)
		{
			running = false;
			running2 = true;
			
		}

		// if (Input::GetResizeEvent () != Vector2::Zero) {
		// 	OnWindowResize (Input::GetResizeEvent ());
		// }
		if(_currentScene->get_over()==true)
		_currentScene->Display();
		if (_currentScene->get_over() == false)
		{

			_currentScene->Update();
			_currentScene->Jump();
			_currentScene->Display();
		}

			Screen::Render();

			if (TICKS_PER_FRAME > GameTime::GetElapsedTimeMS() - GameTime::GetTimeMS()) {
				SDL_Delay(TICKS_PER_FRAME - (GameTime::GetElapsedTimeMS() - GameTime::GetTimeMS()));
			}
		
	}
	while (running2 == true)
	{
		Screen::Clear();

		GameTime::UpdateFrame();
		Input::UpdateState();

		if (Input::GetQuit() || Input::GetKeyDown(27)) {
			running2 = false;
			continue;
		}

		if (_currentScene2->get_over2() == true || _currentScene2->get_finish2() == true)
		{
			_currentScene2->Display2(); running2 = false;
			Sleep(5000);
		}
		if (_currentScene2->get_over2() == false)
		{

			_currentScene2->Update2();
			_currentScene2->Jump2();
			_currentScene2->Display2();
		}
		Screen::Render();

		if (TICKS_PER_FRAME > GameTime::GetElapsedTimeMS() - GameTime::GetTimeMS()) {
			SDL_Delay(TICKS_PER_FRAME - (GameTime::GetElapsedTimeMS() - GameTime::GetTimeMS()));
		}
	}
}
