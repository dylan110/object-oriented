#ifndef SCAN_H
#define SCAN_H

#include <queue>
#include <string>
#include <iostream>
using namespace std;



class Scan
{
	private:
		bool error = false;
		queue<string> que; 
		
		
	public:
		void ToStringQueue(string input);
		queue<string> GetQueue();	
		bool IsError();
};

#endif
