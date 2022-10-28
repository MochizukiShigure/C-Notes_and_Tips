#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void) {
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
		mean = sum / 5;
		differ = pow((num[i] - mean), 2); 
		temp = temp + differ; 
	    deviation = sqrt((temp / 5));           
    }
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
