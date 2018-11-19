// Pointerid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void cant_change(int * x, int * z) {
	x = z;
	std::cout << "\n ----> value of 'a' is: " << x << " inside function, same as 'f', BUT will it be the same outside of this function? lets see\n";
}

void change(int ** x, int * z) {
	*x = z;
	std::cout << "\n ----> value of 'a' is: " << *x << " inside function, same as 'f', BUT will it be the same outside of this function? lets see\n";
}

int main()
{
    std::cout << "Hello World!\n"; 
	int c = 1;
	int d = 2;
	int e = 3;
	int * a = &c;
	int * b = &d;
	int * f = &e;
	int ** pp = &a;  // pointer to pointer 'a'

	std::cout << "\n a's value: " << a << "\n";
	std::cout << "\n b's value: " << b << "\n";
	std::cout << "\n f's value: " << f << "\n";
	std::cout << "\n can we change a?, lets see \n";
	std::cout << "\n a = b \n";
	a = b;
	std::cout << "\n a's value is now: " << a << " same as 'b'... it seems we can, but can we do it in a function? lets see... \n";
	std::cout << "\n cant_change(a, f); \n";
	cant_change(a, f);
	std::cout << "\n a's value is now: " << a << ", Doh! same as 'b'...  that function tricked us. \n";

	std::cout << "\n NOW! lets see if a pointer to a pointer solution can help us... remember that 'pp' point to 'a' \n";
	std::cout << "\n change(pp, f); \n";
	change(pp, f);
	std::cout << "\n a's value is now: " << a << ", YEAH! same as 'f'...  that function ROCKS!!!. \n";
	return 0;

}



