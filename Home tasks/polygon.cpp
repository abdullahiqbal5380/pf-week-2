#include<iostream>
using namespace std;

main()
{
  cout << "Enter number of sides of polygon:";
  int n;
  cin >> n;
  
  int sum;
  sum = (n-2)*180;
  cout << "The total sum of angles of a : "<<n<<" - sided polygon is "<<sum<<" degrees";
}