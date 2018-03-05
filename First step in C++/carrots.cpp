// carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	using namespace std;
	
	int carrots;				// declare an integer variable
	
	carrots = 25;				// assign a value to the variable
	cout << "I have ";
	cout << carrots;			// display the value of the variable
	cout << " carrots. ";
	cout << endl;
	carrots = carrots -1;		// modify the variable
	cout << "Crunch, crunch. Now I have " << carrots << " carrots. " << endl;
	
	return 0;
}
