/*Ch3 Programming Project
//CSC 221 63H FA24
//Instructor Andrew Sprague
Austin Mollard*/


/*
Write a program that can be used as a math tutor for a young student. The program
should display two random numbers to be added, such as 247+129.

The program should then pause while the student works on the problem. When the
student is ready to check the answer, he or she can press a key and the program
will display the correct solution: 247+129 = 376

Use the technique we talked about in class (using cin.get) to pause the screen.
Do NOT use system(pause).
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	const int MIN_VAL = 100, MAX_VAL = 1000;

	int random1, random2, answer;

	unsigned seed = time(0);
	srand(seed);

	cout << "Welcome to the super mega Tutor-tron MK IV.\n\nHere's a random math problem for you to practice on!" << endl;
	random1 = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
	random2 = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;

	answer = random1 + random2;

	cout << "\n" << random1 << "+" << random2 << "= ? \n" << endl;
	cout << "Try to figure out this problem. To check your answer, press ENTER to see the solution." << endl;
	cin.get();
	cout << random1 << "+" << random2 << "=" << answer << endl;
		return 0;
}
