#pragma once
#ifndef GAMEOVER_H
#define GAMEOVER_H
#include "Image.h"

#include "SceneObject.h"
#include "Vector2.h"
class Gameover : public SceneObject
{
private:
	Image* _image;
	float _speed;
	Vector2 _position;
	Vector2 _destination;

public:
	Gameover();
	~Gameover();
	virtual void Draw();
};
#endif