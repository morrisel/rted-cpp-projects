// Cat.cpp - Implementation of the Cat class.

#include "Cat.hpp"

Cat::Cat(std::string name, double temp, double breath, double heart)
	: Animal(std::move(name), temp, breath, heart)
	  // Calls the base class (Animal) constructor
{
}

bool Cat::check_health() const
{
	// Checks if the cat's vital signs are within a healthy range
	return temp >= 38.0 && temp <= 39.2 &&
	       breath >= 16 && breath <= 40 &&
	       heart >= 120 && heart <= 140;
}

