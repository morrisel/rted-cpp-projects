// Dog.hpp - Declaration of the Dog class.

#pragma once

#include "Animal.hpp"

class Dog : public Animal 
{
	public:
		Dog(std::string name, double temp, double breath, double heart, bool is_large);
		~Dog() override = default;    // Virtual destructor

		// Overrides virtual function from Animal
		bool check_health() const override;

	private:
		bool is_large;    // Indicates whether the dog is a large breed
};

