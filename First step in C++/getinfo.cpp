//getinfo.cpp -- input and out
#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;
	
	cout << "How many carrots do yiu have?" << endl;
	cin >> carrots;		//C++ input
	cout << "Here are two more. ";
	carrots = carrots + 2;
//the next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}
