#include<stdio.h>
/*
Output:
1 2 3 4 5 6 7 8 9 10
*/
void main(){
	int num,i=1;

	printf("Enter any value:-");
	scanf("%d",&num);

	while(i<=num)
	{
		printf("%d\n",i);
		i++;
	}

	
}
