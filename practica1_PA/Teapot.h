#pragma once
#include <GL/glut.h>
#include "Solid.h"
class Teapot: public Solid
{
private:
	float size;
public:
	Teapot() : size(0.2), Solid(vector3D(0.0, 0.0, -2.0), vector3D(25.0, 10.0, 20.0) ,color(0.2, 0.3, 0.4)) {}

	inline float GetSize() { return size; }
	inline void SetSize(const float& sizeToSet) { this->size = sizeToSet; }

	void Render();
};

