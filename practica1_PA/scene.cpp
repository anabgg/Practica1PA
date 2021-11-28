#include "scene.h"

void scene::Render()
{
	this->MainCamera->Render();
	for (Solid* allSolid : gameObjects)
		allSolid->Render();
}

void scene::update(const double& up ) {
		checkBoundary(up);
}

void scene::checkBoundary(const double& up)
{
	for (Solid* allSolid : gameObjects) {
		allSolid->update(up);
		vector3D pos = allSolid->GetPos();

		if (pos.GetCoordinateX()> GetBoundary().GetCoordinateX() ) {
			pos.SetCoordinateX(GetBoundary().GetCoordinateX() -0.01);
			allSolid->SetPos(pos);
			vector3D velocidad = allSolid->GetSpeed();
			velocidad.SetCoordinateX(-velocidad.GetCoordinateX());
			allSolid->SetSpeed(velocidad);
		}
		if (pos.GetCoordinateY() > GetBoundary().GetCoordinateY()) {
			pos.SetCoordinateY(GetBoundary().GetCoordinateY() - 0.01);
			allSolid->SetPos(pos);
			vector3D velocidad = allSolid->GetSpeed();
			velocidad.SetCoordinateY(-velocidad.GetCoordinateY());
			allSolid->SetSpeed(velocidad);
		}
		if (pos.GetCoordinateZ() > GetBoundary().GetCoordinateZ()) {
			pos.SetCoordinateZ(GetBoundary().GetCoordinateZ() - 0.01);
			allSolid->SetPos(pos);
			vector3D velocidad = allSolid->GetSpeed();
			velocidad.SetCoordinateZ(-velocidad.GetCoordinateZ());
			allSolid->SetSpeed(velocidad);
			//////////////////////////////////////////////////////////////////////////////////
		}
		if (pos.GetCoordinateX() < 0) {
			pos.SetCoordinateX(0.01);
			allSolid->SetPos(pos);
			vector3D velocidad = allSolid->GetSpeed();
			velocidad.SetCoordinateX(-velocidad.GetCoordinateX());
			allSolid->SetSpeed(velocidad);
		}
		if (pos.GetCoordinateY() < 0) {
			pos.SetCoordinateY(0.01);
			allSolid->SetPos(pos);
			vector3D velocidad = allSolid->GetSpeed();
			velocidad.SetCoordinateY(-velocidad.GetCoordinateY());
			allSolid->SetSpeed(velocidad);
		}
		if (pos.GetCoordinateZ() < 0) {
			pos.SetCoordinateZ(0.01);
			allSolid->SetPos(pos);
			vector3D velocidad = allSolid->GetSpeed();
			velocidad.SetCoordinateZ(-velocidad.GetCoordinateZ());
			allSolid->SetSpeed(velocidad);
		}
	}
}


void scene::ProcessKeyPressed(unsigned char key, int px, int py) {
	//de momento no hacemos nada...
	cout << "Tecla pulsada: " << key << std::endl;
}

void scene::ProcessMouseMovement(int x, int y) {
	//de momento no hacemos nada...
	cout << "Movimiento del mouse: " << x << "," << y << std::endl;
}

void scene::ProcessMouseClick(int button, int state, int x, int y) {
	//de momento no hacemos nada...
	cout << "Clic: " << button << std::endl;
}

