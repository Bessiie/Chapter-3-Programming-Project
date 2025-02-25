//Chapter 3 Programming Project - Ingredient Adjuster
//A cookie recipe calls for the following ingredients:
//1.5 cups of sugar
//1 cup of butter
//2.75 cups of flour
//The recipe produces 48 cookies with this amount of ingredients. 
//Write a program that asks the user how many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the specified number of cookies.

#include <iostream>
#include <iomanip>

//These constants were dervied from dividing ingredient by the batch size created by the recipe.
const double amountSugarRatio = 0.03125;
const double amountButterRatio = 0.0208333;
const double amountFlourRatio = 0.0572916;


int main() {
	float amountCookies;
	//Display question and recieve inputs
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
		<< amountCookies * amountFlourRatio << " cups of flour."
		<< std::endl;
	return 0;
}
