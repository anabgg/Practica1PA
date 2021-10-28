#pragma once
#include "Solid.h"
class Cuboid : public Solid
{
private:
	float altura;											
	float longitud;											
	float anchura;										
public:
	Cuboid() : Solid(), altura(1.0f), longitud(2.0f), anchura(0.5f) {}
	
	inline float getAltura() const { return this->altura; }
	inline void setAltura(const float& alturaToSet) { this->altura = alturaToSet; }
	inline float getLongitud() const { return this->longitud; }
	inline void setLongitud(const float& longitudToSet) { this->longitud = longitudToSet; }
	inline float getAnchura() const { return this->anchura; }
	inline void setAnchura(const float& anchuraToSet) { this->anchura = anchuraToSet; }

	void Render();
};

