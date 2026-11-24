/*
Lab     : 01
Name    : Aima Altaf
Roll No : 2026-SE-07
Date    : 24-11-2026
Purpose : To Find bugs and fix them
*/
#include <iostream>
using namespace std;  // BUG 1: missing ; after std
int main() 
{
	cout << "Welcome to the lab!"<< endl;  // BUG 2: missing ; after endl
	cout <<"Today we learn \"C++\"."<< endl;  // BUG 3: Cout changed to cout 
	cout <<"Files are in C:\\Lab01" << endl; // BUG 4: / changed to //
	cout <<"Bye!" << endl;  //BUG 5: missing closing quotation mark sfter Bye!
	return 0;
}