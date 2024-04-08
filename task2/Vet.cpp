// google style c++
// Vet.cpp
#include "Vet.hpp"
#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Cow.hpp"

// Implementation of the get_instance method
Vet& Vet::get_instance() {
	static Vet instance;
	return instance;
}

// Constructor implementation
Vet::Vet() : animals() {
	// Possible initializations, if necessary
}

// Destructor implementation
Vet::~Vet() {
	// Possible initializations, if necessary
}

// Method to add a new animal to the veterinarian's care
void Vet::add_animal(Animal* &&animal) {
	animals.push_back(std::unique_ptr<Animal>(animal));
}

// Method to display information about sick animals
void Vet::show_sick() const {
	// Iterate through all animals in the collection
	for (const auto &animal : animals) {
		// Check if the animal is sick
		if(!animal->check_health())
		{
			std::cout << animal->name << " ";
		}

	}
	std::cout << std::endl;
}

// Method to display information about sick dogs
void Vet::show_sick_dogs() const {
	// Iterate through all animals in the collection
	for (const auto &animal : animals) {
		// Attempt to cast the animal pointer to a Dog pointer
		auto dog = dynamic_cast<Dog*>(animal.get());
		// Check if the cast was successful and if the dog is sick
		if (dog && !animal->check_health()) {
			std::cout << dog->name << " ";
		}
	}
	std::cout << std::endl;
}

