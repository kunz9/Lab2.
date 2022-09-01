/*
Dakota Kunz
C++ FA22
Due: 09/14/2022
Lab 2 Exploring Output
This lab is designed to get you familiar output to the
command prompt using C++.
*/
#include <iostream>
void One();
void Two();

int main()
{
	One();
	Two();
	One();
	Two();
	One();
	Two();
	One();
	Two();

}

void One()
{
	std::cout << "      *	      *	      *	      *\n";
}

void Two()
{
	std::cout << "  *	  *	  *	  *\n";
}