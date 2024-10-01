//Ch3 Programming Project
//CSC 221 63H FA24
//Instructor Andrew Sprague
//Austin Mollard
/*Assuming there are no deposits other than the original investment, the balance in a
savings account after one year may be calculated as amount = principle * (1+rate/T)^T.
Principal is the balance in the savings account, Rate is the interest rate, and T is
the number of times the interest is compounded during a year (T is 4 if the interest
is compounded quarterly).
Write a program that asks for the principal, the interest rate, and the number of
times the interest is compounded.*/
//updated to do the branch thing

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	float amount, princi, numsComp, inRate, totalinter;

	cout << "Welcome to the interest earned calculator.\nThis calculates your total after one year.\nWhen prompted, please input your inputs to be inputted. And calculated." << endl;

	cout << "Interest rate (in decimal form, e.g. 4.25% > .0425)?" << endl;
	cin >> inRate;

		cout << "How many times compounded a year?" << endl;
		cin >> numsComp;

			cout << "Your principal?" << endl;
			cin >> princi;

						amount = princi * pow((1 + inRate / numsComp), numsComp);
						totalinter = amount - princi;

				cout << "\n\n\nInterest rate: " << inRate << "\n" << "Times compounded: " << numsComp << "\n" << "Principal: " << princi << "\n" << "Interest: " << totalinter << "\n" << "Total amount after one year: " << amount << endl;
	return 0;
}
