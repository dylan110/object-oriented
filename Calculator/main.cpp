#include "scan.h"
#include "print.h"

#include <string>
#include <iostream>
using namespace std;

string input;

int main()
{
	Scan scan;
	Print print;
	
	cin >> input;
	
	scan.ToStringQueue(input);
	
	if (scan.IsError())
	{
		cout << "Error" << endl;
	}	else
	{
		print.PrintQueue(scan.GetQueue());
	}
} 
