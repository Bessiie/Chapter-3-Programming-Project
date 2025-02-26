//Chapter 3 Programming Project
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

//Variables
float interestRate;
float timesCompounded;
float principal;
float interestEarned;
float totalInSavings;

//  :3

//Main Function for Interest Calculation
int main() {

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

	//Calculation Output
	std::cout
		<< "Interest Rate: " << (interestRate * 100) << "\n"
		<< "Times Compounded: " << timesCompounded << "\n"
		<< "Principal: " << principal << "\n"
		<< "Interest Earned: " << interestEarned << "\n"
		<< "Amount in Savings: " << totalInSavings;
return 0;
}