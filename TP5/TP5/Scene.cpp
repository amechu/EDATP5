#include "Scene.h"

Scene::Scene()
{
}


Scene::~Scene()
{
}


void Scene::Draw(const Userdata& Userdata) {

}

void Scene::LoadWorm1(/*teclas*/) {
	this->Worm1 = new Worm(/*teclas*/);
}

void Scene::LoadWorm2(/*teclas*/) {
	this->Worm2 = new Worm(/*teclas*/);
}
