#include<stdio.h>
/*
Input:
Enter the first number: 2020
Enter the second number: 2040

Output:
2020, 2024, 2028, 2032, 2034, 2040
*/


void main(){
	int n,m,i;
	
	printf("Enter first year:-");
	scanf("%d",&n);

	printf("Enter second year:-");
	scanf("%d",&m);

	  i=n;
	 while(i<=m){
	 if(i%4==0 || i%100==0 || i%400==0)
	 {
	    printf("%d\n",i);
	     }
	     i++;
	     }



}
