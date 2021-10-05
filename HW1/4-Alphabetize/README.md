Julia Toscano HW1-4 (Alphabetize)

Algorithm:
Take in 3 strings via STDIN
print original order
reorder in for loop
print new alphabetized order

Pseodocode:
print "Please enter 3 words one at a time:"
scan strings
print "Order of words before alphabetized:"
FOR i=0 to 5 DO
    print stringi
END FOR
FOR i=0 to 5 DO
    FOR j=0 to 5 DO
        IF stringi>strj switch their order via strcpy
    END FOR
END FOR
print "Order of words after alphabetized:"
FOR i=0 to 5 DO
    print stringi
END FOR
return

Reference: https://beginnersbook.com/2015/02/c-program-to-sort-set-of-strings-in-alphabetical-order/
