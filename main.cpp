// NOA PASCAL | EXERCICES C++ | SEMAINE 1

#include <iostream>
#include "Vecteur2.h"
#include "World.h"


int main()
{
	/* TEST EXO 10
	std::cout << "Test de Spawn :" << std::endl;

	// Test Spawn
	StaticObject staticObj(1, 3);
	BreakableObject breakableObj(4, 4, 3, 2);
	Mob mob (4, 15, 5, 5, Vecteur2(14, 18), 6);
	Player player(4, 15, 5, 5, Vecteur2(39, 45), 6);
	

	std::cout << std::endl;
	std::cout << "Test de Move :" << std::endl;

	// Test Move
	mob.Move();
	player.Move();

	std::cout << std::endl;
	std::cout << "Test de Attack :" << std::endl;

	// Test Attack
	player.Attack(&mob);
	player.Attack(&breakableObj);

	std::cout << std::endl;
	*/

	World start;

	start.Init();
	start.Step();
}

