#include <bits/stdc++.h>
using namespace std;
string people_with_age_drink(int age)
{
  if (age < 14)
  {
    return "drink toddy";
  }
  if (age < 18)
  {
    return "drink coke";
  }
  if (age < 21)
  {
    return "drink beer";
  }
  if (age >= 21)
  {
    return "drink whisky";
  }
}
int main()
{
	cout << people_with_age_drink(14);
	return 0;
}
