/* Exercise 1
Write a C program that can perform the following:
* Read a string from the keyboard with at least 2 characters which are digits (0-9);
* Extract all digits (0-9) from the string and create a new string containing only those digits;
* Determine the length of the digit string, and print the length of the string on the screen.
* Print the digit string on the screen in reverse (DO NOT reverse the characters in the array
or use the reverse function).
* Print the integer value of the reversed digit string.
Example
input is: CPT109 has 10 lectures.
output is:
The string has 5 characters that are digits: 10910
The string printed in reverse is: 01901
The integer value is: 1901 */

#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = "", s[100] = "";
	int i = 0, j = 0, k, temp;
	gets(str);	 
	while (str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9') {
			s[j] = str[i];
			j++;
		}
		i++;
	}

	if(j<2){
		printf("The digit characters in string is less than 2.\n" "Please enter another string which contain at least 2 digit characters.\n");
	}else{
		printf("The string has %d characters that are digits : ", j);
		puts(s);
	}
	
	temp = j - 1;
	printf("The string printed in reverse is : ");
	for(j = j - 1; j >= 0; j--) {
		printf("%c", s[j]);
	}
	
	printf("\nThe integer value is : ");
	for(temp; temp >= 0; temp--) {
		if(s[temp] != '0'){
			break;
		}
	}
	for(temp; temp >= 0; temp--) {
		printf("%c", s[temp]);
	}
	
	return 0;
}

