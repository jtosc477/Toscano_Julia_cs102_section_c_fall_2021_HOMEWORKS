Julia Toscano HW2-4 (change)

Algorithm:
Take in the value of cents from the user
divide the value by quarter value(25) to get value of quarters
subtract the answer times 25 from the cent value to find remainder which becomes the new cent value
divide the answer by dime value (10) to get value of dimes
subtract the answer times 10 from the new cent value to find remainder which becomes the new cent value
divide the answer by nickel value (5) to gete value of nickels
subtract the answer times 5 from the new cent value to find final remainder which is the value of pennies
print values of quarters, dimes, nickels, and pennies

Pseodocode:
print "Enter your value in cents:"
scan integer=cents
cents/25=quarters
cents-25*quarters=new cents
new cents/10=dimes
new cents-10*dimes=new cents
new cents/5=nickels
new cents-5*nickels=pennies
print "quarters, dimes, nickels, and pennies"
return
