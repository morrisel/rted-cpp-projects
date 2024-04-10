// Dog.cpp - Implementation of the Dog class.

#include "Dog.hpp"

#include "Animal.hpp"
#include "Cat.hpp"
#include "Cow.hpp"
#include "Vet.hpp"

Dog::Dog(std::string name, double temp, double breath, double heart, bool is_large)
	: Animal(std::move(name), temp, breath, heart), is_large(is_large)
	  // Initializes base class (Animal) and the is_large member
{
}

bool Dog::check_health() const 
{
	if (is_large) 
	{
		// Health check criteria for large breed dogs
		return  temp >= 38.0 && temp <= 39.2 &&
		       	breath >= 10 && breath <= 35 && 
			heart >= 60 && heart <= 100;
	}
	else
	{
		// Health check criteria for smaller breed dogs
		return  temp >= 38.0 && temp <= 39.2 && 
			breath >= 10 && breath <= 35 &&
		       	heart >= 100 && heart <= 140;
	}
}

