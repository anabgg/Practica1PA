#pragma once
#include <GL/glut.h>
#include "vector3D.h"
#include "color.h"
class Solid
{
private:
	vector3D pos;
	vector3D orientation;
	vector3D OrientationSpeed;
	vector3D Speed;
	color Color;

	float time=1;
public:
	Solid(vector3D p = vector3D(0, 0, 0), vector3D ori = vector3D(0, 0, 0), color c = color(1, 1, 1), vector3D r = vector3D(0 ,0 ,0), vector3D sp = vector3D(0, 0, 0)) : pos(p), orientation(ori), Color(c), OrientationSpeed(r), Speed(sp)  {}

	inline vector3D GetPos() const { return pos; }
	inline void SetPos(const vector3D& posToSet) { this->pos = posToSet; }

	inline color GetColor() const { return Color; }
	inline void SetColor(const color& colorToSet) { this->Color= colorToSet; }

	inline vector3D GetOrientation() { return orientation; }
	inline void SetOrientation(const vector3D& orientationToSet) { this->orientation= orientationToSet; }

	inline vector3D GetOrientationSpeed() { return OrientationSpeed; }
	inline void SetOrientationSpeed(const vector3D& OrientationSpeedToSet) { this-> OrientationSpeed = OrientationSpeedToSet; }

	inline vector3D GetSpeed() { return Speed; }
	inline void SetSpeed(const vector3D& SpeedToSet) { this->Speed = SpeedToSet; }

	virtual void Render()=0;
	void update(float time_up);
};

