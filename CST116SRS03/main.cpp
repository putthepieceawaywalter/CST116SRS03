// CST116SRS03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	

	// part0
	int i0;
	int i1;
	double d0;
	double d1;

	std::cin >> i0 >> i1 >> d0 >> d1;


	/*
	//negation
	double negative;
	negative = -i0;
	std::cout << "the negation of i0 == " << negative << std::endl;
	negative = -d0;
	std::cout << "the negation of d0 == " << negative << std::endl;


	*/
	//Modulus
	double a = i0 % i1;
	std::cout << "i0 % i1 == " << a << std::endl;



	//Division
	double division;
	division = i0 / i1;
	std::cout << "i0 / i1 == " << division << std::endl;
	division = i0 / d0;
	std::cout << "i0 / d0 == " << division << std::endl;
	division = d0 / d1;
	std::cout << "d0 / d1 == " << division << std::endl;

	//Multiplication

	double times;
	times = i0 * i1;
	std::cout << "i0 * i1 == " << times << std::endl;
	times = i0 * d0;
	std::cout << "i0 * d0 == " << times << std::endl;
	times = d0 * d1;
	std::cout << "d0 * d1 == " << times << std::endl;

	//Addition

	double addition;
	addition = i0 + i1;
	std::cout << "i0 + i1 == " << addition << std::endl;
	addition = i0 + d0;
	std::cout << "i0 + d0 == " << addition << std::endl;
	addition = d0 + d1;
	std::cout << "d0 + d1 == " << addition << std::endl;

	//Subtraction
	double minus;
	minus = i0 - i1;
	std::cout << "i0 - i1 == " << minus << std::endl;
	minus = i0 - d0;
	std::cout << "i0 - d0 == " << minus << std::endl;
	minus = d0 - d1;
	std::cout << "d0 - d1 == " << minus << std::endl;



	return 0;
}