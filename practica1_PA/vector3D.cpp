#include "vector3D.h"

void vector3D :: Coordinates()
{
glPushMatrix();
	glTranslatef(this->GetCoordinateX(), this->GetCoordinateY(), this->GetCoordinateZ());
	glPopMatrix();

};

vector3D vector3D::operator*(const float& value)
{
	vector3D v = vector3D(0, 0, 0);
	v.SetCoordinateX(this->GetCoordinateX() * value);
	v.SetCoordinateY(this->GetCoordinateY() * value);
	v.SetCoordinateZ(this->GetCoordinateZ() * value);
	return v;
}

vector3D vector3D::Add(const vector3D& vector)
{
	vector3D plantilla(this->GetCoordinateX() + vector.GetCoordinateX(),
		this->GetCoordinateY() + vector.GetCoordinateY(),
		this->GetCoordinateZ() + vector.GetCoordinateZ());
	return plantilla;
}
