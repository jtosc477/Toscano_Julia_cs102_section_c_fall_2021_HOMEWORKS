Julia Toscano HW1-3 (mean, median, mode)

Algorithm:
Receive 5 integers via STDIN and make into an array
Find sum of all numbers in sequence and set total/5 equal to mean
Reorder integers in descending order
Set midpoint equal to third number in array after reorder
Count the appearance of each number and set number with maximum count equal to mode
Print mean, median, and modes unless mode is found to be 0 in which case, "The mode DNE" will print

Pseodocode: {
FOR i=0 to 5 DO 
    Scan 5 integer sequence
END FOR 
total=sum of all integers 
mean=total/5 
FOR i=0 to 5 DO 
    FOR j=0 to 5 DO 
        IF number in sequence is greater than next number, switch 
    END FOR 
END FOR 
Midpoint=third number 
FOR i=0 to 5 DO 
    FOR z=0 to 5 
        IF first digit equals next digit, raise count by one 
        END IF 
        IF count exceeds max count DO
            count=max count and mode=number with max count 
        END IF 
    END FOR 
END FOR 
IF mode=0 DO 
    print The mode DNE 
else DO 
    print mode DNE 
END IF 
print mean 
print mode
}
