#include <iostream>
using namespace std;
  
int main() {
    float frh,celsius;
  
    cout << "Enter the temperature in fahrenheit"<<endl;
    cin >> frh;
    //Formula to convert fahrenheit to celsius// 
    celsius = 5 * (frh - 32) / 9;
  
    cout << frh <<" Fahrenheit is equal to " << celsius <<" "<<"DegreeCelsius";
      
    
}
