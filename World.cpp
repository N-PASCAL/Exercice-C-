#include "World.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "player.h"
#include "AMovable.h"

void World::Init()
{
	StaticObject* staticObj = new StaticObject(1, 3);
	BreakableObject* breakableObj = new BreakableObject(4, 4, 3, 1);
	Mob* mob = new Mob(4, 15, 20, 20, Vecteur2(14, 18), 6);
	Player* player = new Player(4, 15, 10, 10, Vecteur2(39, 45), 6);

	entities.push_back(staticObj);
	entities.push_back(breakableObj);
	entities.push_back(mob);
	entities.push_back(player);
}

void World::Step() {

	bool MobAlive = true;
	bool BreakAble = true;

	for (int i = 0; i < entities.size(); i++)
	{
		Mob* _mob = dynamic_cast<Mob*>(entities[i]);
		if (_mob != 0)
		{
			for (int j = 0; j < entities.size(); j++)
			{
				BreakableObject* _breakableObj = dynamic_cast<BreakableObject*>(entities[j]);
				if (_breakableObj != 0)
				{
					float dx = _breakableObj->GetPosition().GetX() - _mob->GetPosition().GetX();
					float dy = _breakableObj->GetPosition().GetY() - _mob->GetPosition().GetY();

					Vecteur2 dist(dx, dy);
					dist.Norm();

					_mob->SetDirection(dist);
					_mob->Move(); 
				}
			}
		}

	
		Player* _player = dynamic_cast<Player*>(entities[i]);
		if (_player != 0)
		{
			for (int k = 0; k < entities.size(); k++)
			{
				Mob* _mob = dynamic_cast<Mob*>(entities[k]);
				if (_mob != 0 and _mob->GetCurrentHealth() >= 0)
				{
					float dx = _mob->GetPosition().GetX() - _player->GetPosition().GetX();
					float dy = _mob->GetPosition().GetY() - _player->GetPosition().GetY();

					Vecteur2 dist(dx, dy);
					dist.Norm();

					_player->SetDirection(dist);
					_player->Move();

					if (abs(_mob->GetPosition().GetX() - _player->GetPosition().GetX()) < 1 and abs(_mob->GetPosition().GetY() - _player->GetPosition().GetY()) < 1)
					{
						_player->Attack(_mob);
					}

				}
				else
				{
					for (int l = 0; l < entities.size(); l++)
					{
						BreakableObject* _breakableObj = dynamic_cast<BreakableObject*>(entities[l]);
						if (_breakableObj != 0)
						{
							float dx = _breakableObj->GetPosition().GetX() - _player->GetPosition().GetX();
							float dy = _breakableObj->GetPosition().GetY() - _player->GetPosition().GetY();

							Vecteur2 dist(dx, dy);
							dist.Norm();

							_player->SetDirection(dist);
							_player->Move();

							if (abs(_breakableObj->GetPosition().GetX() - _player->GetPosition().GetX()) < 1 and abs(_breakableObj->GetPosition().GetY() - _player->GetPosition().GetY()) < 1)
							{
								_player->Attack(_breakableObj);
							}
						}
					}
				}
			}
		}

		for (int i = 0; i < entities.size(); i++)
		{
			Mob* _mob = dynamic_cast<Mob*>(entities[i]);
			BreakableObject* _breakableObj = dynamic_cast<BreakableObject*>(entities[i]);
			if (entities[i] != _mob)
			{
				MobAlive = false;
			}
			if (entities[i] != _breakableObj) {
				BreakAble = false;
			}
		}

		if (MobAlive == false and BreakAble == false)
		{
			std::cout << "Simulation Finished";
		}
	}
}