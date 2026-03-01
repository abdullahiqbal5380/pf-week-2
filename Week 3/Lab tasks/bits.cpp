#include<iostream>
using namespace std;
main()

{  
  cout << "Enter the size in megabytes:";
  int mb;
  cin >> mb;

  float bits;
  bits = mb*1024.0*1024.0*8.0;
  cout <<mb<< " mb is equal to "<<bits<<"bits";
}