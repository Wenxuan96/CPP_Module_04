#include "Animal.hpp"
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BLUE << "Brain: Default constructor is called." << RESET << std::endl;
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
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

const std::string& Brain::getIdea(int index) const
{
    static const std::string empty = "";

    if (index >= 0 && index < 100)
        return ideas[index];

    return empty;
}