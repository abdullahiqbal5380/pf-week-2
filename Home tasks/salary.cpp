#include<iostream>
using namespace std;
main()

{ 
  cout << "Enter working days per month:";
  int days;
  cin >> days;
  cout << "Enter earned dollars per day:";
  float dollars;
  cin >> dollars;
  cout << "Enter exchange rate from USD to PKR:";
  float exchangerate;
  cin >> exchangerate;
  
  float salaryPerMonth;
  salaryPerMonth = days*dollars;

  float salaryPerYear;
  salaryPerYear = salaryPerMonth*12;

  float salaryAfterBonus;
  salaryAfterBonus = salaryPerYear + (salaryPerMonth*2.5);

  float salaryAfterTax;
  salaryAfterTax = salaryAfterBonus - (salaryAfterBonus*25/100);

  float earningPerDayInRps;
  earningPerDayInRps = (salaryAfterTax*exchangerate)/365;

  cout << "Average Earning per Day:"<<earningPerDayInRps;
}