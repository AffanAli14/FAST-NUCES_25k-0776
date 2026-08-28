8. Data Persistence & Memory Blocks

    26. The Persistent Logger:

    Rule: Open a text file called server_logs.txt in a way that allows you to add new log messages to the very end of the file without erasing the old ones.
    Rule: After adding a new log, move the internal file reading cursor back to the absolute beginning of the file, read all the contents, and print them to the console.

    27. User Settings Modifier:
    
    Rule: Open config.txt. Read the first word into a string variable and the next number into an integer.
    Rule: Modify the integer (e.g., add 1 to it), clear the file's previous contents entirely, and write the new settings back to the file.

    28. Student Records (Raw Memory Storage): AceSchool needs to save a Student entity (containing char name[50], int id, float gpa).
    
    Rule: Even though this is standard text/number data, you must save the Student object to records.dat exactly as it appears in RAM—as a single, raw block of bytes. Do not format it line-by-line or use standard text insertion operators (<<). It should look like gibberish if opened in Notepad.

    29. Game Save State (Raw Memory Retrieval):
    
    Rule: Open savegame.dat. Read a raw block of memory bytes from the disk directly back into an empty PlayerStats object (containing int level, double health, int gold).
    Rule: Extract the entire object structure in a single disk operation, not variable-by-variable.

    30. The Fleet Backup System (The Final Boss):
    
    Rule: Write a system that takes an array of exactly 10 GasVehicle objects and writes the entire array to a file as a single raw block of memory bytes in one single operation.
    Rule: If the file fails to open during this process, halt execution by signaling an error using a simple text message string. Capture this error safely in main().