#include "BallObject.h"
#include "Obstacol1.h"
#include "Resources.h"
#include <Windows.h>
#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"
#include <stdio.h>
#include <cstdlib>
#include "Platform.h"
#include "Obstacol1.h"
#include "Obstacol2.h"
#include "Collision.h"
#define BALL_SPEED 500

BallObject::BallObject () :
	_speed (BALL_SPEED),
	_position (20, 20)
{
	_image = Resources::LoadImage ("Assets/Images/cat.png");
	_position = Vector2 (0,240);
	jumping = false;
}

BallObject::~BallObject ()
{
	delete _image;
}

void BallObject::Draw ()
{
	Screen::Draw (_image, _position);
}


void BallObject::Update ()
{

 Vector2 velocity = Vector2::Zero;
 

 
	 if (Input::GetKey ('w')) {
	
		 lasttime = GetCurrentTime();
	 	velocity += Vector2::Up;		
			jumping = true;	
	 }	
	 
	 if (Input::GetKey ('d')) {
		 _image = Resources::LoadImage("Assets/Images/cat.png");
	 	velocity += Vector2::Right;
	
	 }
	 if (Input::GetKey ('s')) {

	 	velocity += Vector2::Down;
	}
	 if (Input::GetKey ('a')) {
		 _image = Resources::LoadImage("Assets/Images/cat2.png");
	 	velocity += Vector2::Left;
	 }

	 if (velocity == Vector2::Zero) {
	 	return;
	 }

	 velocity.Normalize ();
	 _position += velocity * _speed* GameTime::GetDeltaTime ();
	 		 if (_position.GetX() < 0.0) _position.SetX(0.0);
		 if (_position.GetX() > 1133.0) _position.SetX(1133.0);
		 if (Collision::collission_bad(_position) == true) _position.SetX(0.0);
		 Collision::collision_good(_position);		
		if (_position.GetY() > 550) _position.SetY(240.0);		
	 if (_position.GetY() < 240.0) _position.SetY(240.0);
	 }

void BallObject::Jump()
{
	double curent = GetCurrentTime();
	double scurs = curent - lasttime;

	if (jumping == true && scurs>0)
	{
	
		_position += Vector2::Gravity * 700* GameTime::GetDeltaTime();
		if (_position.GetY() > 550) _position.SetY(240.0);
		if (_position.GetX() < 0.0) _position.SetX(0.0);
		if (_position.GetX() > 1133.0) _position.SetX(1133.0);
		Collision::collision_good(_position);
		if (Collision::collission_bad(_position) == true) _position.SetX(0.0);
		if (_position.GetY() < 240.0) _position.SetY(240.0);
		
	}

}
	 

	

	 



