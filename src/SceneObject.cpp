#include "SceneObject.h"

SceneObject::SceneObject ()
{
	
}

SceneObject::~SceneObject ()
{

}

void SceneObject::Update ()
{

}
void SceneObject::Gravity_check()
{

}
void SceneObject::Draw ()
{
	
}
void SceneObject::Jump()
{

}
void SceneObject::isover()
{

	over = true;
}
bool SceneObject::get_over()
{
	return over;
}
void SceneObject::notover()
{
	over = false;
}
bool SceneObject::over = false;
bool SceneObject::finish = false;
void SceneObject::set_finish()
{
	finish = true;
}
bool SceneObject::get_finish()
{
	return finish;
}