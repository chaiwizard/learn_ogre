#include "OGRE/ExampleApplication.h"

class Example1 : public ExampleApplication
{
public:
	void createScene()
	{
		Ogre::Entity* ent = mSceneMgr->createEntity("MyEntity","ogrehead.mesh");
		mSceneMgr->getRootSceneNode()->attachObject(ent);

	}
};

int main(int argc, char *argv[])
{
	Example1 app;
	app.go();

	return 0;
}
