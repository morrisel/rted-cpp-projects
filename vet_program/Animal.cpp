// Animal.cpp - Implementation of the Animal class
#include "Animal.hpp"

Animal::Animal(std::string name, double temp, double breath, double heart)
	: name(std::move(name)), temp(temp), breath(breath), heart(heart)
{
}

