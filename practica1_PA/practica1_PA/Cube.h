#pragma once
#include "Solid.h"

class Cube : public Solid
{
private:
	float sizeC = 0.4;

public:
	Cube(double d = 1.0, vector3D p = vector3D(0, 50, 0), vector3D c = vector3D(1, 1, 0)) :	Solid(d, p, c) {}
	void Render();
};

