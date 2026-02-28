#include<iostream>
using namespace std;
main()

 {
    cout << "Enter Your Name:"    <<endl;
    string Name;
    cin >> Name;
   
    cout << "Your Roll number:"    <<endl;
    int Rollnumber;
    cin >> Rollnumber;

    cout << "Your Aggregate:"       <<endl;
    int Aggregate;
    cin >> Aggregate;

    cout << "Your Section:"        <<endl;
    char Section;
    cin >> Section;
  
    cout << "---Student Info---"       <<endl;
    cout << "Name: "<<Name              <<endl;      
    cout << "Roll number: "<<Rollnumber   <<endl;
    cout << "Aggregate: "<<Aggregate      <<endl;
    cout << "Section: "<<Section        <<endl;
}