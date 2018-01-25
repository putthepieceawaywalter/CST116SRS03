// ConsoleApplication1.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>



int main()
{

	//variable declarations
	int i0;
	int i1;

	double d0;
	double d1;


	// This is the (clear and concise) prompt
	std::cout << "Assign an integer to i0 then i1 seperated by a space" << '\n';
	std::cin >> i0 >> i1;
	
	std::cout << "Assign a value to d0 then d1 seperated by a space" << '\n';
	std::cin >> d0 >> d1;



	/*  This will display what value the variables are assigned to
	std::cout << "i0 = " << i0 << '\n';
	std::cout << "i1 = " << i1 << '\n';
	std::cout << "d0 = " << d0 << '\n';
	std::cout << "d1 = " << d1 << std::endl;

	*/


	// This is the output in order of operator precedence 

	//Negation
		//I don't know how to perform the negation operation

	//Division
	std::cout << "i0 / i1 == " << i0 / i1 << std::left << '\n';
	std::cout << "i0 / d0 == " << i0 / d0 << std::left << '\n';
	std::cout << "d0 / d1 == " << d0 / d1 << std::left << '\n';
	std::cout << '\n';

	//Modulus

	//I can't perform this with a double should I convert it to an int??


	std::cout << "The remainder of i0 / i1 == " << i0 % i1 << std::left << '\n';
		//std::cout << "The remainder of i0 / d0 == " << i0 % d0 << std::left << '\n';


	std::cout << '\n';

	//Multiplication
	std::cout << "i0 * i1 == " << i0 * i1 << std::left << '\n';
	std::cout << "i0 * d0 == " << i0 * d0 << std::left << '\n';
	std::cout << "d0 * d1 == " << d0 * d1 << std::left << '\n';
	std::cout << '\n';

	//Subtraction
	std::cout << "i0 - i1 == " << i0 - i1 << std::left << '\n';
	std::cout << "i0 - d0 == " << i0 - d1 << std::left << '\n';
	std::cout << "d0 - d1 == " << d0 - d1 << std::left << '\n';
	std::cout << '\n';

	//Addition
	std::cout << "i0 + i1 == " << i0 + i1 << std::left << '\n';
	std::cout << "i0 + d0 == " << i0 + d0 << std::left << '\n';
	std::cout << "d0 + d1 == " << d0 + d1 << std::left << '\n';


	
	
	
	return 0;
}

