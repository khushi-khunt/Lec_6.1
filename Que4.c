#include<stdio.h>
/*
Input:
Enter any number: 15

Output:
15 13 11 9 7 5 3 1
*/
void main(){
	int num=1,i;
	clrscr();

	printf("Enter any value:-");
	scanf("%d",&i);
	printf("odd number from 1 to %d is:-\n",i);

	while(num<=i)
	{
	       if(num%2!=0)
	       {
		printf("%d\n",num);
	       }
	       num++;
	}

}
