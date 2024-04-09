/** quadratic_equation.cpp                                                    *
 *  ----------------------                                                    *
 *                                                                            *
 *  - Solves quadratic equations and provides related operations              *
 *                                                                            *
 *        a*x^2 + b*x + c = 0                                                 *
 *                                                                            *
 * -------------------------------------------------------------------------- */

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <cmath>
#include <limits>

/* Include the header file */
#include "quadratic_equation.hpp"


/* Implementation of the private method */
void Equation::update_solutions()
{
	/* Calculate the discriminant */
	double discriminant = b * b - 4 * a * c;

	/* Determine the number of solutions based on the discriminant */
	if (discriminant > 0)
	{
		/* Two real solutions */
		solutions_size = 2;
		solutions[0] = (-b + std::sqrt(discriminant)) / (2 * a);
		solutions[1] = (-b - std::sqrt(discriminant)) / (2 * a);
	}
	else if (discriminant == 0)
	{
		/* One real solution */
		solutions_size = 1;
		solutions[0] = -b / (2 * a);
	}
	else
	{
		/* None real solution */
		solutions_size = 0;
	}
}

/* Implementation of the Equation class */
Equation::Equation(double a, double b, double c)
	: a(a), b(b), c(c), solutions(nullptr), solutions_size(0)
{
	if (a == 0)
	{
		throw std::invalid_argument("Coefficient 'a' cannot be zero.");
	}

	/* Allocate memory for solutions array */
	solutions = new double[2];
	update_solutions();
}

/* Destructor */
Equation::~Equation()
{
	/* Free dynamically allocated memory */
	delete[] solutions;
}

/* Copy constructor */
Equation::Equation(const Equation &other)
	: a(other.a), b(other.b), c(other.c), solutions(nullptr), solutions_size(other.solutions_size)
{
	/* Dynamic allocate memory for solutions array */
	solutions = new double[2];

	/* Copy solutions from 'other' */
	std::copy(other.solutions, other.solutions + other.solutions_size, solutions);
}

/* Assignment operator */
Equation &Equation::operator=(const Equation &other)
{
	/* Self-assignment check */
	if (this != &other)
	{
		/* Deallocate existing memory */
		delete[] solutions;

		/* Copy data from 'other' */
		a = other.a;
		b = other.b;
		c = other.c;

		solutions_size = other.solutions_size;

		/* Allocate memory for solutions array */
		solutions = new double[2];
		/* Copy solutions from 'other' */
		std::copy(other.solutions, other.solutions + other.solutions_size, solutions);
	}
	return *this;
}

/* Getter methods */
double Equation::get_a() const { return a; }
double Equation::get_b() const { return b; }
double Equation::get_c() const { return c; }

size_t Equation::get_solutions_size() const { return solutions_size; }
const double *Equation::get_solutions() const { return solutions; }

/* Setter methods */
void Equation::set_a(double new_a)
{
	/* Check if new_a is zero */
	if (new_a == 0)
	{
		throw std::invalid_argument("Coefficient 'a' cannot be zero.");
	}

	/* Update coefficient a and recalculate solutions */
	a = new_a;
	update_solutions();
}

void Equation::set_b(double new_b)
{
	/* Update coefficient b and recalculate solutions */
	b = new_b;
	update_solutions();
}

void Equation::set_c(double new_c)
{
	/* Update coefficient c and recalculate solutions */
	c = new_c;
	update_solutions();
}

/* Friend functions for equation manipulation */
Equation operator+(const Equation& eq, double value)
{
	/* Add a constant value to the equation's constant term */
	return Equation(eq.a, eq.b, eq.c + value);
}

Equation operator+(double value, const Equation& eq)
{
	/* Add a constant value to the equation's constant term */
	return Equation(eq.a, eq.b, eq.c + value);
}

Equation operator+(const Equation& eq1, const Equation& eq2)
{
	/* Add two equations together */
	return Equation(eq1.a + eq2.a, eq1.b + eq2.b, eq1.c + eq2.c);
}

/* Helper function to check if a number is an integer */
bool isInteger(double num)
{
	return std::abs(num - std::round(num)) < std::numeric_limits<double>::epsilon();
}

/* Overloaded output operator for Equation class */
std::ostream& operator<<(std::ostream& os, const Equation& eq)
{
	/* Output coefficients of the equation */
	os << std::fixed;

	/* Coefficient a */
	if (isInteger(eq.a))
	{
		os << std::setprecision(0) << eq.a;
	}
	else
	{
		os << std::setprecision(1) << eq.a;
	}

	os << "X^2 + ";

	/* Coefficient a */
	if (isInteger(eq.b))
	{
		os << std::setprecision(0) << eq.b;
	}
	else
	{
		os << std::setprecision(1) << eq.b;
	}

	os << "X + ";

	/* Coefficient term c */
	if (isInteger(eq.c))
	{
		os << std::setprecision(0) << eq.c;
	}
	else
	{
		os << std::setprecision(1) << eq.c;
	}

	os << " = 0";

	return os;
}


int main()
{
	using namespace std;

	Equation eq(10, 20, 30);
	cout << eq << endl;
	// should print: 10X^2 + 20X + 30 = 0
	cout << eq.get_solutions_size() << endl;
	// should print 0

	eq = -20 + eq;
	cout << eq << endl;
	// should print: 10X^2 + 20X + 10 = 0
	cout << eq.get_solutions_size() << endl;
	// should print 1
	cout << eq.get_solutions()[0] << endl;
	// should print: X1 = -1

	cout << Equation(1, 5, 3) + Equation(2, 6, 4) << endl;
	// should print: 3X^2 + 11X + 7 = 0

	eq = Equation(1.0, 3.0, -4.0);
	cout << eq << endl;
	// should print 1X^2 + 3X + -4 = 0
	cout << eq.get_solutions_size() << endl;
	// should print 2
	cout << "X1 = " << eq.get_solutions()[0] << endl;
	// should print: X1 = 1
	cout << "X2 = " << eq.get_solutions()[1] << endl;
	// should print: X2 = -4

	return 0;
}
