#include "Background.h"
#include "Resources.h"
#include "Screen.h"
#include "Input.h"
#include "Vector2.h"

Background::Background() : _position(0, 0)
{
	_image = Resources::LoadImage("Assets/Images/cloud.jpg");
	_image2 = Resources::LoadImage("Assets/Images/level1.png");
	_position = Vector2(0, 720);
	_position2 = Vector2(20, 720);
}
Background::~Background()
{
	delete _image;
	delete _image2;
}
void Background::Draw()
{
	Screen::Draw(_image, _position);
	Screen::Draw(_image2, _position2);
}