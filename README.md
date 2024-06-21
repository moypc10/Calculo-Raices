# Find Roots of a Quadratic Equation

## Introduction
A C++ program designed to find the real roots of a quadratic polynomial in the standard form: \(ax^2 + bx + c = 0\). The program takes three coefficients \(a\), \(b\), and \(c\) as input, representing the quadratic, linear, and constant terms of the polynomial, respectively. It then calculates and provides the real roots \(r1\) and \(r2\), if they exist. If the polynomial has complex roots (when the determinant is less than zero), the program will indicate that there are no real roots. This program is useful for solving quadratic equations commonly encountered in various fields of science and engineering.


## Prerequisites
- CMake 3.28.3
- C++ 17

## Cmake Deployment
To compile and build the program:
```bash
make
```

To run the program:
```bash
./findroot "a" "b" "c"
```

## Example
Running the program with coefficients \(a = 1\), \(b = 2\), and \(c = 5\):
```bash
./findroot "1" "2" "5"
Result= "{ }"
```

Running the program with coefficients \(a = 6\), \(b = 7\), and \(c = 2\):
```bash
./findroot "1" "2" "5"
Result = "{-0.5, -0.666667}"
```

## Project Structure

- **CMakeLists.txt**: The main configuration file for CMake, specifying the project details and compiler settings.
- **CMakePresets.json**: A JSON file containing preset configurations for different build environments and compilers.
- **findroots.cpp**: The main C++ source file containing the logic to find the real roots of the quadratic equation.
- **makefile**: A script for automating the build process, including creating the build directory, running CMake, and compiling the project.

## Acknowledgments

- [CMake](https://cmake.org/)
- [C++](https://isocpp.org/)
- [Quadratic Equations](https://www.cuemath.com/algebra/quadratic-equations/)

## Author

Moisés Hiram Pineda Campos - moypineda10@gmail.com
