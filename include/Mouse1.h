#ifndef MOUSE1_H
#define MOUSE1_H

#include "Image.h"
#include "SceneObject.h"
#include "Vector2.h"
#include "BallObject.h"
#include "Collision.h"
class Mouse1 :   public BallObject , public SceneObject
{
private:
	Image* _image,*_image2;
	float _speed;
	Vector2 _position,_position2,_position3,_position4,_position5;
	Vector2 _destination;

public:
	Mouse1();
	~Mouse1();
	virtual void Update();
	virtual void Draw();

};

#endif#pragma once
