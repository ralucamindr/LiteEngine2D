#ifndef SCENE2_H
#define SCENE2_H

#include <vector>

#include "SceneObject2.h"

class Scene2 : public SceneObject2
{
private:
	std::vector<SceneObject2*> _objects;

public:
	Scene2 ();
	~Scene2 ();

	void Update2 ();
	void Gravity_check2();
	void Display2 ();
	void Jump2();
	void Clear ();
    
	
};

#endif