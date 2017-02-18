#pragma once
#ifndef COLLISION_H
#define COLLISION_H
#include "Vector2.h"
#include "SceneObject.h"
class Collision :public SceneObject
{
	int nr_vieti;
	int stelute;
	bool stea1, stea2, stea3, stea4, stea5;
public:
	Collision();
	void collision_good( Vector2 pozitie);
	bool collission_bad( Vector2  pozitie);
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
	void set_plus();

};
#endif