#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\n========== Default Subject TEST ==========\n" << std::endl;

	int n = 10;
	Animal* animals[n];
	int i = 0;
	
	while (i < n/2)
	{
		std::cout << i << " ";
		animals[i] = new Cat();
		i++;
	}
	while (i < n)
	{
		std::cout << i << " ";
		animals[i] = new Dog();
		i++;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << i << " ";
		delete animals[i];
	}

	std::cout << "\n========== COPY CONSTRUCTOR TEST ==========\n" << std::endl;
	Animal a((Cat()));

	std::cout << "\n========== COPY ASSIGNMENT OPERATOR TEST ==========\n" << std::endl;
	Animal b;
	b = Dog();
	std::cout << GREEN << "Animal b is: " << b.getType() << RESET << std::endl;

	std::cout << "\n========== DEEP COPY TEST ==========\n" << std::endl;
	// test deep copy for Dog
	Dog dog1;
	dog1.getBrain()->setIdea(0, "I love bones");
	dog1.getBrain()->setIdea(1, "I want to play");

	Dog dog2(dog1);  // copy constructor
	std::cout << "dog1 idea 0: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "dog2 idea 0: " << dog2.getBrain()->getIdea(0) << std::endl;

	// modify dog2 and check dog1 is not affected
	dog2.getBrain()->setIdea(0, "I hate bones");
	std::cout << "\nAfter modifying dog2:" << std::endl;
	std::cout << "dog1 idea 0: " << dog1.getBrain()->getIdea(0) << std::endl;  // should still be "I love bones"
	std::cout << "dog2 idea 0: " << dog2.getBrain()->getIdea(0) << std::endl;  // should be "I hate bones"

	// test assignment operator
	Dog dog3;
	dog3 = dog1;
	dog3.getBrain()->setIdea(0, "I am dog3");
	std::cout << "\nAfter assignment and modifying dog3:" << std::endl;
	std::cout << "dog1 idea 0: " << dog1.getBrain()->getIdea(0) << std::endl;  // should still be "I love bones"
	std::cout << "dog3 idea 0: " << dog3.getBrain()->getIdea(0) << std::endl;  // should be "I am dog3"
}