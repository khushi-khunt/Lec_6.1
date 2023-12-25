#include<stdio.h>
/*
Input:
Enter any number: 7

Output:
1 2 3 4 5 6 7

*/
void main(){
	int num=1,i;


	printf("Enter any value:-");
	scanf("%d",&i);
	printf("Even number from 1 to %d is:-\n",i);

	while(num<=i)
	{
	       if(num%2==0)
	       {
		printf("%d\n",num);
	       }
	       num++;
	}

}
