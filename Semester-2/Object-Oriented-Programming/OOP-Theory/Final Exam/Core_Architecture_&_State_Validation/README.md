1. Core Architecture & State Validation

    1. The Smart Thermostat: Design a RoomHeater entity containing targetTemperature and maxLimit.
    
    Rule: Write a function increaseTemp(double degrees). It must only increase the temperature if degrees is positive AND the resulting temperature does not exceed maxLimit. If it succeeds, return true; otherwise, do not change the temperature and return false.

    2. The Banking Gateway: Design a system for a bank. You have a general concept called Transaction, which contains a transactionID.

    Rule: A "Transaction" is just a conceptual idea; the system must strictly prevent another programmer from creating a direct object of a generic transaction. It can only be a Deposit or a Withdrawal.
    Rule: Every transaction must be able to calculateFee(). However, the mathematical formula for this fee depends entirely on whether it is a deposit or a withdrawal. Force this rule in your architecture.

    3. The Coffee Machine: Design an EspressoMachine entity with waterLevel and coffeeBeansLevel.
    
    Rule: Write a brew(int shots) function. One shot requires 30ml of water and 15g of beans. Before brewing, validate that there is strictly enough of both resources simultaneously. If so, deduct the resources and return true; otherwise, return false.

    4. The Freelance Platform: Create a general User entity containing an email.
    
    Rule: The system must strictly prevent creating a plain User.
    Rule: Create two specific entities: Client and Freelancer. Both must implement a getPlatformRating() method, but the logic for calculating the rating is unique to each entity.