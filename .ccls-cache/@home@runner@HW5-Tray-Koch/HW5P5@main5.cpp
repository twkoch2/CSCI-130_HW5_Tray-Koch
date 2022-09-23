/************************************************************
Programmer: Tray Koch
Description: This code was created to solve the Kattis problem called Grass Seed Inc. This program needs to take in the cost to sow one m^2 of lawn, the number of lawns, and the dimesns of the lawns. It must output the cost that should be charged for this service.
Data Modified: September 22, 2022
************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main ()
{
  // intialize variables
  double C; //cost of seed to sow one m^2 of lawn
  int L; //number of lawns to sow
  double width; //width of lawn
  double length; // length of lawn
  double a; //area of single lawn
  double A = 0; //total area of lawn to sow
  double cost; //total cost of seed

  // gather variables defined outside of loop
  cin >> C; //cost per unit area
  cin >> L; //Number of lawns
  

  for (int i = 0; i < L; i++)
  {
    cin >> width >> length;
    a = (width) * (length);
    A = A += a; // increment total area by area of single lawn
  }

  cost = (A) * (C);

  cout << setprecision(7) << fixed << cost << endl;


  return 0;
}