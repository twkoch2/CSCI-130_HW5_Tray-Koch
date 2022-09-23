/************************************************************
Programmer: Tray Koch
Description: This code was created to solve the Kattis problem called Modulo. This program needs to accept 10 numbers (A) as inputs and outputs the how many have a distinct a % 42 value.
Data Modified: September 23, 2022
************************************************************/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main ()
{
  //declare variables
  int A; //will be input from Kattis
  int counter; // will count number of distinct outputs
  int M; //modulus value
 

  for (int i = 0; i < 10; i++) //for loop to read in 10 values
  {
    cin >> A;   //Kattis input
    M = A % 42;
    cout << M << endl;

    for (int a = 0; a < 42; i++)
      if
    
   
    
  }
  
  
  cout << counter << endl;
}