#include<iostream>
using namespace std;
main()

{  
  cout << " Enter the current world population:";
  int worldpopulation;
  cin >> worldpopulation;
  
  cout << " Enter the monthly birth rate:";
  int birthrate;
  cin >> birthrate; 

  int numberOfPeople;
  numberOfPeople = worldpopulation + (360*birthrate);
  cout << "Population in three decades will be " <<numberOfPeople;
 }
  