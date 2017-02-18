#include "Mouse1.h"

#include "Resources.h"

#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"

#include <cstdlib>


Mouse1::Mouse1( ) : _position(20,20)
{
	_image = Resources::LoadImage("Assets/Images/mouse.png");
	_image2 = Resources::LoadImage("Assets/Images/mouse.png");
	// This need to be deleted too
	_position = Vector2(900, 235);
	_position2 = Vector2(500, 235);
	_position3 = Vector2(300, 300);
	_position4 = Vector2(100, 400);
	_position5 = Vector2(990, 400);
}
void Mouse1::Update()
{
	BallObject::Update();
	BallObject::Jump();
	if (Collision::get_stea1()) _position=Vector2(100000, 100000);
	if (Collision::get_stea2()) _position2=Vector2(100000, 100000);
	if (Collision::get_stea3()) _position3=Vector2(100000, 100000);
	if (Collision::get_stea4()) _position4=Vector2(100000, 100000);
	if (Collision::get_stea5()) _position5=Vector2(100000, 100000);
	

}
Mouse1::~Mouse1()
{
	delete _image;
	delete _image2;
}

void Mouse1::Draw()
{
	Screen::Draw(_image, _position);
	Screen::Draw(_image2, _position2);
	Screen::Draw(_image, _position3);
	Screen::Draw(_image2, _position4);
	Screen::Draw(_image2, _position5);

}

