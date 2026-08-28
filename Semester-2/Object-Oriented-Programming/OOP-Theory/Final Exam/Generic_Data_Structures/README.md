4. Generic Data Structures
    11. The Magic Inventory Bag:
    
    Rule: Design a storage utility entity called InventoryBag. It must be capable of holding a fixed array of 10 items of any one specific data type.
    Rule: Include an integer to track how many items are currently inside. Write a method storeItem(item) that takes an item of that specific type and adds it to the array only if the bag isn't full.

    12. The Task Queue:
    
    Rule: Write a storage entity ProcessQueue. It must contain an array of size 5 to hold tasks of any one specific data type.
    Rule: Write a function enqueue(task) that adds to the array, but silently ignores the addition if the queue has already reached its limit of 5.

    13. The Print Spooler:
    
    Rule: Design a generic Spooler entity. It holds an array of 5 generic jobs.
    Rule: Provide an addJob(document) function that increments a counter when a job is added, alongside a getJobCount() function to return the current number of jobs.