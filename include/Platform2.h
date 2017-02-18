#ifndef PLATFORM2_H
#define PLATFORM2_H

#include "Image.h"

#include "SceneObject2.h"
#include "Vector2.h"

class Platform2 : public SceneObject2
{
private:
	Image* _image;
	float _speed;
	Vector2 _position;
	Vector2 _destination;

public:
	Platform2();
	~Platform2();

	virtual void Draw2();
	
};

#endif