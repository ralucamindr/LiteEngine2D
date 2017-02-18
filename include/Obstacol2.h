#ifndef OBSTACOL2_H
#define OBSTACOL2_H

#include "Image.h"
#include "SceneObject.h"
#include "Vector2.h"

class Obstacol2 : public SceneObject
{
private:
	Image* _image;
	Image* _image2;
	float _speed;
	Vector2 _position;
	Vector2 _position2;
	Vector2 _destination;

public:
	Obstacol2();
	~Obstacol2();

	virtual void Draw();

};

#endif