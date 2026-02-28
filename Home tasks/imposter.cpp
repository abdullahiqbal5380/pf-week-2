#include<iostream>
using namespace std;
main()

{  
  cout << "Enter the number of imposters:";
  float i;
  cin >> i;

  cout << "Enter the number of players:";
  int p;
  cin >> p;

  int chance;
  chance = 100*(i/p);
  cout << "Chance of being an imposter:"<<chance<<"%";
}