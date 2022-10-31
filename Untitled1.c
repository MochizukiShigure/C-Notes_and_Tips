/*Exercise 3
Write a C program that can perform the following:
* Create 5 random real numbers between 2.0 and 10.0.
* Display the 5 random real numbers rounded to 2 decimal places.
* Calculate the following: Mean, Standard Deviation (expressions below).
* Display the results of each calculation on the screen.
* Calculate the maximal sum of 2 continuous numbers within the 5 random real numbers.
* Display the maximal sum.
Example:
input is: no input
output is:
The random real numbers are: 2.46 3.57 8.19 5.56 6.34
The mean value is: 5.22
The standard deviation is: 2.27
The maximal sum of 2 continuous numbers is: 13.75

mean:
X' = 1/N ∑n=1~N (Xn)

standard deviation :
σ = √[ 1/N( ∑n=1~N (Xn-X') ) ]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    int i;
    double sum, mean, deviation = 0, differ = 0, temp = 0;
    double num[5];
   
    printf("The random real numbers are: ");
	srand((unsigned)time(NULL));            
    for(i = 0; i < 5; i++) 
	{                
        num[i] = (double)(rand() % 800 + 200)/100; 
		printf("%.2f ",  num[i]); 
		sum += num[i];   
		          
    }
	mean = sum / 5;	
	
	 for(i = 0; i < 5; i++) 
	{                
        differ = pow(num[i] - mean, 2); 
		temp = temp + differ;  
    }
	deviation = sqrt(temp / 5); 
	printf("\nThe mean value is: %.2f\n", mean);
	printf("The standard deviation is: %.2f\n", deviation);
    
	temp = 0;
	 for(i = 0; i+1 < 5; i++) 
	{                
        sum = num[i] + num[i+1];
       
	    if(sum > temp)
		{
			temp = sum;
		}              
    }
	printf("The maximal sum of 2 continuous numbers is: %.2f", temp);
   
    return 0;
}
