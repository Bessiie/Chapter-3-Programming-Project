//Chapter 3 Programming Project - Math tutor
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

//Main Function
int main() {
	
	//random number seed generated using time
	srand(static_cast<unsigned int>(time(0)));

	//variables to store values
	int value1, value2, sum;

	value1 = rand();
	value2 = rand();

	//calculations
	sum = value1 + value2;

	//adjusts spacing
	int maxWidth = std::max({
		static_cast<int>(std::log10(value1) + 1),
		static_cast<int>(std::log10(value2) + 1),
		static_cast<int>(std::log10(sum) + 1)
		});

	//Displays math problem
	std::cout 
		<< std::right << std::setw(maxWidth + 1)
		<< value1 << std::endl;
	std::cout
		<< "\033[4m+" << std::setw(maxWidth) << value2 << "\033[0m" << std::endl; //Used \033[4m to start an underline and \033[0m to end an underline
	std::cout	
		<< "Press enter to reveal solution" 
		<< std::endl;
	
	//recognizes there is an input and continues
	std::cin.get();

	//Outputs Solution
	std::cout
		<< std::right << std::setw(maxWidth + 1)
		<< value1 << std::endl;
	std::cout
		<< "\033[4m+" << std::setw(maxWidth) << value2 << "\033[0m" << std::endl; //Used \033[4m to start an underline and \033[0m to end an underline
	std::cout
		<< std::right << std::setw(maxWidth +1) << sum
		<< std::endl;
	return 0;
}
