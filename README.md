# Geometry

## Story
The goal of this `Geometry` task is to demonstrate the use of classes through a geometry example. Our terminal-based application will be capable of storing shapes, visualizing these shapes, and identifying the shape with the maximum perimeter or area.

## Tasks

### 📔 Folder & file structure
As a first step, let's check the library structure and the existing files. Where are the source files and header files located? What is contained in a header? What does the configuration in VS Code look like that allows for compiling?

### 📔 Class concept
Let's check the following concepts
- class syntax & concept
- member
- constructor
- static members
- access modifiers

**Class**
A class is a blueprint or template for creating objects. It defines the *properties* (attributes or data members) and *behaviors* (methods or member functions) that an object of that class will have.
Data members store information about an object, while member functions define the actions that an object can perform.

**Class syntax**
It involves keywords like class, public, private, protected, and the syntax for declaring members (variables and functions) within the class.

**Constructor**
A constructor is a special member function of a class that is automatically called when an object of that class is created. It is used to initialize the object's members.   

**Static keyword**
The keyword static can be used with members of a class. A static member is shared by all objects of the class and belongs to the class itself rather than to any individual object.

**Access modifiers**
Access modifiers (e.g., public, private, protected) control the visibility of members of a class from outside the class.
- public: Members declared as public can be accessed from anywhere.
- private: Members declared as private can only be accessed from within the class itself.
- protected: Members declared as protected can be accessed from within the class and by derived classes.

### 📔 Circle class
Implement the `Circle` class. The circle should store one data member: *radius*.
The class should provide the following functions: a function to calculate the circle's *circumference*, a function to calculate the circle's *area*, a function to return the *circumference formula*, a function to return the *area formula*, and a *toString* method that prints the shape's name and parameters.

### 🧍 Further shapes implementation
After implementing the `Circle` class, implement the classes describing the following shapes:
- EquilateralTriangle
- Rectangle
- RegularPentagon
- Square
- Triangle

### 📔 std::vector
Let's discuss the vector type;
`std::vector` and arrays are both used to store collections of elements in C++, but they have distinct characteristics and use cases.

**std::vector**
- Dynamic size: Unlike arrays, vectors can grow or shrink in size dynamically during runtime. This means you don't need to specify the exact size upfront.
- Automatic memory management: The vector handles memory allocation and deallocation automatically, preventing common memory-related errors like memory leaks.
- STL compatibility: Vectors are fully integrated with the C++ Standard Template Library (STL), allowing you to use a wide range of algorithms and operations on them.
- Safety: Vectors provide bounds checking, reducing the risk of out-of-bounds access errors.

**Arrays**
- Fixed size: Arrays have a fixed size that is determined at compile time. You cannot change the size of an array after it has been created.
- Manual memory management: Arrays require manual memory management, which can be error-prone if not handled correctly.
- Limited functionality: Arrays have fewer built-in functions compared to vectors.
- Potential for buffer overflows: If you access an array element beyond its bounds, it can lead to undefined behavior and security vulnerabilities.

**When to use std::vector:**
- When you don't know the exact size of the collection beforehand.
- When you need to frequently insert or remove elements.
- When you want to use STL algorithms and functions.
- When you prioritize safety and flexibility.
**When to use arrays**:
- When the size of the collection is fixed and known at compile time.
- When performance is critical and you need the most efficient memory access.
- When interfacing with C code or legacy code that uses arrays.

**Time Performance**
- Access time:
    - `arrays`: Generally offer faster access times for individual elements due to their contiguous memory allocation. This is especially true for elements accessed sequentially.
    - `std::vector`: While access times are generally comparable to arrays for most operations, there might be a slight overhead due to potential bounds checking and iterator operations.
- Insertion and deletion:
    - `arrays`: Inserting or deleting elements in the middle of an array is expensive, as it requires shifting all subsequent elements.   
    - `std::vector`: Inserting and deleting elements at the end is efficient, as vectors can grow dynamically. However, inserting or deleting elements in the middle can involve reallocating memory and copying elements, which can be slower than arrays.   
- Iterating:
    - `arrays`: Iterating over arrays is typically faster than iterating over vectors due to simpler memory access patterns.
    - `std::vector`: Iterating over vectors can involve additional overhead for iterator operations, but modern compilers can often optimize this away.

**Space Performance**
- Memory usage:
    - `arrays`: Arrays have a fixed size, so they allocate exactly the amount of memory needed for their elements.   
    - `std::vector`: Vectors often allocate slightly more memory than necessary to accommodate future growth. This can lead to some memory overhead, especially for small vectors or when elements are frequently removed.
- Memory fragmentation:
    - `arrays`: Arrays can contribute to memory fragmentation if they are frequently allocated and deallocated, especially if they are of different sizes.
    - `std::vector`: Vectors, when used with appropriate allocators, can help mitigate memory fragmentation.

### 📔 ShapeCollection
The `ShapeCollection` class encapsulates several vectors to store various shapes. It class itself provides the following methods:
- `addCircle`: this method adds a new circle shape to the circles vector.
- `getShapesTable`: This method returns with a string containing all stored shapes, regardless of their specific type.
- `getLargestShapeByPerimeter`: This method returns the shape with the largest perimeter among all stored shapes.
- `getLargestShapeByArea`: This method returns the shape with the largest area among all stored shapes.

### 🧍 Add new shape - ShapeCollection
Implement the `add...` function in the `ShapeCollection` class for the following shapes, following the previous example: EquilateralTriangle, Rectangle, RegularPentagon, Square, Triangle.

### 🧍 List of the shapes 
The implementation of the `getShapeTable` function is incomplete – currently, only circles are being printed. Complete the implementation to print all stored shapes.

### 🧍Largest shape by area
The implementation of the `getLargestShapeByArea` function is also incomplete, as it currently only considers circles. Extend it to account for all shapes.

### 🧍 Largest shape by perimeter
The implementation of the `getLargestShapeByPerimeter` function is also incomplete, as it currently only considers circles. Extend it to account for all shapes.

### 📔 Instance
In the following steps, you'll require a `ShapeCollection` instance. This involves instantiating the class, creating a specific object based on its blueprint.
This object will provide access to the public methods defined within the class. Most of the actions from the menu relate to the `ShapeCollection`. The methods are implemented there because they logically belong to it, and this is the level of abstraction that the `ShapeCollection` class represents.

### 🧍 Menu
Create a menu system within the main function to enable the execution of various tasks. The code includes comments to guide you.

### 🧍 Add new shape - main
Implement the `addNewShape` function in `main.cpp` to add various shapes (previously implemented). This is a wrapper function that calls the appropriate `add...` function in the `ShapeCollection` class based on the shape type. Use the provided `getPositiveDouble` function to read a positive double value from the terminal.

### 📔 ShapeCollection instance as a parameter
Observe that the `addNewShape` function accepts a `ShapeCollection` object as an argument. When a class type is passed as a parameter, a copy of that object is typically created, triggering the copy constructor. However, this behavior can be modified by passing the object by *reference* or *pointer*.
> The compiler might optimize away the copy constructor call if it determines that it's unnecessary. This is especially common for small objects or when the object is moved rather than copied.

### 🎉 Congratulations, your program has been successfully developed

### Struct
Let's extend our program so that shapes not only store side or size attributes but also their representative points (with x and y coordinates) as floating-point numbers. Let's explore how `structs` can be used for this purpose and discuss the differences between structs and classes, and when it's practical to use one over the other.

**Structs in C++**
In C++, a struct is a user-defined data type that groups variables of different data types under a single name. Think of it as a blueprint for creating custom data types. While they were traditionally used for simple data structures, modern C++ has made them more flexible and interchangeable with classes.

- Key characteristics of structs:
    - Members: Like classes, structs can have members (variables and functions) that define the data and behavior of the struct.
    - Default member access: Unlike classes, members of a struct are **public** by default, meaning they can be accessed directly from outside the struct.
    - Inheritance: Structs can inherit from other structs or classes, just like classes.
    - Constructors, destructors, and other features: Structs support constructors, destructors, and other features that are common to classes.

| Feature                    | Structs | Classes |
| -------------------------- | ------- | ------- |
| Default member access      | public  | private |
| Inheritance                |   ✔️   |    ✔️   |
| Constructors               |   ✔️   |    ✔️   |
| Destructors                |   ✔️   |    ✔️   |
| Operator overloading       |   ✔️   |    ✔️   |
| Templates                  |   ✔️   |    ✔️   |

> The primary difference between structs and classes in modern C++ is the default access specifier. In structs, members are public by default, while in classes, they are private. However, this distinction is often considered more of a stylistic choice than a fundamental difference.

**When to Use Structs vs. Classes**
While there's no strict rule dictating when to use structs or classes, here are some general guidelines:

**When to use structs:**
- Simple data structures: If you need a simple data structure to group related data, a struct is often a good choice. For example, a *Point* struct to represent a point in 2D space.
- Small, lightweight objects: Structs can be more efficient for small objects, especially if they don't require complex behaviors.
- Public data: If you want the members of your data structure to be publicly accessible, a struct is a natural choice.
- Following conventions: In some coding styles or projects, there might be conventions about when to use structs or classes. For example, some teams prefer to use structs for small, simple data types and classes for more complex objects with methods.

**When to use classes:**
- Complex data structures: If you need to encapsulate data and behavior within an object, a class is often a better choice. For example, a *BankAccount* class with methods for depositing and withdrawing money.
- Data hiding: If you want to protect the internal state of your object from external modifications, use a class and make members private.
- Inheritance and polymorphism: If you need to create hierarchies of objects, classes are essential.

### 🧍 Circle center
Extend the `Circle` class to store the *center* of the circle. Use the struct defined in `Points.h` for the implementation. You'll likely need to make minor adjustments in several places, as the `Circle` class constructor needs to be changed.