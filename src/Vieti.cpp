#include "Resources.h"
#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"
#include "Vieti.h"
#include "BallObject.h"
#include <cstdlib>
#include <iostream>
#include <Windows.h>
Vieti::Vieti() :	_position(20, 20)
{
	_image = Resources::LoadImage("Assets/Images/hearts.png");
	_position= Vector2(1150,700);
	used_life = 0;
	// This need to be deleted too

}

Vieti::~Vieti()
{
	delete _image;
}

void Vieti::Draw()
{
	Screen::Draw(_image, _position);
}
void Vieti::Update()
{
	//printf("%d", get_nr_vieti());
	BallObject::Update();
	BallObject::Jump();
	//if (get_nr_vieti()==2) { _image = Resources::LoadImage("Assets/Images/hearts2.png"); _position = Vector2(1150, 700);}
	//if (get_nr_vieti() == 1) { _image = Resources::LoadImage("Assets/Images/hearts1.png"); _position = Vector2(1150, 700);}
	//if (get_nr_vieti() == 0) { _image = Resources::LoadImage("Assets/Images/hearts0.png"); _position = Vector2(1150, 700);}
	if (get_nr_vieti() <= -1) {
		_image = Resources::LoadImage("Assets/Images/game.png");
		_position = Vector2(320, 500);
		SceneObject::isover();
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
	else  if ((get_nr_vieti() == 2 && get_stelute() <5 ))
	{
		_image = Resources::LoadImage("Assets/Images/hearts2.png"); _position = Vector2(1150, 700);
	}
	 else  if (get_nr_vieti() == 2 && used_life == 1)
	 {
		 _image = Resources::LoadImage("Assets/Images/hearts2.png"); _position = Vector2(1150, 700);
	 }

	


	if (get_nr_vieti() == 1 && get_stelute() == 5 &&used_life==0)
	{
		used_life = 1;
		set_plus();
		_image = Resources::LoadImage("Assets/Images/hearts2.png"); _position = Vector2(1150, 700);
	}
	else  if ((get_nr_vieti()==1 && get_stelute()<5))
	{
		_image = Resources::LoadImage("Assets/Images/hearts1.png"); _position = Vector2(1150, 700);
	}
  else if (get_nr_vieti() == 1 && used_life == 1)
  {
	  _image = Resources::LoadImage("Assets/Images/hearts1.png"); _position = Vector2(1150, 700);
  }
  

	
	if (get_nr_vieti() == 0 && get_stelute()==5 &&used_life==0 )
	{
		used_life = 1;
		//delete_stelute();
		set_plus();
		_image = Resources::LoadImage("Assets/Images/hearts1.png"); _position = Vector2(1150, 700);
	}
	else if ( (get_nr_vieti() == 0 && get_stelute()<5) )
	{
		_image = Resources::LoadImage("Assets/Images/hearts0.png"); _position = Vector2(1150, 700);
	}
  else  if (get_nr_vieti() == 0 && used_life == 1)
  {
	  _image = Resources::LoadImage("Assets/Images/hearts0.png"); _position = Vector2(1150, 700);
  }

 


	

}



