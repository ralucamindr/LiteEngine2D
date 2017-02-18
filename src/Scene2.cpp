#include "Scene2.h"
#include "Platform2.h"
#include "BallObject2.h"
#include "Mouse2.h"
#include "Vieti2.h"
#include "Background2.h"

//#include <SDL.h>
#include<SDL_image.h>


Scene2::Scene2 ()
{
	// Hardcoded construction of a new BallObject in the scene constructor
	// TODO: This need to be deleted (even as an example)

	_objects.push_back(new Background2());
	_objects.push_back(new Platform2());
	_objects.push_back (new BallObject2 ());
	_objects.push_back(new Mouse2());
	_objects.push_back(new Vieti2());
	
	//_objects.push_back(new Gameover());
	


	
	
	// _objects.push_back (new BallObject ());
	// _objects.push_back (new BallObject ());
	// _objects.push_back (new BallObject ());	
	// _objects.push_back (new BallObject ());
	// _objects.push_back (new BallObject ());
}

Scene2::~Scene2 ()
{
	Clear ();
}

void Scene2::Update2 ()
{
	for (auto it : _objects) {
		it->Update2 ();
		
	}
}
void Scene2::Gravity_check2()
{
	//for (auto it : _objects) {
		//it->Gravity_check2();
	
}
void Scene2::Display2()
{

	for (auto it : _objects) {

		it->Draw2();
	}
}


void Scene2::Jump2()
{ 
	
	for (auto it : _objects) {
		it->Jump2();
	
	}
}

void Scene2::Clear ()
{
	
	for (auto it : _objects) {
		delete it;
	}
}
