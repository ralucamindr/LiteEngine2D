#ifndef MOUSE2_H
#define MOUSE2_H

#include "Image.h"
#include "SceneObject2.h"
#include "Vector2.h"
#include "BallObject2.h"
#include "Collision2.h"
class Mouse2 : public BallObject2, public SceneObject2
{
private:
	Image* _image,*_image2;
	float _speed;
	Vector2 _position,_position2,_position3,_position4,_position5;
	Vector2 _destination;

public:
	Mouse2();
	~Mouse2();
	virtual void Update2();
	virtual void Draw2();

};

#endif#pragma once
