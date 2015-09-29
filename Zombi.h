#pragma once

class Zombie
{
private:
	
	int m_health;
	int m_attack;
	char m_prevOcc[64];
	

public:

	void setZombieHealth(int a_health);
	int getZombieHealth();
	void setZombieAttack(int a_attack);
	int getZombieAttack();
	void setZombiePrevOcc(char a_prevOcc[64]);
	char getZombiePrevOcc();

};


