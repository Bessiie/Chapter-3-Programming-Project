//Chapter 3 Programming Project - Ingredient Adjuster

#include <iostream>
#include <iomanip>

//These constants were dervied from dividing ingredient by the batch size created by the recipe.
const double amountSugarRatio = 0.03125;
const double amountButterRatio = 0.0208333;
const double amountFlourRatio = 0.0572916;

//Main function 
int main() {
	
	//Declare variable for user to input the amount of cookies they whant to make.
	float amountCookies;
	
	//Display question and receive inputs
	std::cout 
		<< "How many cookies do you want to make?" << std::endl;
	std::cin
		>> amountCookies;

	//Rounds by 2 places
	std::cout << std::fixed << std::setprecision(2);

	//Output
	std::cout
		<< "You will need:\n"
		<< amountCookies * amountSugarRatio << " cups of sugar.\n"
		<< amountCookies * amountButterRatio << " cups of butter.\n"
		<< amountCookies * amountFlourRatio << " cups of flour.";
	return 0;
}
