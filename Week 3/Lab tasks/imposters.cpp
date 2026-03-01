#include<iostream>
using namespace std;
main()

{  
 cout << "Enter imposters:";
 float i;
 cin >> i;

 cout << "Enter players:";
 int p;
 cin >> p;

 int chance;
 chance = 100*(i/p);
 cout << " Chance = "<<chance<<"%";
}