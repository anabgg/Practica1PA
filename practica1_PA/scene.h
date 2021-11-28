#pragma once
#include "Teapot.h"
#include "Cube.h"
#include "Cuboid.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Torus.h"
#include <vector>
#include "Solid.h"
#include "Camera.h"
using namespace std;
class scene: public Solid
{
	vector <Solid*> gameObjects;
	vector <Solid*> solids;
	vector3D boundary;
	float size;
	Teapot teapot;
	Cube cube;
	Cuboid cuboid;
	Cylinder cylinder;
	Sphere sphere;
	Torus torus;
	Camera* MainCamera= new Camera;

public:
	scene() : size(float(0.6)), Solid(), boundary(vector3D(8,6,4)) {}

	inline void AddGameObject(Solid* AllObjects) { gameObjects.push_back(AllObjects); }
	vector<Solid*> GetSolids() { return solids; }

	inline float GetSize() { return this->size; }
	inline void SetSize(const float& sizeToSet) { this->size = sizeToSet; }
	
	inline vector3D GetBoundary() { return this->boundary; }
	inline void SetBoundary(const float& boundaryToSet) { this->size = boundaryToSet; }

	inline Teapot GetTeapot() { return this->teapot; }
	inline Cube GetCube() { return this->cube; }
	inline Cuboid GetCuboid() { return this->cuboid; }
	inline Cylinder GetCylinder() { return this->cylinder; }
	inline Sphere GetSphere() { return this->sphere; }
	inline Torus GetTorus() { return this->torus; }

	void ProcessKeyPressed(unsigned char key, int px, int py);
	void ProcessMouseMovement(int x, int y);
	void ProcessMouseClick(int button, int state, int x, int y);
	void Render();
	void update(const double& up);
private:
	void checkBoundary(const double& up);
};

