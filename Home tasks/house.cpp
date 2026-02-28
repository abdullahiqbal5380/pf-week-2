#include<iostream>
using namespace std;
main()

{ 
  cout << "Enter person's age:";
  int age;
  cin >> age;

  cout << "Enter number of times they 've moved:";
  int move;
  cin >> move;

  int averageyears;
  averageyears = (age)/(move+1);
  cout << "Average number of years lived in the same house:"<<averageyears;
}