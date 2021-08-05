# Design Pattern

Design patterns is a blueprint to solve common software design problems. Some of the design patterns are widely used in 
automotive development.

**Benifits of design pattern**

  1. Tried and tested solution.
  2. It gives a common language across the team.
  3. It makes the software design more modular.

### Vistor Design Pattern:

It is a behavioral pattern which lets us to operate Algorithm / feature independent of the instance being passed

**Pre-Condtions:**

   1. A common visitor class.
   2. A method that accepts instance of different class.
   3. Method has same functionality irrespective of different class instances.
	
**Why should I  learn visitor pattern**

   1. If we would like to use same operation in different class definitions then we could define a dedicated class for it and passes the instance of different classes to visitor 
   2. It gives a clear solution to feature and you can see how your end results look
   3. We can introduce new methods in visitor which can be used across different classes
  
### Iterator design pattern:

Iterator is a behavioral design pattern that lets su traverse elements of a collection without exposing its underlying representation (list, stack, tree, etc.).

**Why should I  learn Iterator pattern?**
  1. It works on different data  structure
  2. It works on open / closed principle

  
### Adapter Design Pattern:

**Why should I  learn?**
  1. It is a type of structural design pattern
  2. It is wrapper for objects / methods which are difficult to access
  3. It creates an interface, compatible with existing objects
  4. Using the interface , the existing object can call adapter methods

**Disadvantages:**
  1.We need to introduce new interface, object etc. In a simple program it work, but in a complex program it might be difficult.



