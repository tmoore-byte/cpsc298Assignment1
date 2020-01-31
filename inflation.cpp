#include <iostream>

using namespace std;

int main(int argc, char **argv){
  double expectedCost = 0.0;
  int years = 0;
  double cost = 0.0;
  double inflation = 0.0;


  cout << "Enter the cost of item: " << endl;
  cin >> cost;
  cout << "Enter the number of years: " << end;
  cin >> years;
  cout << "Enter the rate of inflation (as a percent, ie. 5.6): " << endl;
  cin >> inflation;

  inflation = inflation / 100;

  for (int i = 0; years > i ; ++i){
    cost = cost + cost*inflation;
  }
  cout <<


}
