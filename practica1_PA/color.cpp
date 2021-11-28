#include "color.h"

void color::Render()
{
	glPushMatrix();
	glColor3f(this->GetRedComponent(), this->GetGreenComponent(), this->GetBlueComponent());
	glPopMatrix();
}
