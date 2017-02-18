#include "Collision2.h"
Collision2::Collision2()
{
	nr_vieti = 3;
	stelute = 0;
	stea1 = false;
	stea2 = false;
	stea3 = false;
	stea4 = false;
	stea5 = false;
}

void Collision2::set_nr_vieti() { nr_vieti -= 1; }
void Collision2::set_plus() { nr_vieti += 1; }
void Collision2::set_stea1() { stea1 = true; }
bool Collision2::get_stea1() { return stea1; }
void Collision2::set_stea2() { stea2 = true; }
bool Collision2::get_stea2() { return stea2; }
void Collision2::set_stea3() { stea3 = true; }
bool Collision2::get_stea3() { return stea3; }
void Collision2::set_stea4() { stea4 = true; }
bool Collision2::get_stea4() { return stea4; }
void Collision2::set_stea5() { stea5 = true; }
bool Collision2::get_stea5() { return stea5; }

int Collision2::get_nr_vieti()
{
	return nr_vieti;
}

void Collision2::set_stelute() { stelute += 1; }
int Collision2::get_stelute()
{
	return stelute;
}
void Collision2::delete_stelute()
{
	stelute = 0;

}

void Collision2::collision_good(Vector2 &pozitie)
{
	
	if (pozitie.GetX() > 130.0 && pozitie.GetX() < 230.0 && pozitie.GetY() >= 500.0 && !get_stea4()) { set_stea4(); set_stelute(); }
	if (pozitie.GetX() > 110.0 && pozitie.GetX() < 210.0 && pozitie.GetY() >= 240.0 && pozitie.GetY() <= 400.0 && !get_stea3()) { set_stea3(); set_stelute(); }
	if (pozitie.GetX() > 930.0 && pozitie.GetX() < 1010.0 && pozitie.GetY() >= 410.0 &&!get_stea5()) { set_stea5();  set_stelute(); }
	if (pozitie.GetX()>1132 && get_nr_vieti() >= 0) SceneObject2::set_finish2();
	if (pozitie.GetX() > 370.0 && pozitie.GetX() < 530.0&&pozitie.GetY() >= 430.0) { pozitie.SetY(440.0); if (!get_stea2()) { set_stea2(); set_stelute(); } }
	if (pozitie.GetX() > 300.0 && pozitie.GetX() < 330.0&& pozitie.GetY() < 400.0 && !get_stea1()) {  set_stea1(); set_stelute();  }
}
bool Collision2::collission_bad(Vector2 pozitie)
{
	if (pozitie.GetX() > 520.0 && pozitie.GetX() < 610.0 && pozitie.GetY() < 300.0) { set_nr_vieti(); return true; }
	if (pozitie.GetX() > 880.0 && pozitie.GetX() < 1030.0 && pozitie.GetY() < 330.0) { set_nr_vieti(); return true; }
}