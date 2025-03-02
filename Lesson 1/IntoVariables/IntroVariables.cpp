#include <iostream>

int main()
{
	// Create a variable to hold the number entered
	int numEntered1 = 0;
	int numEntered2 = 0;
	int numEntered3 = 0;

	// Print out a message to tell the user to enter a number
	std::cout << "Enter a whole number: ";

	// Store the number the user enters in the "numEntered" variable
	std::cin >> numEntered1;

	// Print out a message to tell the user to enter a number
	std::cout << "Enter a second whole number: ";

	// Store the number the user enters in the "numEntered" variable
	std::cin >> numEntered2;

	// Print out a message to tell the user to enter a number
	std::cout << "Enter a third whole number: ";

	// Store the number the user enters in the "numEntered" variable
	std::cin >> numEntered3;

	// Print out a new line to space out our text better
	std::cout << "\n";

	// Add 3 to the number entered
	int finalResult = (numEntered1 + numEntered2 + numEntered3) /3;
	std::cout << "The adverage of the three numbers is: " << finalResult << "\n";

	return 0;
}