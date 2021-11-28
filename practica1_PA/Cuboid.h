#pragma once
#include "Solid.h"
class Cuboid : public Solid
{
private:
	float altura;											
	float longitud;		
	float anchura;										
public:
	Cuboid() : Solid(vector3D(2.0, 0.5, -5.0), vector3D(10.0, -15.0, -2.0), color(0.6, 0.3, 0.4)), altura(1.0f), longitud(2.0f), anchura(0.5f) {}
	//Cuboid() : size(0.2), Solid(vector3D(0.0, 0.0, -2.0), color(0.2, 0.3, 0.4)) {}

	inline float GetAltura() const { return this->altura; }
	inline void setAltura(const float& alturaToSet) { this->altura = alturaToSet; }

	inline float GetLongitud() const { return this->longitud; }
	inline void setLongitud(const float& longitudToSet) { this->longitud = longitudToSet; }

	inline float GetAnchura() const { return this->anchura; }
	inline void setAnchura(const float& anchuraToSet) { this->anchura = anchuraToSet; }

	void Render();
};

