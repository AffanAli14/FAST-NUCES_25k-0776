7. Error Signaling & Flow Control

    21. The Login Firewall: Design a SecuritySystem entity with a method authenticate(string password).
    
    Rule: If the password length is less than 8 characters, the system must immediately halt its normal execution flow and signal an error by ejecting the exact text message: "Password too short".
    Rule: In your main() function, execute this method and safely capture this exact text message, printing it to the screen without crashing the program.

    22. Sensor Calibration: Design a Sensor entity with a readData() method.
    
    Rule: If the sensor reads a negative value, halt flow and signal a standard C++ system runtime error object containing the message "Negative reading detected".
    Rule: Safely capture this specific type of system error in main() and print its embedded message using its built-in explanation method.

    23. The ATM Withdrawal (Custom Error Entity) :
    
    Rule: Create a highly specialized error entity named InsufficientFundsError that integrates into the standard C++ error hierarchy. It must override the built-in explanation method to provide a custom warning message when called.
    Rule: In an Account class, write a withdraw(double amount) function. If the amount exceeds the balance, halt execution and signal this specific InsufficientFundsError object.

    24. The Overheating Engine:
    
    Rule: Create a custom OverheatError entity containing a currentTemp integer (it does not need to inherit from system errors).
    Rule: If an Engine entity hits 120 degrees, signal this custom object. Capture the object in main() and extract the currentTemp integer to display it.

    25. Network Timeout Fallbacks: A connectServer() function might halt and signal an integer (like error code 404) OR it might signal a text string (like "Timeout").
    
    Rule: Write the execution logic in main() to safely attempt the connection, providing one safety net for the integer, a separate safety net for the string, and a final universal safety net to catch literally anything else that might halt the flow.