#ifndef OBSTACOL1_H
#define OBSTACOL1_H

#include "Image.h"
#include "SceneObject.h"
#include "Vector2.h"

class Obstacol1 : public SceneObject
{
private:
	Image* _image;
	float _speed;
	Vector2 _position;
	Vector2 _destination;

public:
	Obstacol1();
	~Obstacol1();

	virtual void Draw();

};

#endif