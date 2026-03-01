#include<iostream>
using namespace std;
main()

{  
  cout << "Enter name of movie:";
  string movie;
  cin >> movie;

  cout << "Enter price of adult ticket:$";
  int adult_ticket;
  cin >> adult_ticket;

  cout << "Enter price of child ticket:$";
  int child_ticket;
  cin >> child_ticket;
 
  cout << "Enter number of adult tickets sold:";
  int adult_ticket_sold;
  cin >> adult_ticket_sold;

  cout << "Enter number of children's ticket sold:";
  int child_ticket_sold;
  cin >> child_ticket_sold;

  cout << "Enter percentage of total money donated to charity:";
  int percentage;
  cin >> percentage;

  cout << "------------------------------------"   <<endl;
  cout << "Movie:" <<movie<<   endl;

  int total_amount;
  total_amount = adult_ticket*adult_ticket_sold + child_ticket*child_ticket_sold;
  cout << "Total amount generated from ticket sales:$"<<total_amount<<   endl;

  int donation;
  donation = total_amount*(percentage/100.0);
  cout << "Donation to charity:$"<<donation<<   endl;

  int remainingamount;
  remainingamount = total_amount - donation;
  cout << "Remaining amount after donation:$"<<remainingamount<<   endl;
}