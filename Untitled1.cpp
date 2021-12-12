#include <bits/stdc++.h>
using namespace std;
string howmuchiloveyou(int f)
{
	int number = f%6;
	if(number == 0)
	{
		return "not at all";
	}
	else if (number == 1)
    {
        return "I love you";
    }
    else if (number == 2)
    {
        return "a little";
    }
    else if (number == 3)
    {
       return "a lot";
    }
    else if (number == 4)
    {
        return "passionately";
    }
    else
    {
        return "madly";
    }
}
int main()
{
	cout << howmuchiloveyou(6);			
}
