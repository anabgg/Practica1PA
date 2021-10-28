#pragma once
#include <GL/glut.h>
#include <iostream>
#include "vector3D.h"
using namespace std;

class color
{
private:
	float redComponent;
	float greenComponent;
	float blueComponent;
	vector3D C;

public:
	color(float redComponent, float greenComponent, float blueComponent) : redComponent(0.2), greenComponent(0.3), blueComponent(0.4) {}
	color() :redComponent(0.2), greenComponent(0.3), blueComponent(0.4) {}
	color(vector3D init = vector3D(255, 0, 0)) : C(init) {}
	inline float GetRedComponent() const { return this->redComponent; }
	inline float GetGreenComponent() const { return this->greenComponent; }
	inline float GetBlueComponent() const { return this->blueComponent; }

	inline float SetRedComponent(const float& RedComponentToSet) { this->redComponent = RedComponentToSet; }
	inline float SetGreenComponent(const float& GreenComponentToSet) { this->greenComponent = GreenComponentToSet; }
	inline float SetBlueComponent(const float& BlueComponentToSet) { this->blueComponent = BlueComponentToSet; }
	
	inline vector3D getColor() { return C; }
	inline vector3D SetColor(const vector3D& ColorToSet) { this->C = ColorToSet; }
	void Colorear();
};

