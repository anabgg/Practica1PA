#pragma once
#include "solid.h"
class Cylinder : public Solid {
	GLUquadricObj* quadricTemp;
	float radioS, radioB, stacks, slices, size, altura;

public:
	Cylinder() : Solid(vector3D(-1.0, 0.0, -2.0), vector3D(20.0, 45.0, 20.0), color(0.6, 0.5, 0.5)),altura(0.5), slices(20), stacks(20), radioS(0.2), radioB(0.2)
	{this->SetSize(0.4); quadricTemp = gluNewQuadric();}
	
	inline float GetAltura() const { return this->altura; }
	inline void SetAltura(const float& alturaToSet) { this->altura = alturaToSet; }

	inline float GetSize() { return size; }
	inline void SetSize(const float& sizeToSet) { this->size = sizeToSet; }

	inline float GetRadioS() { return radioS; }
	inline void SetRadioS(const float& radioSToSet) { this->radioS = radioSToSet; }

	inline float GetRadioB() { return radioB; }
	inline void SetRadioB(const float& radioBToSet) { this->radioB = radioBToSet; }

	inline float GetStacks() { return stacks; }
	inline void SetStacks(const float& stacksToSet) { this->stacks = stacksToSet; }

	inline float GetSlices() { return slices; }
	inline void SetSlices(const float& slicesToSet) { this->slices = slicesToSet; }
	void Render();
};

