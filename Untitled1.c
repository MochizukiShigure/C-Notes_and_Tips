#include <stdio.h>
#include <string.h>

int main()
{
    int n;
	printf("Please enter a integer£º \n");
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

void binary(int n)
{
	int i = 0, y, l = 0;
    int bin[1000];
	while (n != 0)
        {
            bin[i] = n % 2;
            n /= 2;
            l++;
            i++;
        }
 
    for (i = l - 1; i >= 0; i--)
    {
    	  printf("%d", bin[i]);
	}

}

void hexa(int n)
{
	int a1,count=0,j;
	int a[1000];  
	while(n!=0) { 
		a1=n;
 		n=n/16;
  		a[count]=a1%16; 
  		count++; 
    } 
	for(j=count-1;j>=0;j--) 
	{ 
  		if(a[j]>9&&a[j]<16) 
  			printf("%c",(a[j]-10+'A')); 
  		else 
  		printf("%d",a[j]); 
	} 

}
