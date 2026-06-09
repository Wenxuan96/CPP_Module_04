#include "Animal.hpp"
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BLUE << "Brain: Default constructor is called." << RESET << std::endl;
	ideas.fill("");
}

Brain::~Brain()
{
	std::cout << BLUE << "Brain: Deconstructor is called." << RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << BLUE << "Brain: Copy constructor is called." << RESET << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << BLUE << "Brain: Copy assignment operator is called." << RESET << std::endl;
	if (this != &other)
	{
		for (size_t i = 0; i < ideas.size(); i++)
			ideas[i] = other.ideas[i];
	}
	return *this;
}