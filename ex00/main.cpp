#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main(void)
{
	std::cout << "\n\n========== Default Subject TEST ==========\n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << GREEN << "Animal type is: " << j->getType() << "." << RESET << std::endl;
	std::cout << GREEN << "Animal type is: " << i->getType() << "." << RESET << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	i = j;
	std::cout << GREEN << "Animal type is: " << i->getType() << "." << RESET << std::endl;
	i->makeSound(); //will output the dog sound!
	delete j;
	j = meta;
	std::cout << GREEN << "Animal type is: " << j->getType() << "." << RESET << std::endl;
	j->makeSound(); //will output the default Animal sound, i.e. '<?>'!
	delete meta;

	std::cout << "\n\n========== WrongAnimal TEST ==========\n" << std::endl;
	const WrongAnimal* META = new WrongAnimal();
	const WrongAnimal* I = new WrongCat();
	std::cout << GREEN << "WrongAnimal type is: " << I->getType() << "." << RESET << std::endl;
	I->makeSound(); //will output the WrongCat sound!
	META->makeSound();
	delete I;
	delete META;
	return 0;
}