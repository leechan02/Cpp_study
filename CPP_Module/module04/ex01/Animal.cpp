#include "Animal.hpp"

Animal::Animal(void) : type("Human")
{
	std::cout << GREEN << "Animal constructor called" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << "Animal destructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& obj) : type(obj.type)
{
	std::cout << GREEN << "Animal Copy constructor called" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	if (this == &obj) return *this;

	type = obj.type;
	std::cout << GREEN << "Animal Copy assigment operator called" << RESET << std::endl;
	return *this;
}

void Animal::makeSound(void) const {}

std::string Animal::getType(void) const
{
	return (type);
}