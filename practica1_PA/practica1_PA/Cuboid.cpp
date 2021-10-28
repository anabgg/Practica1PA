#include "Cuboid.h"
void Cuboid::Render()
{
	glPushMatrix();
	glTranslatef(GetPos().GetCoordinateX(), GetPos().GetCoordinateY(), GetPos().GetCoordinateZ());
	glRotatef(GetRot().GetCoordinateX(), 1, 0, 0);
	glRotatef(GetRot().GetCoordinateY(), 0, 1, 0);
	glRotatef(GetRot().GetCoordinateZ(), 0, 0, 1);
	glColor3f(GetColor().GetRedComponent(), GetColor().GetGreenComponent(), GetColor().GetBlueComponent());
	glScalef(getLongitud(), getAltura(), getAnchura());
	glutSolidCube(1);
	glPopMatrix();
}
