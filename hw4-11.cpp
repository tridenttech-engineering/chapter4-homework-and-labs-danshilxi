//Lab4-2.cpp - displays a salesperson's commission
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() 
{ 
  //declare named  variables
  double begBalance = 0.0;
  double totDep = 0.0;
  double totWith = 0.0;
  double endBalance = 0.0;

  //enter input item
  cout << "Beginning balance: " ;
  cin >> begBalance;

  cout << "Total deposits: " ;
  cin >> totDep;

  cout << "Total withdrawals: " ;
  cin >> totWith;

  //calculate  and display the end balance
  endBalance = begBalance + totDep - totWith;
  
  
  cout << "End Balance: $" << endBalance << endl;

  return 0;
} //end of main function
