#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << BLUE << "Dog: Default constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << BLUE << "Dog: Copy constructor is called. Created a " << type << " instance." << RESET << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << BLUE << "Dog: Copy assignment operator is called. Created a " << type << " instance." << RESET << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << BLUE << "Dog: Deconstructor is called." << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << GREEN << "'WoofWoof'." << RESET << std::endl;
}

const std::string& Dog::getType() const
{
	return type;
}