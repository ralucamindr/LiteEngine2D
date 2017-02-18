#ifndef PLATFORM_H
#define PLATFORM_H

#include "Image.h"

#include "SceneObject.h"
#include "Vector2.h"

class Platform : public SceneObject
{
private:
	Image* _image;
	float _speed;
	Vector2 _position;
	Vector2 _destination;

public:
	Platform();
	~Platform();

	virtual void Draw();
	
};

#endif