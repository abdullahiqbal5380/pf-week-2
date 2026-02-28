#include<iostream>
using namespace std;
main()

{ 
  cout << "Enter a 4-digit number:";
  int digits;
  cin >> digits;

  int sum;
  sum = sum + digits % 10;
  digits = digits/10;

  sum = sum + digits % 10;
  digits = digits/10;

  sum = sum + digits % 10;
  digits = digits/10;

  sum = sum + digits % 10;
  digits = digits/10;
  cout << "Sum of the individual digits:"<<sum;
}