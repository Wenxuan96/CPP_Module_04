#pragma once
#include <iostream>
#include <array>

class Brain
{
	private:
		std::array<std::string, 100> ideas;
	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();
};