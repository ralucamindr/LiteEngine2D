#ifndef VIETI2_H
#define VIETI2_H
#include "Image.h"
#include "SceneObject2.h"
#include "Vector2.h"
#include "BallObject2.h"
#include "Gameover.h"
class Vieti2 : public BallObject2 , public Gameover, public SceneObject2
{
private:
	Image* _image;
	float _speed;
	Vector2 _position;
	Vector2 _destination;
	int used_life;

public:
	Vieti2();
	~Vieti2();
	virtual void Draw2();
	virtual void Update2();
	virtual void Jump2();
};
#endif
