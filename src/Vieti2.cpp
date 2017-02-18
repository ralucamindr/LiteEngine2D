#include "Resources.h"
#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"
#include "Vieti2.h"
#include "BallObject2.h"
#include <cstdlib>
#include <iostream>
#include <Windows.h>
Vieti2::Vieti2() :	_position(20, 20)
{
	_image = Resources::LoadImage("Assets/Images/hearts.png");
	_position= Vector2(1150,700);
	used_life = 0;
	// This need to be deleted too

}

Vieti2::~Vieti2()
{
	delete _image;
}

void Vieti2::Draw2()
{
	Screen::Draw(_image, _position);
}
void Vieti2::Update2()
{
	//printf("%d", get_nr_vieti());
	BallObject2::Update2();
	BallObject2::Jump2();
	//if (get_nr_vieti()==2) { _image = Resources::LoadImage("Assets/Images/hearts2.png"); _position = Vector2(1150, 700);}
	//if (get_nr_vieti() == 1) { _image = Resources::LoadImage("Assets/Images/hearts1.png"); _position = Vector2(1150, 700);}
	//if (get_nr_vieti() == 0) { _image = Resources::LoadImage("Assets/Images/hearts0.png"); _position = Vector2(1150, 700);}
	if (get_nr_vieti() <= -1) {
		_image = Resources::LoadImage("Assets/Images/game.png");
		_position = Vector2(320, 500);
		SceneObject2::isover2();
		//printf("%d", SceneObject::get_over());
	}

	if (get_nr_vieti() == 2 && get_stelute() == 5 && used_life == 0)
	{
		used_life = 1;
		//delete_stelute();
		set_plus();
		_image = Resources::LoadImage("Assets/Images/hearts.png");
		_position = Vector2(1150, 700);
	}
	else  if ((get_nr_vieti() == 2 && get_stelute() < 5))
	{
		_image = Resources::LoadImage("Assets/Images/hearts2.png"); _position = Vector2(1150, 700);
	}
	else  if (get_nr_vieti() == 2 && used_life == 1)
	{
		_image = Resources::LoadImage("Assets/Images/hearts2.png"); _position = Vector2(1150, 700);
	}




	if (get_nr_vieti() == 1 && get_stelute() == 5 && used_life == 0)
	{
		used_life = 1;
		set_plus();
		_image = Resources::LoadImage("Assets/Images/hearts2.png"); _position = Vector2(1150, 700);
	}
	else  if ((get_nr_vieti() == 1 && get_stelute() < 5))
	{
		_image = Resources::LoadImage("Assets/Images/hearts1.png"); _position = Vector2(1150, 700);
	}
	else if (get_nr_vieti() == 1 && used_life == 1)
	{
		_image = Resources::LoadImage("Assets/Images/hearts1.png"); _position = Vector2(1150, 700);
	}



	if (get_nr_vieti() == 0 && get_stelute() == 5 && used_life == 0)
	{
		used_life = 1;
		//delete_stelute();
		set_plus();
		_image = Resources::LoadImage("Assets/Images/hearts1.png"); _position = Vector2(1150, 700);
	}
	else if ((get_nr_vieti() == 0 && get_stelute() < 5))
	{
		_image = Resources::LoadImage("Assets/Images/hearts0.png"); _position = Vector2(1150, 700);
	}
	else  if (get_nr_vieti() == 0 && used_life == 1)
	{
		_image = Resources::LoadImage("Assets/Images/hearts0.png"); _position = Vector2(1150, 700);
	}
}
	void Vieti2::Jump2()
	{
		if ((SceneObject2::get_finish2()) == true)
		{
			_image = Resources::LoadImage("Assets/Images/congrats.jpg");
			_position = Vector2(120, 600);
		}

	}

 


	





