#include "scan.h"


void Scan::ToStringQueue(string input)
{
	string str="";
	
	for (int i=0; i<=input.size(); i++)
	if (input[i]<'0'||input[i]>'9')
	{
		str=input[i];
		que.push(str);
		str="";
	}	else
	{
		str = str + input[i];
		if (str.size()>10)
		{
			error = true;
		}
		if (input[i+1]<'0'||input[i+1]>'9')
		{
			que.push(str);
			str="";
		}
	}
}


queue<string> Scan::GetQueue()
{
	return que;
}

bool Scan::IsError()
{
	return error;
}

