//Ch3 Programming Project
//CSC 221 63H FA24
//Instructor Andrew Sprague
//Austin Mollard


/*Project 1. Ingredient Adjuster
A cookie recipe calls for the following ingredients:
 1.5 cups of sugar
 1 cup of butter
 2.75 cups of flour
The recipe produces 48 cookies with this amount of ingredients. Write a program that asks the user how
many cookies he or she wants to make, then displays the number of cups of each ingredient needed for
the specified number of cookies*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	const double cuppAsug = 1.5, cuppAbutt = 1.0, cuppAflou = 2.75;
	double resultSug, resultButt, resultFlour, ingredMult;
	const int cookiesOrig = 48;
	int cookiesDesired;

	cout << "You need 1.5 cups of sugar, 1 cup of butter and 2.75 cups of flour to make 48 cookies.\nHow many cookies would you like to bake?" << endl;
	cin >> cookiesDesired;
	ingredMult = static_cast<double>(cookiesDesired) / cookiesOrig;
	resultSug = cuppAsug * ingredMult;
	resultButt = cuppAbutt * ingredMult;
	resultFlour = cuppAflou * ingredMult;
	cout << "To make " << cookiesDesired << " cookies, you'll need:\n" << std::setprecision(3) << resultSug << " cups of sugar," << resultButt << " cups of butter, and " << resultFlour << " cups of flour." << endl;
	cin.get();

		const int MIN_VAL = 100, MAX_VAL = 1000;

		int random1, random2, answer;

		unsigned seed = time(0);
		srand(seed);

		cout << "\n\nWelcome to the super mega Tutor-tron MK IV.\n\nHere's a random math problem for you to practice on!" << endl;
		random1 = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
		random2 = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;

		answer = random1 + random2;

		cout << "\n" << random1 << "+" << random2 << "= ? \n" << endl;
		cout << "Try to figure out this problem. To check your answer, press ENTER to see the solution." << endl;
		cin.get();
		cout << random1 << "+" << random2 << "=" << answer << endl;
	return 0;
}
