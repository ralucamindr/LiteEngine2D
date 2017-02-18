#include "BallObject2.h"
#include "Obstacol1.h"
#include "Resources.h"
#include <Windows.h>
#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"
#include <stdio.h>
#include <cstdlib>
#include "Platform2.h"
#include "Obstacol1.h"
#include "Obstacol2.h"
#include "Collision.h"
#define BALL_SPEED 500

BallObject2::BallObject2 () :
	_speed (BALL_SPEED),
	_position (20, 20)
{
	_image = Resources::LoadImage ("Assets/Images/cat.png");
	
	_position = Vector2 (0,240);

	jumping = false;
}

BallObject2::~BallObject2 ()
{
	delete _image;
}

void BallObject2::Draw2 ()
{
	Screen::Draw (_image, _position);
}
void BallObject2::Gravity_check2()
{
	
}



void BallObject2::Update2 ()
{
//	 Uncomment this to switch the controls of the ball to keyboard

 Vector2 velocity = Vector2::Zero;
 

 
	 if (Input::GetKey('w')) {
	
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

		 if (_position.GetX() > 370.0 &&_position.GetX() < 530.0&& _position.GetY() < 400.0) { _position.SetX(370.0); }

		 

		if (_position.GetX() > 60.0 && _position.GetX() < 190 && _position.GetY() > 400.0 && _position.GetY()<460.0) _position.SetY(240.0);
		 if (_position.GetX() > 600.0 &&_position.GetX() < 770.0&& _position.GetY() >= 480.0) { _position.SetY(490.0); }



	
		 if (_position.GetX() > 60.0 && _position.GetX() < 190 && _position.GetY() > 460.0) _position.SetY(470.0);

		 if (Collision2::collission_bad(_position) == true) _position.SetX(0.0);

		

		// if (_position.GetX() > 110.0 && _position.GetX() < 210.0 && _position.GetY() >= 240.0 && _position.GetY()<=400.0 && !get_stea3()) { set_stea3(); set_stelute(); }

		 Collision2::collision_good(_position);
		
		
		
		if (_position.GetY() > 700) _position.SetY(240.0);
			

	 
	 if (_position.GetY() < 240.0) _position.SetY(240.0);
	 }

void BallObject2::Jump2()
{
	double curent = GetCurrentTime();
	double scurs = curent - lasttime;

	if (jumping == true && scurs>0)
	{
		

		bool bl = _position.GetX() > 370.0 &&_position.GetX() < 530.0&& _position.GetY() >= 430.0;
		bool bl2 = _position.GetX() > 600.0 &&_position.GetX() < 770.0&& _position.GetY() >= 480.0;
		bool bl3 = _position.GetX() > 60.0 && _position.GetX() < 190 && _position.GetY() > 460.0;

		if (_position.GetX() > 60.0 && _position.GetX() < 190 && _position.GetY() > 400.0 && _position.GetY()<460.0) _position.SetY(240.0);

		if (bl==false&&bl2==false&&bl3==false) _position += Vector2::Gravity * 700* GameTime::GetDeltaTime();

		if (_position.GetY() > 700) _position.SetY(240.0);
		if (_position.GetX() < 0.0) _position.SetX(0.0);
		if (_position.GetX() > 1133.0) _position.SetX(1133.0);

		if (_position.GetX() > 370.0 &&_position.GetX() < 530.0&& _position.GetY() < 400.0) { _position.SetX(370.0); }

		if (bl3 == true) { _position.SetY(470.0); }

		
		
		if (_position.GetX() > 600.0 &&_position.GetX() < 770.0&& _position.GetY() < 470.0) { _position.SetX(770.0); }
		

		
		Collision2::collision_good(_position);
		if (Collision2::collission_bad(_position) == true) _position.SetX(0.0);
	
		if (_position.GetY() < 240.0) _position.SetY(240.0);
		
	}

}
	 

	

	 

