#include "Scene.h"

Scene::Scene()
{
}


Scene::~Scene()
{
	delete Worm1;
	delete Worm2;
}


void Scene::Draw(const Userdata& Userdata) {

}


void Scene::Refresh() {

}


void Scene::LoadWorm1(const Userdata& Userdata) {
	this->Worm1 = new Worm(Userdata);
}


void Scene::LoadWorm2(const Userdata& Userdata) {
	this->Worm2 = new Worm(Userdata);
}
