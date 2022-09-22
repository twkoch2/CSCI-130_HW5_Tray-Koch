/************************************************************
Programmer: Tray Koch
Description: This code was created to answer Exercise 5.6 Problem 6 in the Bronson textbook. This questions asks that the user create a table in C++. This table needs to display wind chill indexes for temps from 2 - 10 degrees C and wind speed from 5 - 11 km/hr for each temperature.
Data Modified: September 22, 2022
************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>


using namespace std;

int main ()
{
  //identify variables
  double WCI; //Wind chill index
  double Ta; //Measured Temperature (degrees Celsius)
  double Ws; //Wind Speed (km/hr)
  double k1, k2, k3; //conversion factors

  //identify conversion factors
  k1 = 13.12;
  k2= 11.37;
  k3 = 0.3965;

  //start table headers
  cout << "Temperature     Wind Speed     Wind Chill" << endl;
  cout << "   in ℃          in km/h       Index (WCI)" << endl;

//create nested for loops to calculate all of the required data points
  for (Ta = 2; Ta <= 10; Ta += 4)
  {
    for (Ws = 5; Ws <= 11; Ws += 2)
      {
        WCI = ( (k1) + ( (0.6125) * (Ta) ) - ( (k2) * (pow(Ws, 0.16)) ) + ( (k3) * (Ta) * (pow(Ws,0.16))) );

        cout << setprecision(2) << fixed;
        cout << setw(8) << Ta << setw (15) << Ws << setw(16) << WCI << endl;
      }
  }

  return 0;
}