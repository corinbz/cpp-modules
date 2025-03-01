#include "../include/Weapon.hpp"

std::string Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string type)
{	
	this->type = type;
}

//constructor
Weapon::Weapon()
{
};

Weapon::Weapon(std::string type)
{
	Weapon::setType(type);
}
