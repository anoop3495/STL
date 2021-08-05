# SOLID Principles of coding

In the world of software development, The attribute is to write a clean, resusable and avoid duplications. This is achieved with the use of object 
oriented programming and SOLID princilpes of coding. SOLID principles stands as follows:

   1. **S - Single Responsiblity Principle**
   2. **O - Opened/Closed Principle**
   3. **L- Liskov’s Substitution Principle**
   4. **I - Interface segregation Principle**
   5. **D - Dependency Inversion Principle**

### S - Single Responsiblity Principle(SRP)

A defined class shoud be responsible for performaning only functionlity and all other functianlities that are not part of this class should be declared outside the class.

For Eg:
1. The design of STL follows SRP principle.
2. std::vector follows SRP principle.

### O - Opened/Closed Principle (OCP)

A defined class should be closed for modification and opened for expansion which means a software should be extantable without touching the old functionalities.

For Eg:
1. Enum follows OCP principle.
2. Visitor pattern follows OCP principle.

### L- Liskov’s Substitution Principle(LSP)

A derived or a child class must be substitutabl for their parent class without any unexpected behaviour.

For Eg:
1. LSP principle could be used while implementing the concept of Inheritance.

### I - Interface segregation Principle(ISP)

This principle is used to  avoid unnecessary dependencies on the Interfaces.

For Eg:
1. Strategy pattern works on ISP principle

### D - Dependency Inversion Principle(DIP)

The high level block of functionality should not depend on low level block functionality. The dependecy for these functionalities should only be possible 
via the Abstraction Interface so that the changes modified in high level and low level functionalities does not affect each other.

For Eg:
1.DIP principle could be used while implementing the concept of Abstraction.


