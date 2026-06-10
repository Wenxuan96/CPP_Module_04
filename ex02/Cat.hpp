#pragma once 
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* catBrain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();
		virtual void makeSound() const;
		const std::string& getType() const;
		Brain*	getBrain() const;
};