3. Array Traversal and Object Interactions

    8. The Space Fleet Shield Check: A Mothership entity manages smaller fighters.
    
    Rule: Write a method checkFleetShields(fighters, size) that accepts an array of Fighter objects.
    Rule: If the size is 0 or less, return false. Loop through the array. If any ship in the array has a .getShieldLevel() less than 20.0, the fleet is vulnerable (return false). Otherwise, return true.

    9. Cyber Security Network:
    
    Rule: Design a method isNetworkStable(nodes, count) that accepts an array of Server objects.
    Rule: Traverse the array. If any server returns a value greater than 500 from .getPing(), the network is unstable (return false). If all are fine, return true.

    10. Drone Delivery Swarm: A DeliveryHub entity dispatches drones.
    
    Rule: Write a method clearForTakeoff(swarm, numDrones) that accepts an array of Drone objects. Iterate through the swarm. If any drone has a .getBatteryPercentage() below 15.0, abort the takeoff (return false).