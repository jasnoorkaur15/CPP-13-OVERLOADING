# Experiment-13: Constructors Overloading

## Aim

To study and understand the different types of constructors in C++, including default constructor, parameterized constructor, constructor overloading, and copy constructor.

## Objectives

To learn the purpose and functionality of constructors in object-oriented programming.

To explore how constructors are automatically invoked during object creation.

To differentiate between default, parameterized, overloaded, and copy constructors.

## Detailed Theory
### What is a Constructor?

A constructor is a special member function of a class that:

Shares the same name as the class.

Is automatically executed whenever an object of that class is created.

Is used to initialize data members of a class.

### Properties of Constructors

They do not have a return type.

They are invoked automatically and cannot be explicitly called like normal functions.

They can be overloaded with different parameter lists.

A class can have multiple constructors serving different purposes.

A constructor can also copy values from another object of the same class.

### Types of Constructors in C++

#### Default Constructor

Does not accept any parameters.

Automatically initializes data members with fixed predefined values.

Useful when all objects should have a standard initial state.

#### Parameterized Constructor

Accepts one or more arguments.

Enables initialization of data members with user-defined values.

Provides flexibility to create objects with different initial states.

#### Constructor Overloading

Occurs when a class has multiple constructors with different parameter lists.

Allows objects to be initialized in multiple ways depending on the provided arguments.

Helps in increasing the usability of the class.

#### Copy Constructor

Special constructor that initializes a new object as a copy of an already existing object.

Takes a reference to an object of the same class as its argument.

Ensures duplication of objects while preserving their values.

### Comparison Table

| **Constructor Type**      | **Definition**                                        | **Arguments Required** | **When Invoked**                                       | **Purpose**                                  |
| ------------------------- | ----------------------------------------------------- | ---------------------- | ------------------------------------------------------ | -------------------------------------------- |
| Default Constructor       | Initializes data members with predefined values.      | None                   | When object is created without arguments.              | Provides a uniform starting state.           |
| Parameterized Constructor | Initializes data members with user-provided values.   | One or more            | When object is created with arguments.                 | Provides flexibility in initialization.      |
| Constructor Overloading   | Multiple constructors with different parameter lists. | Varies                 | Depends on arguments provided during object creation.  | Provides different ways of creating objects. |
| Copy Constructor          | Initializes a new object using an existing object.    | One object reference   | When an object is created as a copy of another object. | Creates duplicates of objects.               |

## Program Description 

### Constructor Overloading

A class is created with three different constructors.

The default constructor initializes members with fixed values.

The parameterized constructor (single argument) initializes one member with the given value and sets the other to a constant.

The parameterized constructor (two arguments) initializes both members with user-provided values.

Multiple objects are created to demonstrate each constructor.

A display function is used to show how different constructors provide different initializations.

### Function Overloading

A class is created with multiple functions having the same name but different parameter lists.

The first function adds two integers.

The second function adds three integers.

The third function adds two floating-point numbers.

The compiler automatically decides which version of the function to call based on the arguments passed.

Objects are created and functions are called with different arguments to show how the correct overloaded function is chosen.

The results are displayed to confirm that the same function name can perform different tasks depending on parameters.

### Operator Overloading

A class is created with a data member and a special function to overload the * (multiplication) operator.

The constructor initializes the data member.

The operator overloading function operator* is defined to multiply the values of two objects.

A result object is returned after performing multiplication.

Objects are created with initial values. Then, using the overloaded * operator, two objects are multiplied directly (e.g., m1 * m2).

A display function is used to show that the multiplication is performed correctly using operator overloading.

### Copy Constructor

A class is created with three constructors: a default constructor, a parameterized constructor, and a copy constructor.

The default constructor initializes members with fixed values.

The parameterized constructor initializes members with user-provided values.

The copy constructor creates new objects by copying the data of existing objects.

Objects are created using default and parameterized constructors, and then duplicated using copy constructors.

A display function is used to confirm that the values are correctly copied.

## Concepts Used

Constructors for automatic initialization of objects.

Constructor Overloading for providing multiple ways of creating objects.

Copy Constructor for duplicating objects safely.

Encapsulation, as both data members and functions are bound within the class.

## Conclusion

Constructors are crucial in C++ for automatic initialization of objects.

The default constructor ensures objects are initialized even without arguments.

Parameterized constructors provide flexibility and allow user-defined initialization.

Constructor overloading enhances class usability by offering multiple initialization options.

Copy constructors enable the creation of duplicate objects with existing values.
