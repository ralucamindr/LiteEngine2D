#ifndef SCENEOBJECT2_H
#define SCENEOBJECT2_H

#include "Object.h"

class SceneObject2 : public Object
{
	static bool over2;
	static bool finish2;
public:
	SceneObject2 ();
	virtual ~SceneObject2 ();
	virtual void Gravity_check2();
	virtual void Update2 ();
	virtual void Draw2 ();
	virtual void Jump2();
	virtual void isover2();
	virtual bool get_over2();
	void set_finish2();
	bool get_finish2();
	virtual void notover2();
};

#endif