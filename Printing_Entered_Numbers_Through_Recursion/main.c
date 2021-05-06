#include<stdio.h>
void main(void)
      {	
	void show(int);
	int num;
	printf("Enter the Number :");
	scanf("%d",&num);
	printf("You Entered: ");
	show(num);	
	printf("\n");
       }
void show(int x)
    {
       if(x/10 == 0) //if Condicton executes when number is single digit Number 
        {
         printf("%d",x%10);  //if x is single Digit Number then n%10 returns the same Number 
         return;
        }
       //Using Double Recursion
       show(x/10);
       show(x%10);

    }
