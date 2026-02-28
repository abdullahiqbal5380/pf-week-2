#include<iostream>
using namespace std;
main()

{  
  cout << "Enter 2 pointers:";
  int pointers2;
  cin >> pointers2;
  
  cout << "Enter 3 pointers:";
  int pointers3;
  cin >> pointers3;

  int Totalpoints;
  Totalpoints = (pointers2*2)+(pointers3*3);
  cout << "Total points = "<<Totalpoints;
}