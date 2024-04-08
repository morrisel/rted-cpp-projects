// Vet.hpp
#pragma once

#include <vector>
#include <memory>
#include "Animal.hpp"

// Class representing a veterinarian.
class Vet
{
	public:
		// Returns the singleton instance of Vet.
		static Vet& get_instance();

		// Adds a new animal to the veterinarian's care.
		// Takes ownership of the provided animal pointer.
		void add_animal(Animal* &&animal);

		void show_sick() const;
		void show_sick_dogs() const;

	private:
		Vet();  // private constructor
		~Vet(); // private destructor

		// Disallow copy construction and assignment.
		Vet(const Vet&) = delete;
		Vet& operator=(const Vet&) = delete;

		// Disallow move construction and assignment.
		Vet(Vet&&) = delete;
		Vet& operator=(Vet&&) = delete;

		// Collection of animals under the veterinarian's care.
		std::vector<std::unique_ptr<Animal>> animals;
};

