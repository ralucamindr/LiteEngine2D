#include "SceneObject2.h"

SceneObject2::SceneObject2 ()
{
	
}

SceneObject2::~SceneObject2 ()
{

}

void SceneObject2::Update2 ()
{

}
void SceneObject2::Gravity_check2()
{

}
void SceneObject2::Draw2 ()
{
	
}
void SceneObject2::Jump2()
{

}
void SceneObject2::isover2()
{

	over2 = true;
}
bool SceneObject2::get_over2()
{
	return over2;
}
void SceneObject2::notover2()
{
	over2 = false;
}
bool SceneObject2::over2 = false;
bool SceneObject2::finish2 = false;
void SceneObject2::set_finish2()
{
	finish2 = true;
}
bool SceneObject2::get_finish2()
{
	return finish2;
}