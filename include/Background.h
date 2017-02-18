#pragma once
#ifndef Background_H
#define Background_H
#include "SceneObject.h"
#include "Image.h"
#include "Vector2.h"

class Background :public SceneObject
{
private:
	Image* _image;
	Image* _image2;
	Vector2 _position;
	Vector2 _position2;
	Vector2 _destination;
public:
	Background();
	~Background();

	virtual void Draw();

};
#endif