//done
//thomas moore
//cpsc298

#include <iostream>
using namespace std;

int main(int argc, char **argv){

double basePay = 16.0;
double totalPay = 0.0;
double hours = 0.0;

double grossPay = 0.0; // including taxes
double socialSecurity = 0.0; // 6%
double federalTax = 0.0;  // 14%
double stateTax = 0.0;  // 5%
int medicalInsurance = -10; //$10 per week



cout << "Enter the hours worked this week: " << endl;
cin >> hours;
if (hours > 40.0){  // 40 hours is a normal work week
  totalPay = (hours - 40)*(basePay*1.5) + (40*basePay);
  cout << "Total pay (with overtime before tax): $ " << totalPay << endl;
}else if (hours <= 40){
  totalPay = basePay*hours;
  cout << "Total pay (no overtime before tax): $ " << totalPay << endl;
}else{
  cout << "invalid input!" << endl;
}

// taxes

socialSecurity = totalPay*0.06;
federalTax = totalPay*0.14;
stateTax = totalPay*0.05;
grossPay = totalPay - socialSecurity - federalTax - stateTax + medicalInsurance;


cout<< "TAX AMOUNTS " << endl;
cout << "Social Security: $ "<< socialSecurity << endl;
cout << "Federal Tax: $ "<< federalTax << endl;
cout << "State Tax: $ "<< stateTax << endl;
cout << "Medical insurance: $ " << medicalInsurance << " per week" << endl;
cout << "Gross pay (with taxes included): $ " << grossPay << endl;



return 0;
}
