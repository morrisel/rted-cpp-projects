// Animal.hpp - Declaration of the Animal class
#pragma once

#include <string>

class Animal
{
	public:
		std::string name;       // Name of the animal
		double temp;            // Body temperature
		double breath;          // Breathing rate
		double heart;           // Heart rate

		Animal(std::string name, double temp, double breath, double heart);

		// Virtual function for checking health
		virtual bool check_health() const = 0;

		// Virtual destructor
		virtual ~Animal() = default;

};

