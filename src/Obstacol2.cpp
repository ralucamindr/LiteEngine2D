#include "Obstacol2.h"

#include "Resources.h"

#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"

#include <cstdlib>


Obstacol2::Obstacol2() :
	_position(20, 20)
{
	_image = Resources::LoadImage("Assets/Images/obstacle.png");
	_image2=Resources::LoadImage("Assets/Images/finish.png");
	// This need to be deleted too
	_position = Vector2(700, 276);
	_position2 = Vector2(1230, 350);
}

Obstacol2::~Obstacol2()
{
	delete _image;
	delete _image2;
}

void Obstacol2::Draw()
{
	Screen::Draw(_image, _position);
	Screen::Draw(_image2, _position2);
}

