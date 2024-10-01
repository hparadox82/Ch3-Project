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
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//Project 1:

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
		/*_______________________________________________________________________________________________________*/


		//Project 2:

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
		/*_____________________________________________________________________________________________________*/


		//Project 3:

		cin.get();
		float amount, princi, inRate, totalinter;
		int numsComp;

		cout << "Welcome to the interest earned calculator.\nThis calculates your total after one year.\nWhen prompted, please input your inputs to be inputted. And calculated." << endl;

		cout << "Interest rate (in decimal form, e.g. 4.25% > .0425)?" << endl;
		cin >> inRate;

			cout << "How many times compounded a year?" << endl;
			cin >> numsComp;

				cout << "Your principal?" << endl;
				cin >> princi;

						amount = princi * pow((1 + inRate / numsComp), numsComp);
						totalinter = amount - princi;
						cout.setf(ios::fixed);

						cout << "\n\n\nInterest rate: " << inRate << "\n" << "Times compounded: " << numsComp << endl;
						cout << std::setprecision(2) << "Principal: " << princi << "\n" << "Interest: " << std::setprecision(2) << totalinter << endl;
						cout << "Total amount after one year: " << std::setprecision(2) << amount << endl;

	return 0;
}
