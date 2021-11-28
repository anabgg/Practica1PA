#include "Sphere.h"

void Sphere::Render()
{
	float x = this->GetPos().GetCoordinateX();
	float y = this->GetPos().GetCoordinateY();
	float z = this->GetPos().GetCoordinateZ();
	glPushMatrix();
	glTranslatef(GetPos().GetCoordinateX(), GetPos().GetCoordinateY(), GetPos().GetCoordinateZ());
	glRotatef(GetOrientation().GetCoordinateX(), 1, 0, 0);
	glRotatef(GetOrientation().GetCoordinateY(), 0, 1, 0);
	glRotatef(GetOrientation().GetCoordinateZ(), 0, 0, 1);
	glColor3f(GetColor().GetRedComponent(), GetColor().GetGreenComponent(), GetColor().GetBlueComponent());
	glutSolidSphere(GetRadio(),GetSlices(),GetStacks());
	glPopMatrix();
}