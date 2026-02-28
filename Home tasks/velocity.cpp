#include<iostream>
using namespace std;

main()
{
  cout << "Enter initial velocity (m/s):";
  int initial;
  cin >> initial;

  cout << "Enter acceleration (m/s^2):";
  int a;
  cin >> a;

  cout << "Enter time (s):";
  int t;
  cin >> t;

  int finalvelocity;
  finalvelocity = a*t+initial;
  cout << "Final velocity (m/s):" <<finalvelocity;
}