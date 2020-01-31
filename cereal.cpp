

#include <iostream>

using namespace std;

int main(int argc, char **argv){

  int numBoxes = 0; //one box of cereal will be 16 oz ...
  double weight = 0.0; // ounces ... this is the input
  double metricTons = 0.0;

  cout << "Enter weight in ounces: " << endl;
  cin >> weight;
  metricTons = weight / 35273.92;
  numBoxes = 35273.92/16; //16 ounces is one standard box of cereal ...


  cout << "The weight of your object in metric tons is " << metricTons << endl;
  cout << "number of boxes needed to yeild one metric ton of cereal:  " << numBoxes << endl; // this will always be a constant?




return 0;
}
