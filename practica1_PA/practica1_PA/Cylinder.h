#pragma once
#include "solid.h"
class Cylinder : public Solid {
	GLUquadricObj* quadricTemp;
	double radio, stacks, slices;
public:
	Cylinder(double b, double h, double sl, double st) :Solid(), radio(b), slices(sl), stacks(st) {
		this->SetSize(h);
		quadricTemp = gluNewQuadric();
	}
	void Render();
};

