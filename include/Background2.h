#pragma once
#ifndef Background2_H
#define Background2_H
#include "SceneObject2.h"
#include "Image.h"
#include "Vector2.h"
#include"BallObject2.h"
class Background2 :public SceneObject2 , public BallObject2
{
private:
	Image* _image;
	Image* _image2;
	Image* _image3;
	Image* _image4;
	Image* _image5;
	Image* _image6;
	Image* _image7;
	Image* _image8;
	Vector2 _position;
	Vector2 _position2;
	Vector2 _position3, _position4, _position5, _position6, _position7,_position8,_position9,_position10;
	Vector2 _destination;
public:
	Background2();
	~Background2();
	int getx();
	virtual void Draw2();
	virtual void Update2();

};
#endif