// Cow.hpp - Declaration of the Cow class.

#pragma once

#include "Animal.hpp"

class Cow : public Animal
{
	public:
		Cow(std::string name, double temp, double breath, double heart, double liters);
		~Cow() override = default;    // Virtual destructor

		bool check_health() const override;    // Overrides virtual function from Animal

	private:
		double liters;    // Represents the amount of milk produced (likely in liters)
};

