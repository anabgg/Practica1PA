#include "Camera.h"

void Camera::Render()
{
	glTranslatef(-1*GetPos().GetCoordinateX(), -1*GetPos().GetCoordinateY(),-1*GetPos().GetCoordinateZ());
	glRotatef(this->GetOrientation().GetCoordinateX(), 1, 0, 0);
	glRotatef(this->GetOrientation().GetCoordinateY(), 0, 1, 0);
	glRotatef(this->GetOrientation().GetCoordinateZ(), 0, 0, 1);

}
