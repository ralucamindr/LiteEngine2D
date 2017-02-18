#ifndef VIETI_H
#define VIETI_H
#include "Image.h"
#include "SceneObject.h"
#include "Vector2.h"
#include "BallObject.h"
#include "Gameover.h"
class Vieti : public BallObject , public Gameover, public SceneObject
{
private:
	Image* _image;
	float _speed;
	Vector2 _position;
	Vector2 _destination;
	int used_life;

public:
	Vieti();
	~Vieti();
	virtual void Draw();
	virtual void Update();
};
#endif
