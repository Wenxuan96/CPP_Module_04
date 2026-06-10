#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), dogBrain(new Brain())
{
	std::cout << BLUE << "Dog: Default constructor is called. Created a " << type << " instance." << RESET << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << BLUE << "Dog: Copy constructor is called. Created a " << type << " instance." << RESET << std::endl;
	dogBrain = new Brain(*other.dogBrain);
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << BLUE << "Dog: Copy assignment operator is called. Created a " << type << " instance." << RESET << std::endl;
	if (this != &other)
    {
        Animal::operator=(other);
        delete dogBrain;     
        dogBrain = new Brain(*other.dogBrain);
    }
	return *this;
}

Dog::~Dog()
{
	delete dogBrain;
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