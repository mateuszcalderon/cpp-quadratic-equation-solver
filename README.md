<p align="center">
  <img src="https://github.com/devicons/devicon/blob/v2.16.0/icons/cplusplus/cplusplus-original.svg" height="60" width="60" style="margin-right: 20px;">
</p>

<div align="center">
  <h1>C++ Quadratic Equation Solver</h1>
</div>

This C++ program solves quadratic equations in the form of _ax² + bx + c = 0_. It calculates the roots using the discriminant, which can result in two distinct real roots, one repeated root, or a notification if there are no real solutions. The program includes input validation to ensure correct user input and displays results with clear formatting.

#### Key Features:
  - Handles invalid input with error checking.
  - Implements efficient computation and clear output formatting.
  - Provides informative messages for equations with no real solutions.
  - Supports both distinct real roots and repeated roots.

## Code Walkthrough:
#### Libraries:
```cpp
  #include <iostream>
  #include <cmath>
  #include <iomanip>
  #include <limits>
```

  - ` <iostream> `: Used for input/output operations.
  - ` <cmath> `: Provides mathematical functions like ` pow ` and ` sqrt `.
  - ` <iomanip> `: Used for controlling the output format, such as setting decimal precision.
  - ` <limits> `: Allows checking for input errors and handling input buffer.

#### GetInput Function:
```cpp
  bool GetInput(double &variable) {
    std::cin >> variable;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
  return true;
  }
```

  - **Purpose:** Ensures that the user inputs valid numerical values. If the input fails, it clears the input buffer and prompts the user to try again.
  - **How it works:** The function reads input from the user and checks if the input was successful using ` std::cin.fail() `. If the input is invalid (e.g., non-numeric input), it clears the error flag and ignores the invalid input.

#### Main Function and 'a' Input Check:
```cpp
  int main() {
      double a, b, c;
...
  std::cout << "a = ";
  while (true) {
    if (!GetInput(a)) {
        std::cout << "Please enter a valid variable for 'a' = ";
    } else if (a == 0) {
        std::cout << "This is not a quadratic equation. 'a' cannot be zero. Please enter a non-zero value for 'a' = ";
    } else {
        break;
    }
  }
```

  - The program asks the user to input values for the quadratic equation's coefficients (` a `, ` b `, and ` c `).
  - It uses the ` GetInput ` function to ensure that all inputs are valid.
  - The program ensures that ` a ` is a valid, non-zero value (since a = 0 would not represent a quadratic equation).

#### 'b' and 'c' Input:
```cpp
  std::cout << "b = ";
  while (!GetInput(b)) {
      std::cout << "Please enter a valid variable for 'b' = ";
  }
  std::cout << "c = ";
  while (!GetInput(c)) {
      std::cout << "Please enter a valid variable for 'c' = ";
  }
```

  - The program prompts the user for values of ` b ` and ` c `, ensuring valid inputs for both.

#### Discriminant and Roots Calculation:
```cpp
  const double delta = pow(b, 2) - 4 * a * c;

  std::cout << "\nDelta = " << delta << "\n";
  if (delta < 0) {
      std::cout << "The equation has no real roots.\n";
  } else {
      const double x1 = (-b + std::sqrt(delta)) / (2 * a);
      const double x2 = (-b - std::sqrt(delta)) / (2 * a);
```

  - The discriminant (` delta `) is calculated using the formula _b² - 4ac_. The discriminant helps determine the number and type of roots of the equation.
  - If ` delta ` is negative, the equation has no real roots, and the program outputs this information.
  - If ` delta ` is non-negative, the program calculates two real roots (` x1 ` and ` x2 `) using the quadratic formula.

#### Output the Roots:
```cpp
  std::cout << std::fixed << std::setprecision(1);
  if (delta == 0) {
      std::cout << "Both roots are equal: x1 = x2 = " << x1 << "\n";
  } else {
      std::cout << "x1 = " << x1 << "\n";
      std::cout << "x2 = " << x2 << "\n";
  }
```

- The roots are printed with one decimal place precision.
- If the discriminant is zero, both roots are equal and printed accordingly.
- If the discriminant is positive, both distinct roots are displayed.

## Development Environment:
To develop this project, I used the online IDE [OnlineGDB.com](https://www.onlinegdb.com/online_c++_compiler), which offers an easy-to-use compiler and debugger for C++.

## Coding Standards:
This project follows the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html). You're welcome to suggest any improvements or share tips on coding style.

## Contact:
Feel free to reach out to me with any questions, suggestions, or feedback!<br/>
[![GitHub](https://github.com/CLorant/readme-social-icons/blob/main/large/filled/github.svg)](https://github.com/mateuszcalderon)
[![Instagram](https://github.com/CLorant/readme-social-icons/blob/main/large/filled/instagram.svg)](https://www.instagram.com/mateuszcalderon/)
[![LinkedIn](https://github.com/CLorant/readme-social-icons/blob/main/large/filled/linkedin.svg)](https://www.linkedin.com/in/mateuszcalderonreis/)
