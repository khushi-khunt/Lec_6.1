#include<stdio.h>
/*
Output:
10 9 8 7 6 5 4 3 2 1
*/
void main(){
	int num;

	printf("Enter any value:-");
	scanf("%d",&num);

	while(num>=1)
	{
		printf("%d\n",num);
		num--;
	}


}
