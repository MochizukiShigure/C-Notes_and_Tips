#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = "", s[100] = "";
	int i = 0, j = 0, k, temp;
	gets(str);	 
	while (str[i] != '\0')
	{
		if(str[i] >='0' && str[i]<='9') {
			s[j]=str[i];
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
	for(j=j-1; j >= 0; j--) {
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

