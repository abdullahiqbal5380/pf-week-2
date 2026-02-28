#include<iostream>
using namespace std;
main()

{  
 cout << "Enter the name of Person:";
 string Person;
 cin >> Person;

 cout << "Enter the target weight loss in kilograms:";
 float Weightloss;
 cin >> Weightloss;
 
 float totaldays;
 totaldays = Weightloss*15;
 cout << Person << " will need " <<totaldays<< " days to lose " <<Weightloss<< " kg of weight by following doctor's suggestion";
}
 