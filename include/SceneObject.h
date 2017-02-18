#ifndef SCENEOBJECT_H
#define SCENEOBJECT_H

#include "Object.h"

class SceneObject : public Object
{
	static bool over;
	static bool finish;
public:
	SceneObject ();
	virtual ~SceneObject ();
	virtual void Gravity_check();
	virtual void Update ();
	virtual void Draw ();
	virtual void Jump();
	virtual void isover();
	virtual bool get_over();
	void set_finish();
	bool get_finish();
	virtual void notover();
};

#endif