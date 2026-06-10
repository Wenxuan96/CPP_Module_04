#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), catBrain(new Brain())
{
	std::cout << BLUE << "Cat: Default constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << BLUE << "Cat: Copy constructor is called. Created a " << type << " instance." << RESET << std::endl;
	catBrain = new Brain(*other.catBrain);
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << BLUE << "Cat: Copy assignment operator is called. Created a " << type << " instance." << RESET << std::endl;
	if (this != &other)
    {
        Animal::operator=(other);
        delete catBrain;     
        catBrain = new Brain(*other.catBrain);
    }
	return *this;
}

Cat::~Cat()
{
	delete catBrain;
	std::cout << BLUE << "Cat: Deconstructor is called." << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << GREEN << "'Meowwww'." << RESET << std::endl;
}

const std::string& Cat::getType() const
{
	return type;
}

Brain* Cat::getBrain() const
{
    return catBrain;
}