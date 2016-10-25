// ChooseDrink.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	int d = 100; // initialise an integer d
	std::string str=""; //create a string called str

	while (str!="0"){ //contain everything in a while loop to use if or switch
	std::cout << "Would you prefer to use the 'switch' statement or the 'if' statement?\n (0 to exit)\n";
	std::cin >> str;
	while (str == "switch" || str == "if" || str=="0") {
		if (str == "0") {
			break;
		}
		if (str == "switch") {
			std::cout << "Using switch statement.\n";
		}
		else if (str == "if") {
			std::cout << "Using if statements.\n";
		}
		do {
			std::cout << "Choose your favourite drink:\n 1 - Coke\n 2 - Lemonade\n 3 - Water\n (0 - Exit)\n"; //ask user to enter number
			std::cin >> d; //get input

			if (str == "switch") {

				switch (d) { //use a switch statement with cases
				case 1:
					std::cout << "You chose coke.\n";
					break;
				case 2:
					std::cout << "You chose lemonade.\n";
					break;
				case 3:
					std::cout << "You chose water.\n";
					break;
				case 0:
					std::cout << "Exiting...\n";
					str = "";
					break;
				default:
					std::cout << "You need to choose either 1, 2 or 3.\n";
				}
			}
			else if (str == "if") {
				if (d == 1) { //does the same as above but with if statements
					std::cout << "You chose coke.\n";
				}
				else if (d == 2) {
					std::cout << "You chose lemonade.\n";
				}
				else if (d == 3) {
					std::cout << "You chose water.\n";
				}
				else if (d == 0) {
					std::cout << "Exiting...";
					str = "";
					break;
				}
				else if (d < 1 || d >3) {
					std::cout << "You need to choose 1, 2 or 3.\n";
				}
			}
			} while (d != 0);
		}
	if (str == "0") { //0 exits
		std::cout << "Exiting";
		break;
	}
	std::cout << "You need to pick 'switch' or 'if'.\n";
	}
	return 0;
}

