/*Exercise 2
Write a C program that can perform the following:
* Read an integer number from the keyboard.
* Convert it to its binary equivalent and print the converted values on the screen.
* Convert it to its hexadecimal equivalent and print the converted values on the screen.
Example:
input is: 20
output is:
The decimal value 20 is 10100 in binary
The decimal value 20 is 14 in hexadecimal*/

#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	printf("Please enter a integer: \n");
	scanf("%d", &n);
	if (n == 0)
	{
		printf("The decimal value 0 is 0 in binary \n");
		printf("The decimal value 0 is 0 in hexadecimal \n");
	}
	else
	{
		printf("The decimal value %d is ", n);
		binary(n);
		printf(" in binary \n");
		printf("The decimal value %d is ", n);
		hexa(n);
		printf(" in hexadecimal \n");
	}
	
	return 0;
}

int binary(int n)
{
	int i = 0, j = 0;
	int bin[1000];
	while (n != 0)
	{
		bin[i] = n % 2;
		n /= 2;
		j++;
		i++;
	}
	
	for (i = j - 1; i >= 0; i--)
	{
		printf("%d", bin[i]);
	}
	
}

int hexa(int n)
{
	int i, j, k=0;
	int a[1000];  
	while(n != 0) { 
		i = n;
		n = n / 16;
		a[k] = i % 16; 
		k++; 
	} 
	for(j = k - 1; j >= 0; j--) 
	{ 
		if(a[j] > 9 && a[j] < 16) 
			printf("%c",(a[j] - 10 + 'A')); 
		else 
			printf("%d", a[j]); 
	} 
	
}
