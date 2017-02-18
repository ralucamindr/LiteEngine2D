#include "Collision.h"
Collision::Collision()
{
	nr_vieti = 3;
	stelute = 0;
	stea1 = false;
	stea2 = false;
	stea3 = false;
	stea4 = false;
	stea5 = false;
}


void Collision::set_nr_vieti() { nr_vieti -= 1; }
void Collision::set_plus() { nr_vieti += 1; }
void Collision::set_stea1() { stea1 = true; }
bool Collision::get_stea1() { return stea1; }
void Collision::set_stea2() { stea2 = true; }
bool Collision::get_stea2() { return stea2; }
void Collision::set_stea3() { stea3 = true; }
bool Collision::get_stea3() { return stea3; }
void Collision::set_stea4() { stea4 = true; }
bool Collision::get_stea4() { return stea4; }
void Collision::set_stea5() { stea5 = true; }
bool Collision::get_stea5() { return stea5; }

int Collision::get_nr_vieti()
{
	return nr_vieti;
}

void Collision::set_stelute() { stelute += 1; }
int Collision::get_stelute()
{
	return stelute;
}
void Collision::delete_stelute()
{
	stelute = 0;

}

void Collision::collision_good(Vector2 pozitie)
{
	
	if (pozitie.GetX() > 820.0 && pozitie.GetX() < 920.0 && pozitie.GetY() >= 240.0 && !get_stea1()) { set_stea1(); set_stelute(); }

	if (pozitie.GetX() > 420.0 && pozitie.GetX() < 520.0 && pozitie.GetY() >= 240.0 && !get_stea2()) { set_stea2(); set_stelute(); }

	if (pozitie.GetX() > 230.0 && pozitie.GetX() < 330.0 && pozitie.GetY() >= 300.0 && !get_stea3()) { set_stea3(); set_stelute(); }

	if (pozitie.GetX() > 20.0 && pozitie.GetX() < 120.0 && pozitie.GetY() >= 410.0 && !get_stea4()) { set_stea4(); set_stelute(); }

	if (pozitie.GetX() > 930.0 && pozitie.GetX() < 1010.0 && pozitie.GetY() >= 410.0 &&!get_stea5()) { set_stea5();  set_stelute(); }
	if (pozitie.GetX()>1132 && get_nr_vieti() >= 0) set_finish();
}
bool Collision::collission_bad(Vector2 pozitie)
{
	if (pozitie.GetX() > 110.0 && pozitie.GetX() < 250.0 && pozitie.GetY() < 310.0) { set_nr_vieti(); return true; }
	if (pozitie.GetX() > 630.0 && pozitie.GetX() < 785.0 && pozitie.GetY() < 310.0) { set_nr_vieti(); return true; }
}