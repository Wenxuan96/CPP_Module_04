#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\n========== Default Subject TEST ==========\n" << std::endl;

	int n = 10;
	Animal* animals[n];
	int i = 0;
	AAnimal a;

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
}