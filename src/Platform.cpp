#include "Platform.h"

#include "Resources.h"

#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"

#include <cstdlib>


Platform::Platform() :
	_position(20, 20)
{
	_image = Resources::LoadImage("Assets/Images/plat.jpg");

	// This need to be deleted too
	_position = Vector2(0, 180);
}

Platform::~Platform()
{
	delete _image;
}

void Platform::Draw()
{
	Screen::Draw(_image, _position);
}

