// Cow.cpp - Implementation of the Cow class.

#include "Cow.hpp"

Cow::Cow(std::string name, double temp, double breath, double heart, double liters)
	: Animal(std::move(name), temp, breath, heart), liters(liters) 
	  // Calls the Animal constructor and initializes the liters member
{
}

bool Cow::check_health() const
{
	// Checks if the cow's vital signs and milk production are within healthy ranges
	return  temp >= 38.5 && temp <= 39.5 &&
		breath >= 26 && breath <= 50 && 
		heart >= 48  && heart <= 84  && liters >= 30;
}

