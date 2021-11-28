#pragma once
#include "Teapot.h"
#include "Cube.h"
#include "Cuboid.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Torus.h"
#include <vector>
#include "scene.h"
#include "Camera.h"
class Game
{
	const double TIME = 1.0;
	scene* MainScene;
	Camera* MainCamera;
	vector<scene*> scenes;
public:

	Game() : MainScene(nullptr) {}
	
	void Init();
	void Render();
	void Update();
	void ProcessKeyPressed(unsigned char key, int px, int py);
	void ProcessMouseMovement(int x, int y);
	void ProcessMouseClick(int button, int state, int x, int y);
};

