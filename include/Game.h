#ifndef GAME_H
#define GAME_H

#include "Scene.h"
#include "Scene2.h"

class Game 
{
public:
	Scene* _currentScene;
	Scene2* _currentScene2;

public:
	static Game* Instance ();

	void Start ();

private:
	Game ();
	~Game ();
	Game (const Game& other);
	Game& operator= (const Game& other);
};

#endif