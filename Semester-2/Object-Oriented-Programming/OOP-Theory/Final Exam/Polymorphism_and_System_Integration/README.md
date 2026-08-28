6. Polymorphism and System Integration

    18. The Zoo Enclosure: You have a base concept Animal that must be able to makeSound(). Lion and Monkey are specific animals.
    
    Rule: Write a main() function that creates an array capable of holding 3 pointers to the general Animal concept. Assign a Lion and a Monkey dynamically (using new) to this array, and trigger their sounds via a loop.

    19. The Gadget Comparer: Create a base Gadget concept that must provide getBatteryLife(). Create Phone and Tablet entities that implement this.

    Rule: In main(), use a generic utility function (like the one from Question 5) to compare two Phone objects and return the one with the better battery life.

    20. The Secure Cloud Balancer:Rule: Create a general concept Node. Create a DatabaseNode entity that implements it.
    
    Rule: Create a generic storage utility (like in Question 11) capable of holding polymorphic pointers to the general Node concept.
    Rule: In main(), instantiate this storage, create two dynamic DatabaseNode entities, and add them to the storage.