#include "WrongAnimal.hpp"

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("<?>")
{
	std::cout << BLUE << "WrongAnimal: Default constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type): type(type)
{
	std::cout << BLUE << "WrongAnimal: Parameterized constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << BLUE << "WrongAnimal: Copy constructor is called. Created a " << type << " instance." << RESET << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << BLUE << "WrongAnimal: Copy assignment operator is called. Created a " << type << " instance." << RESET << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BLUE << "WrongAnimal: Deconstructor is called." << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << GREEN << "'<?>'." << RESET << std::endl;
}

const std::string& WrongAnimal::getType() const
{
	return type;
}