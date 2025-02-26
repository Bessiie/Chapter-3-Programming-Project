//Chapter 3 Programming Project - Math tutor
#include <iostream>

int main() {

	//Displays math problem
	std::cout
		<< " 247\n"
		<< "\033[4m+129\033[0m\n" //Use \033[4m to start an underline and \033[0m to end an underline
		<< "Enter your answer, or press any key then Enter to see the solution: ";

	//recognizes there is an input to continue
	std::cin.get();

	//Outputs Solution
	std::cout 
		<< " 247\n" 
		<< "\033[4m+129\033[0m\n" 
		<< " 376";
	return 0;
}
