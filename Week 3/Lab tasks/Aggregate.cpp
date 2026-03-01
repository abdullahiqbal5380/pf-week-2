#include<iostream>
using namespace std;

main()
{
   cout << "Enter the student's name:"  <<endl;
   string name;
   cin >> name;

   cout << "Enter Matric marks:" <<endl;
   int Matric;
   cin >> Matric;
   
   cout << "Enter Inter marks:" <<endl;
   int Inter;
   cin >> Inter;
  
   cout << "Enter ECAT marks:"  <<endl;
   int ECAT;
   cin >> ECAT;

   float Aggregate;
   Aggregate =(Matric*10.0)/1100+(Inter*40.0)/550+(ECAT*50.0)/400;

   cout << "Your Aggregate is:"<<Aggregate<<"%";
}