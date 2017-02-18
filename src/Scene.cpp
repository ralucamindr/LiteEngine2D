#include "Scene.h"
#include "Platform.h"
#include "BallObject.h"
#include "Obstacol1.h"
#include "Obstacol2.h"
#include "Background.h"
#include "Mouse1.h"
#include "Vieti.h"
#include "Gameover.h"
//#include <SDL.h>
#include<SDL_image.h>


Scene::Scene ()
{
	// Hardcoded construction of a new BallObject in the scene constructor
	// TODO: This need to be deleted (even as an example)

	_objects.push_back(new Background());
	_objects.push_back(new Platform());
	_objects.push_back (new BallObject ());
	_objects.push_back(new Obstacol1());
	_objects.push_back(new Obstacol2());
	_objects.push_back(new Mouse1());
	_objects.push_back(new Vieti());
	//_objects.push_back(new Gameover());
	


	
	
	// _objects.push_back (new BallObject ());
	// _objects.push_back (new BallObject ());
	// _objects.push_back (new BallObject ());	
	// _objects.push_back (new BallObject ());
	// _objects.push_back (new BallObject ());
}

Scene::~Scene ()
{
	Clear ();
}

void Scene::Update ()
{
	for (auto it : _objects) {
		it->Update ();
		
	}
}
void Scene::Gravity_check()
{
	for (auto it : _objects) {
		it->Gravity_check();
	}

}
void Scene::Display()
{

	for (auto it : _objects) {

		it->Draw();
	}
}


void Scene::Jump()
{ 
	
	for (auto it : _objects) {
		it->Jump();
	
	}
}

void Scene::Clear ()
{
	
	for (auto it : _objects) {
		delete it;
	}
}
