// carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	using namespace std;
	
	int carrots;
	
	carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots. ";
	cout << endl;
	carrots = carrots -1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots. " << endl;
	
	return 0;
}
