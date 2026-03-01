#include<iostream>
using namespace std;
main()

{  
  cout << "Enter the number of wins:";
  int wins;
  cin >> wins;
  cout << "Enter the number of draws:";
  int draws;
  cin >> draws;
  cout << "Enter the number of losses:";
  int losses;
  cin >> losses;
  
  int totalpoints;
  totalpoints = (wins*3)+(draws*1)+(losses*0);
  cout << "Pakistan has obtained "<<totalpoints<<" in Asia Cup Tournament";
}