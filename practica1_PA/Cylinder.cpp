#include "Cylinder.h"
void Cylinder::Render() {

	GLUquadricObj* quadricTemp = gluNewQuadric();
	float x = this->GetPos().GetCoordinateX();
	float y = this->GetPos().GetCoordinateY();
	float z = this->GetPos().GetCoordinateZ();
	float size = this->GetSize();
	glPushMatrix();
	glTranslatef(this->GetPos().GetCoordinateX(), this->GetPos().GetCoordinateY(), this->GetPos().GetCoordinateZ());
	glColor3f(this->GetColor().GetRedComponent(), this->GetColor().GetGreenComponent(), this->GetColor().GetBlueComponent());
	glRotatef(this->GetOrientation().GetCoordinateX(), 1, 0, 0);
	glRotatef(this->GetOrientation().GetCoordinateY(), 0, 1, 0);
	glRotatef(this->GetOrientation().GetCoordinateZ(), 0, 0, 1);
	gluCylinder(quadricTemp, this->GetRadioS(), this->GetRadioB(),this->GetAltura(),this->GetSlices(), this->GetStacks());
	glPopMatrix();
	gluDeleteQuadric(quadricTemp);
}