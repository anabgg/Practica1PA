#pragma once
#include <GL/glut.h>
#include <iostream>

using namespace std;

class vector3D
{
private:
	float coordinateX;
	float coordinateY;
	float coordinateZ;
	float size;
public:
	vector3D operator*(const float& value);
	vector3D Add(const vector3D& vector);

	vector3D(float coordinateX, float coordinateY, float coordinateZ=0) : coordinateX(coordinateX), coordinateY(coordinateY), coordinateZ(coordinateZ) {}
	inline float GetCoordinateX() const { return this->coordinateX; }
	inline float GetCoordinateY() const { return this->coordinateY; }
	inline float GetCoordinateZ() const { return this->coordinateZ; }

	inline void SetCoordinateX(const float& coordinateXToSet) { this->coordinateX = coordinateXToSet; }
	inline void SetCoordinateY(const float& coordinateYToSet) { this->coordinateY = coordinateYToSet; }
	inline void SetCoordinateZ(const float& coordinateZToSet) { this->coordinateZ = coordinateZToSet; }

	
void Coordinates();
};

