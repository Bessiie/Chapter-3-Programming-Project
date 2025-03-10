//Chapter 3 Programming Project
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cmath>

//Main Function for Interest Calculation
int main() {
	
	//Variables
	float interestRate;
	float timesCompounded;
	float principal;
	float interestEarned;
	float totalInSavings;

	//Inquires and assigns Principal 
	std::cout
		<< "What is the principal of your savings account?"
		<< std::endl;
	std::cin >> principal;

	//Inquires and assigns Interest Rate
	std::cout
		<< "What is the interest rate?"
		<< std::endl;
	std::cin >> interestRate;

	//Inquires and assigns times compounded a year
	std::cout
		<< "How many times does the interest compound in a year?"
		<< std::endl;
	std::cin >> timesCompounded;

	//Caluations
	interestRate /= 100;
	totalInSavings = principal * pow(1 + (interestRate / timesCompounded),timesCompounded);
	interestEarned = totalInSavings - principal;

	//Sets rounding rules
	std::cout << std::fixed << std::setprecision(2);

	// For formatting with setw and alignment
	const int width = 20; 

	// Calculation Output
	std::cout
		<< std::left << std::setw(width) << "Interest Rate: " << std::right << std::setw(width - 1) << (interestRate * 100) << "%" << std::endl
		<< std::left << std::setw(width) << "Times Compounded: " << std::right << std::setw(width) << timesCompounded << std::endl
		<< std::left << std::setw(width) << "Principal: " << std::right << std::setw(width) << principal << std::endl
		<< std::left << std::setw(width) << "Interest Earned: " << std::right << std::setw(width) << interestEarned << std::endl
		<< std::left << std::setw(width) << "Amount in Savings: " << std::right << std::setw(width) << totalInSavings << std::endl;

return 0;
}