#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << BLUE << "WrongCat: Default constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

WrongCat::WrongCat(const std::string type): WrongAnimal(type)
{
	std::cout << BLUE << "WrongCat: Parameterized constructor Created a " << type << " instance." << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << BLUE << "WrongCat: Copy constructor is called. Created a " << type << " instance." << RESET << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << BLUE << "WrongCat: Copy assignment operator is called. Created a " << type << " instance." << RESET << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << BLUE << "WrongCat: Deconstructor is called." << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << GREEN << "'Moooooo'." << RESET << std::endl;
}

const std::string& WrongCat::getType() const
{
	return type;
}