#include "Platform2.h"

#include "Resources.h"

#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"

#include <cstdlib>


Platform2::Platform2() :
	_position(20, 20)
{
	_image = Resources::LoadImage("Assets/Images/plat2.png");

	// This need to be deleted too
	_position = Vector2(0, 180);
}

Platform2::~Platform2()
{
	delete _image;
}

void Platform2::Draw2()
{
	Screen::Draw(_image, _position);
}

