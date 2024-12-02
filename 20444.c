#include<stdio.h>
#include<stdlib.h>
#define sum(a, b) a+b
int* fun(int n)
{
	int i, *arr= (int*) calloc(n, sizeof(int));
	for(i=0 ; i<n ; i++)
	scanf("%d",arr+i);
	
	return arr;
}
