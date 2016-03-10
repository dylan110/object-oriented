#include "print.h"
using namespace std;

void Print::PrintQueue(queue<string> que)
{
	string str;
	for (; que.empty()==false; que.pop())
	{
		cout << que.front() << endl;
	}
}
