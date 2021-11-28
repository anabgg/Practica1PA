#pragma once
#include <GL/glut.h>
#include "Solid.h"

class Cube : public Solid
{
private:
	float size;

public:
	Cube() :size(0.2), Solid(vector3D(0.5, -0.5, -2.0), vector3D(5.0, -10.0, -2.0), color(0.2, 0.4, 0.3)) {}


	inline float GetSize() { return size; }
	inline void SetSize(const float& sizeToSet) { this->size = sizeToSet; }

	void Render();
};

