# Quadratic Equation Solver


### Brief Description:
 
This project implements a solution for quadratic equations.
Written in C++ following the Allman (code formatting) and Google (comment style) styles.


### Detailed Description:

This C++ program provides functionality to solve quadratic equations of the form ax^2 + bx + c = 0. 
It consists of two main files:
- `quadratic_equation.cpp`: Contains the implementation of the quadratic equation solver.
- `quadratic_equation.hpp`: Contains the header file defining the necessary functions and classes.

### Compilation

To compile the program, you can use the following commands:

#### Compilation with basic requirements flags:

```bash
g++ *.cpp -Wall -Wextra -Weffc++ -std=c++14 -pedantic -o program
```

#### Compilation with the extra additional flags:

```bash
g++ -std=c++14 -Wall -g -O0 -pedantic -std=c++14 -Wall -Wextra -Weffc++ -Wconversion -o out_program *.cpp
```

#### Functionality:
	- Input of quadratic equation coefficients.
	- Calculation of the discriminant.
	- Output of real or complex roots.

#### Code Style:
	- Allman Style indentation.
	- Google Style for comments.

#### References:
- Google Style: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
- Indentation Style: &nbsp;[Indentation Style](https://en.wikipedia.org/wiki/Indentation_style)





#### Additional Information
	Complexity: Simple
	Time complexity: O(1)
	Memory complexity: O(1)



Comes in future version

==========================
##### Use cases:
	Solving mathematical problems.
	Writing educational programs.
	Scientific research.

#### Development plans:
	Add support for complex numbers.
	Add the ability to calculate the discriminant.
	Add the ability to plot graphs.

