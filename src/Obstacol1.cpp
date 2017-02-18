#include "Obstacol1.h"

#include "Resources.h"

#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"

#include <cstdlib>


Obstacol1::Obstacol1() :
	_position(20, 20)
{
	_image = Resources::LoadImage("Assets/Images/bush.png");

	// This need to be deleted too
	_position = Vector2(200,245);
}

Obstacol1::~Obstacol1()
{
	delete _image;
}

void Obstacol1::Draw()
{
	Screen::Draw(_image, _position);
}

