/**
 *Compile under ubuntu 12.04 
 *g++ -o ../../dist/bin/app main.cpp `pkg-config --libs OGRE OIS`
 */

#include "OGRE/ExampleApplication.h"

class Example1 : public ExampleApplication
{
public:
	void createScene()
	{
		//Set the scene's ambient light
		mSceneMgr->setAmbientLight(Ogre::ColourValue(0.5f,0.5f,0.5f));

		//Create an Entity
		Ogre::Entity* ogreHead = mSceneMgr->createEntity("Head","ogrehead.mesh");

		//Create a SceneNode and attach to Entity to it
		Ogre::SceneNode *headNode = mSceneMgr->getRootSceneNode()->createChildSceneNode("HeadNode");
		headNode->attachObject(ogreHead);

		//Create a Light and set its position
		Ogre::Light *light = mSceneMgr->createLight("MainLight");
		light->setPosition(20,80,50);

	}
};

int main(int argc, char *argv[])
{
	Example1 app;
	app.go();

	return 0;
}
