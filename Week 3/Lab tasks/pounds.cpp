#include<iostream>
using namespace std;
main()

{  
  cout << "Enter weight in pounds:";
  int pounds;
  cin >> pounds;

  float kilograms;
  kilograms = pounds*0.45;
  cout << pounds <<" pounds is equal to "<<kilograms<<" kilograms";
}