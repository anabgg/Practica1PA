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

public:
	color(float red= 0.2 , float green=0.3, float blue=0.4) : redComponent(red), greenComponent(green), blueComponent(blue) {}
	
	inline float GetRedComponent() const { return this->redComponent; }
	inline float GetGreenComponent() const { return this->greenComponent; }
	inline float GetBlueComponent() const { return this->blueComponent; }

	inline float SetRedComponent(const float& RedComponentToSet) { this->redComponent = RedComponentToSet; }
	inline float SetGreenComponent(const float& GreenComponentToSet) { this->greenComponent = GreenComponentToSet; }
	inline float SetBlueComponent(const float& BlueComponentToSet) { this->blueComponent = BlueComponentToSet; }
	

	void Render();
};

