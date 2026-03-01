#include<iostream>
using namespace std;
main()

{ 
  cout << "Enter vegetable price per kilogram (in coins):";
  float vegetable_price;
  cin >> vegetable_price;

  cout << "Enter total kilogram of vegetables:";
  int total_vegetables;
  cin >> total_vegetables;

  cout << "Enter fruit price per kilogram (in coins):";
  float fruit_price;
  cin >> fruit_price;

  cout << "Enter total kilogram of fruits:";
  int total_fruits;
  cin >> total_fruits;

  float totalearningincoins;
  totalearningincoins = vegetable_price*total_vegetables + fruit_price*total_fruits;

  float Rp;
  Rp = 1.94;

  float totalearninginrupees;
  totalearninginrupees = totalearningincoins/Rp;
  cout << "Total earning in rupees:"<<totalearninginrupees;
}