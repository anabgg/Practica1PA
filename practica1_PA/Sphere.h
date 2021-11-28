#pragma once
#include "Solid.h"
class Sphere : public Solid
{
private:
	float radio, stacks, slices, size;
public:
	Sphere() :size(0.2), Solid(vector3D(0.6, -0.2, -2.0), vector3D(10.0, 26.0, -2.0), color(0.4, 0.4, 0.5)), slices(20), stacks(20), radio(0.1) {}

	inline float GetRadio() { return radio; }
	inline void SetRadio(const float& radioToSet) { this->radio = radioToSet; }

	inline float GetStacks() { return stacks; }
	inline void SetStacks(const float& stacksToSet) { this->stacks = stacksToSet; }

	inline float GetSlices() { return slices; }
	inline void SetSlices(const float& slicesToSet) { this->slices = slicesToSet; }

	void Render();
};

