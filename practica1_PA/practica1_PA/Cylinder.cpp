#include "Cylinder.h"
void Cylinder::Render() {
	GLUquadricObj* quadricTemp = gluNewQuadric();
	glPushMatrix();
	glTranslatef(GetPos().GetCoordinateX(), GetPos().GetCoordinateY(), GetPos().GetCoordinateZ());
	glColor3f(GetColor().GetRedComponent(), GetColor().GetGreenComponent(), GetColor().GetBlueComponent());
	glRotatef(this->GetRot().GetCoordinateX(), 1, 0, 0);
	glRotatef(this->GetRot().GetCoordinateY(), 0, 1, 0);
	glRotatef(this->GetRot().GetCoordinateZ(), 0, 0, 1);
	gluCylinder(quadricTemp, GetRadio(), GetRadio(), GetSize(), GetSlices(), GetStacks());
	glPopMatrix();
	gluDeleteQuadric(quadricTemp);
}