#pragma once
#include "Solid.h"

class Camera:public Solid
{
public:
	Camera(vector3D position = vector3D(4, 3, 12)) :Solid() {
		SetPos(position);
	}
	void Render();
};

