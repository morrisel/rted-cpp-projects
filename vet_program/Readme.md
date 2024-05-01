## Veterinary Program

### Brief Description:
The Veterinary Program is designed to manage and monitor the health of various animals under veterinary care.
It includes classes for different types of animals and provides functionality to check their health status.

### Detailed Description:
This C++ program consists of several classes:

- Animal: Base class representing an animal with common attributes like name, body temperature, breathing rate, and heart rate.
- Dog, Cat, Cow: Derived classes representing specific types of animals with specialized health checks.
- Vet: Singleton class responsible for managing the animals and providing functions to check their health status.

#### Compilation:
To compile the program, you can use the following commands:
```bash
g++ *.cpp -Wall -Wextra -Weffc++ -std=c++14 -pedantic -o vet_program
```

#### Functionality:
Input of animal information including name, body temperature, breathing rate, and heart rate.
Health check for animals, determining if they are within healthy ranges.
Identification of sick animals and sick dogs specifically.

#### Code Style:
Allman Style indentation.
Google Style for comments.

#### Classes and Files:
- Animal.hpp, Animal.cpp: Declaration and implementation of the base Animal class.
- Dog.hpp, Dog.cpp: Declaration and implementation of the Dog class.
- Cat.hpp, Cat.cpp: Declaration and implementation of the Cat class.
- Cow.hpp, Cow.cpp: Declaration and implementation of the Cow class.
- Vet.hpp, Vet.cpp: Declaration and implementation of the Vet class.
- main.cpp: Declaration and implementation of the runnig main program.

#### References:
- Google Style: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Google C++ Style Guide](https://google.github.io/styleguide/cpp    guide.html)
- Indentation Style: &nbsp;[Indentation Style](https://en.wikipedia.org/wiki/Indentation_style)


---
### Additional Information:

#### Use Cases:
Monitoring the health of animals in a veterinary clinic.
Managing animal health records in a shelter or farm.

#### Development Plans:
Enhance health check criteria for more accurate assessments.
Add support for additional animal types.
Implement features for managing medical treatments and appointments.

Installation and Usage:
To use the Veterinary Program, follow these steps:

Clone the repository to your local machine.
Compile the source files using a C++ compiler.
Run the compiled executable.
Follow the on-screen instructions to input animal information and perform health checks.

#### Contributing:
Contributions are welcome! If you'd like to contribute to the Veterinary Program, please follow these guidelines:

Fork the repository.
Create a new branch for your feature or bug fix.
Make your changes and ensure they adhere to the project's coding standards.
Test your changes thoroughly.
Submit a pull request detailing the changes you've made.
