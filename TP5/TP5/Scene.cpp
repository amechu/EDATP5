#include "Scene.h"

Scene::Scene()
{
}


Scene::~Scene()
{
}


void Scene::Draw(const Userdata& Userdata) {

}


void Scene::LoadWorm1(Key Jump, Key Right, Key Left) {
	this->Worm1 = new Worm(Jump, Right, Left);
}


void Scene::LoadWorm2(Key Jump, Key Right, Key Left) {
	this->Worm2 = new Worm(Jump, Right, Left);
}
