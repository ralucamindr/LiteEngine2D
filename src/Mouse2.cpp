#include "Mouse2.h"

#include "Resources.h"

#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"

#include <cstdlib>


Mouse2::Mouse2( ) : _position(20,20)
{
	_image = Resources::LoadImage("Assets/Images/mouse.png");
	_image2 = Resources::LoadImage("Assets/Images/mouse.png");
	// This need to be deleted too
	_position = Vector2(330, 235);
	_position2 = Vector2(485, 460);
	_position3 = Vector2(200, 235);
	_position4 = Vector2(220, 530);
	_position5 = Vector2(990, 400);
}
void Mouse2::Update2()
{
	BallObject2::Update2();
	BallObject2::Jump2();
	if (get_stea1()) _position=Vector2(100000, 100000);
	if (get_stea2()) _position2=Vector2(100000, 100000);
	if (get_stea3()) _position3=Vector2(100000, 100000);
	if (get_stea4()) _position4=Vector2(100000, 100000);
	if (get_stea5()) _position5=Vector2(100000, 100000);
	

}
Mouse2::~Mouse2()
{
	delete _image;
	delete _image2;
}

void Mouse2::Draw2()
{
	Screen::Draw(_image, _position);
	Screen::Draw(_image2, _position2);
	Screen::Draw(_image, _position3);
	Screen::Draw(_image2, _position4);
	Screen::Draw(_image2, _position5);

}

