#include "Resources.h"
#include "Screen.h"
#include "Input.h"
#include "GameTime.h"
#include "Vector2.h"
#include "Vieti.h"
#include "Gameover.h"
#include <cstdlib>
Gameover::Gameover() : _position(20, 20)
{
	_image = Resources::LoadImage("Assets/Images/game.png");
	_position = Vector2(320, 500);
	// This need to be deleted too

}

Gameover::~Gameover()
{
	delete _image;
}

void Gameover::Draw()
{
	Screen::Draw(_image, _position);
	printf("DA");
}




