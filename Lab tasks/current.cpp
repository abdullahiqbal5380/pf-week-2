#include<iostream>
using namespace std;
main()

{  
  cout << "Enter the charge in Coulombs:";
  int charge;
  cin >> charge;
  cout << "Enter the time in seconds:";
  int time;
  cin >> time;
  int current;
  current = charge/time;
  cout << "The current is = "<<current<<"ampere";
}
