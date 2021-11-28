#include "Solid.h"
void Solid::update(float time) {
	this->SetPos(vector3D(this->GetPos().Add( this->GetSpeed() * time)));
	this->SetOrientation(vector3D(this->GetOrientation().Add (this->GetOrientationSpeed() * time)));
}