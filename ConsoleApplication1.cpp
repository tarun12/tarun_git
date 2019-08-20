#include <stdio.h> 
#include <stdlib.h>
#include "pch.h"

#include< cstdio>
#include <iostream> 
using namespace std;


int equilibrium(int arr[], int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}

	if (sum % 2 != 0)
		return -1;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + arr[i];

		if (sum1 == sum / 2)
			return i;
	}
	return -1;
}
// Driver code  
int main()
{
	int arr[] = { 5,2,3 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout << "First equilibrium index is " << equilibrium(arr, arr_size);
	return 0;
}
/*
void printArray(int * arr,int len)
{
	int length = 0;
	for (length = 0; length < len; length++)
		printf("element in window = %d\t", arr[length]);
	printf("\n");
}


	int setallbitgivenrange(int n, int l, int r)
	{
		// calculating a number 'range' having set 
		// bits in the range from l to r and all other 
		// bits as 0 (or unset). 
		int range = (((1 << (l - 1)) - 1) ^
			((1 << (r)) - 1));

		return (n | range);
	}


// Driver program to test above functions 
int main()
{
	/*
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };

	int arr1[12] = { 0xa };
	int n = sizeof(arr) / sizeof(arr[0]);
	int  windowSize = 2;
	int i = 0;

	for (i = 0; i < n - windowSize; i++)
		printArray(&arr[i],windowSize);
		*/

/*
	int number = 10;

	setallbitgivenrange(10,2,4);
	return 0;
}
*/