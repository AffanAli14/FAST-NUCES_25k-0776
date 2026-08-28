9. Concepts: Abstraction, Custom Error Entities, Array Traversal (via         Pointers), and Text Append Operations.

    You are designing the communication software for a ground control station.
    
    1. The Core Concept: You have a general concept called Satellite. Every satellite has a designation (string).
    
    Rule: The system must strictly prevent a programmer from creating a direct object of a generic satellite. It must only exist as a base idea.Rule: Every satellite must be able to checkSignal().
    
    2. Specific Entities: Create RelaySatellite and SpySatellite that implement the general concept.
    
    Rule: If a SpySatellite calculates its signal and the value is less than 10.0, it must immediately halt normal execution flow and signal a highly specialized error entity named SignalLostError. This error entity must integrate into the standard C++ error system and provide the custom message: "Critical: Orbital connection severed."
    
    3. The Ground Station: Create a GroundStation entity.
    
    Rule: Write a method scanSky(satellites, size) that accepts an array of pointers to the general Satellite concept.
    Rule: Traverse the array and call checkSignal() on each. Provide a safety net here: if the SignalLostError is triggered by any satellite during this loop, catch it safely. When caught, open a text file named blackbox.txt in a way that allows you to add the exact text "CONNECTION LOST" to the very end of the file without deleting the older records.

10. Concepts: The Diamond Problem, Generic Utility Functions, and Raw Memory (Binary) Storage.

    You are building the patient intake software for a busy metropolitan hospital.

    1. The Patient Hierarchy: A base Patient entity has a medicalID (integer) set when they enter the hospital.
    
    Rule: An Inpatient is a Patient. An ERPatient is a Patient.
    Rule: An IntensiveCarePatient acts as both an Inpatient and an ERPatient simultaneously, combining all their traits.
    Crucial Rule: Even though an Intensive Care patient merges two roles, they are still a single human being. Your architecture must guarantee that an IntensiveCarePatient has exactly one physical medicalID in memory. Demonstrate how their constructor bypasses the intermediate roles to set this ID directly.
    
    2. The Triage Utility:
    
    Rule: Write a generic medical utility tool called prioritize. It must accept any two entities, provided they are of the exact same data type.
    Rule: Inside this utility, call a method .getSeverityScore() on both entities. Return the entity that has the higher score.
    
    3. The Archiving System:
    
    Rule: The hospital tracks basic data using a simple entity called VitalRecord (containing int patientID and double heartRate). Create an array of exactly 50 VitalRecord objects.
    Rule: Save the entire array to a file named archive.dat exactly as it appears in RAM—as a single, raw block of memory bytes in one direct operation. Do not format it using standard text insertion operators.

11. Concepts: Generic Data Structures, Polymorphism, and Standard System Errors.

    You are programming the autonomous management system for a futuristic smart farm.
    
    1. The Storage Facility:
    
    Rule: Design a generic storage entity called Silo. It must contain a fixed array capable of holding exactly 100 items of any one specific data type.
    Rule: Include an integer tracking the current count. Write an addCrop(item) method that adds an item to the array, but silently ignores the action if the Silo is full.
    
    2. The Crop System:
    
    Rule: Create a general concept Crop that requires a calculateYield() method. Create specific Wheat and Corn entities based on this concept.Rule: For Corn, if its internal waterLevel variable is a negative number, calling calculateYield() must halt execution and signal a standard C++ system runtime error containing the exact text "Drought failure".
    
    3. System Execution (Main):

    Rule: In main(), instantiate a Silo that is capable of holding polymorphic pointers to the general Crop concept.
    Rule: Dynamically create a Corn entity (with a negative water level) and add it to the Silo.
    Rule: Attempt to calculate its yield, providing a safety net to safely capture the standard system error and print its internal message to the screen.