5. Multiple Inheritance
    14. The University Persona: At a university, you have a Person entity with an idNumber. A Student is a Person. An Employee is a Person.
    
    Rule: A TeachingAssistant acts as both a Student and an Employee simultaneously, combining the traits of both.
    Crucial Rule: Even though a TA combines two roles, they are still a single physical human being. Your architecture must ensure that a TeachingAssistant only has one idNumber in memory to prevent ambiguous data.
    Rule: Ensure the TA's constructor bypasses the intermediate roles to directly initialize the idNumber of the core Person.

    15. RPG Character Classes: In a game, an Entity has a healthPool variable. A Warrior is an Entity. A Mage is an Entity.
    
    Rule: A Paladin combines the abilities of both a Warrior and a Mage.
    Rule: Write the class definitions to ensure that when a Paladin takes damage, the system doesn't get confused about which healthPool to deduct from (they must share a single health pool in memory).

    16. Smart Home Gadgets: A base Device has a serialNumber set via its constructor. A Camera and a Microphone are both Devices.
    
    Rule: A SmartDisplay combines both a Camera and a Microphone. Write the constructor for SmartDisplay to demonstrate how it properly initializes the serialNumber in the core Device base class without causing duplicate data.

    17. The Media Player: A MediaFile has a filePath. AudioTrack and VideoTrack are MediaFiles.
    
    Rule: A Movie combines both an AudioTrack and a VideoTrack. Design the classes so Movie has only one filePath.
    Rule: Implement a play() method in Movie that specifically calls the individual play() methods of both the AudioTrack and VideoTrack.