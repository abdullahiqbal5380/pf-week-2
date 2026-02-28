#include<iostream>
using namespace std;
main()

{ 
 cout << "Enter number of square meters you can paint:";
 int n;
 cin >> n;

 cout << "Enter width of single wall (in meters):";
 int w;
 cin >> w;

 cout << "Enter height of single wall (in meters):";
 int h;
 cin >> h;

 int walls_painted;
 walls_painted = n / (w*h);
 cout << "Numbers of wall you can paint:"<<walls_painted;
}