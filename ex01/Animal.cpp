#include "Animal.hpp"

Animal::Animal(): type("<?>")
{
	std::cout << BLUE << "Animal: Default constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

Animal::Animal(const std::string type): type(type)
{
	std::cout << BLUE << "Animal: Parameterized constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << BLUE << "Animal: Copy constructor is called. Created a " << type << " instance." << RESET << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << BLUE << "Animal: Copy assignment operator is called. Created a " << type << " instance." << RESET << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << BLUE << "Animal: Deconstructor is called." << RESET << std::endl;
}

void Animal::makeSound() const
{
	std::cout << GREEN << "'<?>'." << RESET << std::endl;
}

const std::string& Animal::getType() const
{
	return type;
}