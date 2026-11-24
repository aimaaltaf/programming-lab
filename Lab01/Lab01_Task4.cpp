/*
Lab     : 01
Name    : Aima Altaf
Roll No : 2026-SE-07
Date    : 24-11-2026
Purpose : Explain an error with AI, then fix it
*/

/* Error  : [Error] no match for 'operator<<'(operand types are'std::basic_ostream<char>'and'<unresolved overloaded function type>')
 * AI tool: ChatGPT
 * AI said: endl moves the cursor to the next line, end is not standard c++ word, so it caused the error.
 *Fix     : Changed end to endl on line 14
 *Verdict : AI was correct.Because endl is the right word and the output now matches the slide. */
 
#include <iostream>
using namespace std;
int main()
{
	cout << "Lab 01 complete!" <<endl;
	cout <<"Next lab: Variables and input"
	     << endl;
	return 0;
}