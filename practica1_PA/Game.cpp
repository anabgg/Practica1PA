#include "Game.h"
#include <iostream>


void Game::ProcessKeyPressed(unsigned char key, int px, int py) {
	//de momento no hacemos nada...
	cout << "Tecla pulsada: " << key << std::endl;
}

void Game::ProcessMouseMovement(int x, int y) {
	//de momento no hacemos nada...
	cout << "Movimiento del mouse: " << x << "," << y << std::endl;
}

void Game::ProcessMouseClick(int button, int state, int x, int y) {
	//de momento no hacemos nada...
	cout << "Clic: " << button << std::endl;
}


void Game::Init()
{
	MainScene = new scene();

	Teapot* teapot = new Teapot();
	teapot->SetPos(vector3D(8.0, 6.0, 4.0));
	teapot->SetOrientation(vector3D(25.0, 10.0, 20.0));
	teapot->SetSize(1.0);
	teapot->SetOrientationSpeed(vector3D(40.0, 0.0, 6.0));
	MainScene->AddGameObject(teapot);

	Cube* cube = new Cube();	
	cube->SetPos(vector3D(8.0, 0.0, 0.0));
	cube->SetOrientation(vector3D(5.0, -10.0, -2.0));
	cube->SetSize(0.9);
	cube->SetSpeed(vector3D(0.001, 0.0, 0.0));
	MainScene->AddGameObject(cube);

	Cuboid* cuboid = new Cuboid();
	cuboid->SetPos(vector3D(4.0, 1.0, 1.0));
	cuboid->SetOrientation(vector3D(10.0, -15.0, -2.0));
	cuboid->setAltura(1.5f);
	cuboid->setLongitud(2.5f);
	cuboid->setAnchura(1.5f);
	cuboid->SetOrientationSpeed(vector3D(5.0, 3.0, 2.0));
	MainScene->AddGameObject(cuboid);

	Cylinder* cylinder = new Cylinder();
	cylinder->SetPos(vector3D(6.0, 4.0, 2.0));
	cylinder->SetOrientation(vector3D(20.0, 45.0, 20.0));
	cylinder->SetAltura(2.0);
	cylinder->SetSlices(20);
	cylinder->SetStacks(20);
	cylinder->SetRadioB(0.8);
	cylinder->SetRadioS(0.8);
	MainScene->AddGameObject(cylinder);

	Sphere* sphere = new Sphere();
	sphere->SetPos(vector3D(1.5, 5.0, 4.0));
	sphere->SetOrientation(vector3D(10.0, 26.0, -2.0));
	sphere->SetSlices(20);
	sphere->SetStacks(20);
	sphere->SetRadio(1.0);
	MainScene->AddGameObject(sphere);

	Torus* torus = new Torus();
	torus->SetPos(vector3D(0.0, 0.7, 4.0));
	torus->SetOrientation(vector3D(20.0, 30.0, -14.0));
	torus->SetPlanes(20);
	torus->SetRings(10);
	torus->SetBigRadio(10.5);
	torus->SetSmallRadio(0.1);
	torus->SetOrientationSpeed(vector3D(5.0, 7.0, 0.0));
	MainScene->AddGameObject(torus);

}

void Game::Render()
{
	this->MainScene->Render();
}

void Game::Update(){

	this->MainScene->update(TIME);
}
