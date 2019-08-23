// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int func(int num)
{
	
	if (num == 0)
		return 0 ;

    static int sum = 0;
	sum = sum + num;
	//recursively call the function
	func(num -1);
	return sum;
}
int main()
{
	int sum;
	sum = func(4);
	cout << sum;
}

