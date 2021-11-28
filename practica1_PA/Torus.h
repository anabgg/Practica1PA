#pragma once
#include "Solid.h"
class Torus: public Solid
{
private:
	double smallRadio, bigRadio, planes, rings;
public:
	Torus(double sr = 0.1, double br = 0.25, double p = 20.0, double r = 10.0) :Solid(vector3D(0.1, 0.7, -2.0), vector3D(20.0, 30.0, -14.0), color(0.4, 0.3, 0.4)), smallRadio(sr), bigRadio(br), planes(p), rings(r){}
	
	inline double GetSmallRadio() const { return smallRadio; }
	inline void SetSmallRadio(const double& smallRadioToSet) { this->smallRadio = smallRadioToSet; }

	inline double GetBigRadio() const { return bigRadio; }
	inline void SetBigRadio(const double& bigRadioToSet) { this->smallRadio = bigRadioToSet; }

	inline double GetPlanes() const { return planes; }
	inline void SetPlanes(const double& planesToSet) { this->smallRadio = planesToSet; }

	inline double GetRings() const { return rings; }
	inline void SetRings(const double& ringsToSet) { this->smallRadio = ringsToSet; }

	void Render();
};

