#ifndef BALLOBJECT_H
#define BALLOBJECT_H

#include "Image.h"

#include "SceneObject.h"
#include "Vector2.h"
#include "Collision.h"
class BallObject :  public Collision, public SceneObject
{
private:

	Image* _image;
	float _speed;
	bool jumping;
	double lasttime;
	Vector2 _position;
	Vector2 _destination;
	int ok;
	int nrt;

public:
	BallObject ();
	~BallObject ();
	virtual void Draw();
	virtual void Update ();
	virtual void Jump();

};

#endif