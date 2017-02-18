#ifndef BALLOBJECT2_H
#define BALLOBJECT2_H

#include "Image.h"

#include "SceneObject2.h"
#include "Vector2.h"
#include "Collision2.h"
class BallObject2 : public Collision2, public SceneObject2
{
private:
	//int nr_vieti;
	//int stelute;
	Image* _image;
	float _speed;
	bool jumping;
	double lasttime;
	Vector2 _position;
	Vector2 _destination;
	int ok;
	//bool stea1, stea2, stea3, stea4, stea5;

public:
	BallObject2 ();
	~BallObject2 ();
	/*int get_pozitie();
	int get_nr_vieti();
	void set_nr_vieti();
	int get_stelute();
	void set_stelute();
	void set_stea1();
	bool get_stea1();
	void set_stea2();
	bool get_stea2();
	void set_stea3();
	bool get_stea3();
	void set_stea4();
	bool get_stea4();
	void set_stea5();
	bool get_stea5();
	void delete_stelute();
	void set_plus();*/
	virtual void Draw2();
	virtual void Update2 ();
	virtual void Gravity_check2();
	virtual void Jump2();

};

#endif