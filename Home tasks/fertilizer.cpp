#include<iostream>
using namespace std;
main()

{  
 cout << "Enter the weight of bag (in pounds):";
 float weight;
 cin >> weight;

 cout << "Enter the cost of bag:$";
 float cost;
 cin >> cost;

 cout << "Enter the area (in square feet) that bag can cover:";
 float area;
 cin >> area;

 float price_per_pound;
 price_per_pound = cost/weight;

 float cost_per_square_foot;
 cost_per_square_foot = cost/area;
 cout << "Cost of fertilizer per pound:" <<price_per_pound<<  endl;
 cout << "Cost of fertilizer per square foot:" <<cost_per_square_foot<<   endl;
}