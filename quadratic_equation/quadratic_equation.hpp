/** quadratic_equation.hpp                                                    *
 *  ----------------------                                                    *
 *                                                                            *
 *  - This header file defines the Equation class for representing quadratic  *
 *    equations of the form:                                                  *
 *                                                                            *
 *        a*x^2 + b*x + c = 0                                                 *
 *                                                                            *
 *    The class provides methods to set and get the coefficients a, b, and c, *
 *    as well as methods to solve the equation and retrieve its solutions.    *
 *    Additionally, it supports operator overloading for arithmetic           *
 *    operations with equations, such as addition.                            *
 *                                                                            *
 * -------------------------------------------------------------------------- */


#ifndef QUADRATIC_EQUATION_HPP
#define QUADRATIC_EQUATION_HPP

#include <iostream>
#include <limits>
#include <iomanip>
#include <stdexcept>
#include <cmath>


class Equation
{
	private:
		double a;                      /* Coefficient for x^2 */
		double b;                      /* Coefficient for x */
		double c;                      /* Coefficient term */

		double *solutions;             /* Dynamic array to store roots */

		std::size_t solutions_size;    /* Number of solutions */

		/* Recalculates the solutions based on coefficients */
		void update_solutions();

	public:
		/* Constructor and Destructor */
		Equation(double a, double b, double c);
		~Equation();

		/* Deep copy Constructor and Assignment Operator */
		Equation(const Equation &other);
		Equation &operator=(const Equation &other);

		/* Getter methods */
		double get_a() const;
		double get_b() const;
		double get_c() const;
		std::size_t get_solutions_size() const;
		const double *get_solutions() const;

		/* Setter methods */
		void set_a(double new_a);
		void set_b(double new_b);
		void set_c(double new_c);

		/* Friend functions for equation manipulation */
		friend Equation operator+(const Equation &eq, double value);
		friend Equation operator+(double value, const Equation &eq);
		friend Equation operator+(const Equation &eq1, const Equation &eq2);

		/* Overloaded output operator for Equation class */
		friend std::ostream &operator<<(std::ostream &os, const Equation &eq);
};

#endif /* QUADRATIC_EQUATION_HPP */

