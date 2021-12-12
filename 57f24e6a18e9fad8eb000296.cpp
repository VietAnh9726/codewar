#include <iostream>
#include <algorithm>
#include <string>
using namespace std ;
string ChuDaoNguoc(string s) 
{
   int length = s.length();
   string result;
   for (int i = length - 1; i >= 0; i--) 
    {
        result.push_back(s[i]);
    }
   return result;
}
int main()
{
	string s = "abcd";
	reverse(s.begin(),s.end());
	cout << s;
//    cout << ChuDaoNguoc("abcd");
}


