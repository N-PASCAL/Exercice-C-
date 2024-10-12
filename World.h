#ifndef WORLD_H__
#define WORLD_H__

#include <iostream>
#include <vector>
#include "Entity.h"


class World 
{
public:

	std::vector<Entity*> entities;

	void Init();
	void Step();
};

#endif 