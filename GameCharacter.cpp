#include "Object.h"
#include "GameCharacter.h"
#include<iostream>
using namespace std;

GameCharacter::GameCharacter():Object()
{}

GameCharacter::GameCharacter(string name,string type,int health,int att,int def):Object(name,type)
{
    maxHealth=health;
    currentHealth=health;
    attack=att;
    defense=def;
}//type is the tpye that inhertance this class

bool GameCharacter::checkIsDead()
{
    //return (currentHealth<=0)?true:false
    if(currentHealth<=0)
        return true;
    else
        return false;
}

void GameCharacter::takeDamage(int dam)
{
    currentHealth-=dam;
    //return dam;
}

void GameCharacter::setMaxHealth(int max)
{
    maxHealth=max;
}

void GameCharacter::setCurrentHealth(int cur)
{
    currentHealth=cur;
}

void GameCharacter::setAttack(int att)
{
    attack=att;
}

void GameCharacter::setDefense(int def)
{
    defense=def;
}

int GameCharacter::getMaxHealth()
{
    return maxHealth;
}

int GameCharacter::getCurrentHealth()
{
    return currentHealth;
}

int GameCharacter::getAttack()
{
    return attack;
}

int GameCharacter::getDefense()
{
    return defense;
}
