# Circuit Lab Assistant

## Overview

Circuit Lab Assistant is a C programming project that I am developing throughout my Circuit Analysis laboratory course.

The goal of this project is to apply concepts from both C programming and electrical engineering by adding new features as new circuit topics are introduced in the lab.

Instead of creating a separate project for every lab, this program will continue growing throughout the semester.

## Project Goals

- Practice C programming using real electrical engineering problems
- Analyze measurements from circuit laboratory activities
- Compare theoretical and measured values
- Verify circuit laws such as Ohm's Law and Kirchhoff's Laws
- Improve the program each week as new circuit topics are introduced
- Practice Git and GitHub version control throughout the development process

## Technologies

- C
- Multisim
- Git
- GitHub

---

# Current Features

## Main Menu

The program uses a menu that allows the user to select different circuits from the laboratory activity.

The menu repeats until the user selects the Exit option.

C concepts used:

- `do...while`
- `switch`
- `case`
- functions
- user input with `scanf()`

---

# Lab Activity 1 - Basic DC Circuits

## Circuit 1

The program allows the user to enter:

- Vab
- Vbc
- Vce
- Vde
- Vad
- I1

The program then:

- Displays the entered measurements
- Calculates the theoretical current using Ohm's Law
- Compares the theoretical and measured current
- Calculates percent error

### Concepts Used

Ohm's Law:

I = V / R

Percent Error:

Percent Error = |Measured - Theoretical| / |Theoretical| × 100

### C Concepts Practiced

- Functions
- `double` variables
- `scanf()`
- `printf()`
- `fabs()`
- Mathematical calculations

---

## Circuit 2

The program allows the user to enter:

- Vab
- Vbc
- Vcd
- Vde
- Vad
- I1
- I2

The program then:

- Calculates the theoretical current through R1
- Compares theoretical and measured I1
- Calculates percent error
- Checks whether I2 is approximately zero
- Detects expected open-circuit behavior

### New C Concepts Practiced

- `if...else`
- Tolerance checking
- Reusing previous calculations

---

## Circuit 3

The program allows the user to enter:

- I
- I1
- I2
- Vde
- Vfg
- Vab

The program verifies Kirchhoff's Current Law:

I ≈ I1 + I2

The program calculates the difference between the total current and the sum of the branch currents and determines whether KCL is satisfied within a selected tolerance.

### New Concepts Practiced

- Kirchhoff's Current Law
- Branch-current calculations
- Absolute error
- Tolerance comparison

---

# Weekly Development Log

## Week 1 - Lab Activity 1

### Added

- Main program menu
- Repeating menu using `do...while`
- Circuit 1 function
- Circuit 2 function
- Circuit 3 function
- User measurement input
- Ohm's Law calculations
- Percent-error calculations
- Open-circuit detection
- KCL verification

### C Concepts Practiced

- Functions
- `switch`
- `do...while`
- `if...else`
- `double`
- `scanf()`
- `printf()`
- `fabs()`

### Electrical Engineering Concepts Practiced

- Voltage measurements
- Current measurements
- Ohm's Law
- Open circuits
- Parallel branches
- Kirchhoff's Current Law

### What I Learned

This week I learned how to organize a C program using multiple functions and a menu system. I also practiced using C calculations to verify electrical circuit behavior instead of only performing calculations manually.

---

# Future Development

New features will be added as the Circuit Analysis laboratory progresses.

The program architecture may also be improved as I learn more advanced C programming concepts.

---

# Project Status

🚧 **In Development**

This project is updated throughout the semester as new laboratory activities are completed.