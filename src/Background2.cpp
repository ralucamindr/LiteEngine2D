#include "Background2.h"
#include "Resources.h"
#include "Screen.h"
#include "Input.h"
#include "Vector2.h"
#include "GameTime.h"

Background2::Background2() : _position(0, 0)
{
	_image = Resources::LoadImage("Assets/Images/cloud2.png");
	_image2 = Resources::LoadImage("Assets/Images/level2.png");
	_image3= Resources::LoadImage("Assets/Images/finish2.png");
	_image4 = Resources::LoadImage("Assets/Images/jum1.png");
	_image5=Resources::LoadImage("Assets/Images/jumm2.png");
	_image6= Resources::LoadImage("Assets/Images/jumm3.png");
	_image7 = Resources::LoadImage("Assets/Images/sharpp.png");
	_image8= Resources::LoadImage("Assets/Images/heh.png");
	_position4 = Vector2(130, 420);
	_position3 = Vector2(1230, 350);
	_position = Vector2(0, 720);
	_position2 = Vector2(20, 720);
	_position5 = Vector2(470, 380);
	_position6 = Vector2(700, 430);
	_position7 = Vector2(540, 235);
	_position8 = Vector2(590,235);
    _position9 = Vector2(640, 235);
	_position10 = Vector2(900, 278);
	_destination = Vector2(990, 278);
	
}
Background2::~Background2()
{
	delete _image;
	delete _image2;
	delete _image3;
	delete _image4;
	delete _image5;
	delete _image6;
	delete _image7;
}
void Background2::Draw2()
{
	Screen::Draw(_image, _position);
	Screen::Draw(_image2, _position2);
	Screen::Draw(_image3, _position3);
	Screen::Draw(_image4, _position4);
	Screen::Draw(_image5, _position5);
	Screen::Draw(_image6, _position6);
	Screen::Draw(_image7, _position7);
	Screen::Draw(_image7, _position8);
	Screen::Draw(_image7, _position9);
	Screen::Draw(_image8, _position10);


}
int Background2::getx()
{
	return _position10.GetX();
}
void Background2::Update2()
{
	Vector2 velocity = Vector2::Zero;
	bool ok = true;;
	if (_destination.GetX()>_position10.GetX())
	{
		printf("%d", _position.GetX());
		velocity += Vector2::Right;
		velocity.Normalize();
		_position10 += velocity * 200 * GameTime::GetDeltaTime();
		
				

	
	}
	else while(_position10.GetX() > 900) 
	{
		
		velocity += Vector2::Left;
		velocity.Normalize();
		_position10+= velocity * 100* GameTime::GetDeltaTime();
	}
	if (getx() % 4 == 0) _image8 = Resources::LoadImage("Assets/Images/heh.png");
	if (getx() % 4 == 1)_image8 = Resources::LoadImage("Assets/Images/heh2.png");
	if (getx() % 4 == 2)_image8 = Resources::LoadImage("Assets/Images/heh3.png");
	if (getx() % 4 == 3)_image8 = Resources::LoadImage("Assets/Images/heh4.png");

	

}