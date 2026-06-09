#include "AAnimal.hpp"

AAnimal::AAnimal(): type("<?>")
{
	std::cout << BLUE << "AAnimal: Default constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

AAnimal::AAnimal(const std::string type): type(type)
{
	std::cout << BLUE << "AAnimal: Parameterized constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << BLUE << "AAnimal: Copy constructor is called. Created a " << type << " instance." << RESET << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << BLUE << "AAnimal: Copy assignment operator is called. Created a " << type << " instance." << RESET << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << BLUE << "AAnimal: Deconstructor is called." << RESET << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << GREEN << "'<?>'." << RESET << std::endl;
}

const std::string& AAnimal::getType() const
{
	return type;
}