# Displaying-Entered-Number-Using-Recursion

## This Program prints the number entered but this is done through recursion. 

Assume the number say x = 564, let's Understand the problem step by step:

**1.** x=564 if condiction is false, recursion starts here by calling show(564/10) i.e show(56).

**2.** x=56 if condiction is false, now show(56/10) is called i.e show(5) is called.

**3.** x=5 if condiction is true this time 5 is printed on the screen and function returns. As function returns for the value of x=56 it returns to the next statement from where is was called show(56%10) i.e show(6).

**4.** x=6 if condiction is true then 6 is printed on screen .When function returns it has executed all the statements for the show() function for x=56, then it returns to show(x%10) statement for x=564.this time show(4) is called.

**5.** x=4 if condiction is true, then 4 is printed and function returns to main.
