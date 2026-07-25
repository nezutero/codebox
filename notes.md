# Some Notes from The C Programming Language Book

1. The choice between while and for is arbitrary, based on which seems  clearer. The **for** is usually appropriate for loops in which the initialization aud increment are single statements and logically related, since it is more compact  than while and it keeps the loop control statements together in one place.

2. The parentheses around the assignment within the condition are necessary. 
The precedence of != is higher than that of =, which means that in the absence 
of parentheses the relational test != would be done before the assignment =

So the statement:
    c = qetchar() I= EOF

Is equivalent to:
    c = (qetchar() I= EOF) 

3. 
