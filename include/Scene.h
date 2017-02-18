#ifndef SCENE_H
#define SCENE_H

#include <vector>

#include "SceneObject.h"

class Scene : public SceneObject
{
private:
	std::vector<SceneObject*> _objects;

public:
	Scene ();
	~Scene ();

	void Update ();
	void Gravity_check();
	void Display ();
	void Jump();
	void Clear ();
    
	
};

#endif