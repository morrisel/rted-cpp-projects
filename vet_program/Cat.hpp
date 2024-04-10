// Cat.hpp - Declaration of the Cat class.

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{ 
	public:
		Cat(std::string name, double temp, double breath, double heart);
		~Cat() override = default;	// Virtual destructor

		// Overrides virtual function from Animal
		bool check_health() const override;
};

