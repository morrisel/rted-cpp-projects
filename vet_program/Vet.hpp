// Vet.hpp - Declaration of the Vet class.

#pragma once

#include <vector>
#include <memory>
#include "Animal.hpp"

class Vet
{
	public:
		static Vet& get_instance();    // Singleton pattern for a single Vet instance

		void add_animal(Animal* &&animal);

		void show_sick() const;    // Displays names of all sick animals
		void show_sick_dogs() const;    // Displays names of sick dogs only

	private:
		Vet();    // Private constructor (for singleton pattern)
		~Vet();   // Destructor

		// Copy and move operations disabled (enforces the singleton pattern)
		Vet(const Vet&) = delete;
		Vet& operator=(const Vet&) = delete;
		Vet(Vet&&) = delete;
		Vet& operator=(Vet&&) = delete;

		std::vector<std::unique_ptr<Animal>> animals;    // Stores animals using smart pointers
};

