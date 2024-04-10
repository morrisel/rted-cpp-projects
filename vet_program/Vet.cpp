// Vet.cpp - Implementation of the Vet class.

#include "Vet.hpp"
#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Cow.hpp"

Vet& Vet::get_instance()
{
	static Vet instance;    // Static instance for singleton pattern
	return instance;
}

Vet::Vet() : animals()
{
}

Vet::~Vet()
{
}

void Vet::add_animal(Animal* &&animal)
{
	animals.push_back(std::unique_ptr<Animal>(animal));    // Stores animal using unique_ptr
}

void Vet::show_sick() const
{
	for (const auto &animal : animals)
	{
		if(!animal->check_health())
		{
			std::cout << animal->name << " ";
		}

	}
	std::cout << std::endl;
}

void Vet::show_sick_dogs() const
{
	for (const auto &animal : animals)
	{
		auto dog = dynamic_cast<Dog*>(animal.get());    // Attempts to cast to Dog*
		if (dog && !animal->check_health())    // Checks if cast succeeded and dog is sick
		{
			std::cout << dog->name << " ";
		}
	}
	std::cout << std::endl;
}

