#include "color.h"

void color::Colorear()
{
	glPushMatrix();
	glColor3f(this->GetRedComponent(), this->GetGreenComponent(), this->GetBlueComponent());
	glPopMatrix();
}
