#include "Date.h"
#include "Circle.h"
#include "High Score.h"
#include "Zombi.h"
#include <iostream>

void Date::setDay(int a_day){}
void Date::setMonth(int a_month) {}
void Date::setYear(int a_month) {}

int Date::getDate()
{

	std::cout << setDay << "/" << setMonth << "/" << setYear << std::endl;
}

const float PI = 3.14159265359;

float Circle::getRadius()
{
	
	return m_radius;

}

void Circle::setRadius(float a_radius) 
{ 
	
	m_radius = a_radius; 

}


float Circle::getArea()
{
	
	return PI * m_radius * m_radius;

}

float Circle::getDiameter()
{
	
	return 2 * m_radius;
	
}

float Circle::getCircumference()
{

	return getDiameter() * PI;

}


void HighScores::setHighScore1(int highScore[1]) {}

int HighScores::getHighScore1()
{
	return highScores[1];
}
void HighScores::setHighScore2(int highScore[2]) {}

int HighScores::getHighScore2()
{
	return highScores[2];
}
void HighScores::setHighScore3(int highScore[3]) {}

int HighScores::getHighScore3()
{
	return highScores[3];
}

int HighScores::highScoreAvg()
{
	return getHighScore1() / getHighScore2() / getHighScore3();
}

void Zombie::setZombieHealth(int a_health)
{
	m_health = a_health;
}
int Zombie::getZombieHealth()
{
	return m_health;
}

void Zombie::setZombieAttack(int a_attack)
{
	m_attack = a_attack;
}

int Zombie::getZombieAttack()
{
	return m_attack;
}

void Zombie::setZombiePrevOcc(char a_prevOcc[64])
{
	m_prevOcc[64] = a_prevOcc[64];
}

char Zombie::getZombiePrevOcc()
{
	return m_prevOcc[64];
}


void main()
{

	Zombie zombies[5];
	
	
	
}
