/************************************************************
Programmer: Tray Koch
Description: This code was created to solve the Kattis problem called Modulo. This program needs to accept 10 numbers (A) as inputs and outputs the how many have a distinct a % 42 value.
Data Modified: September 23, 2022
************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  //declare variables
  int A; //will be input from Kattis
  int counter = 0; // will count number of distinct outputs
  int M; //modulus value

  //declare an array by size
  int i = 10;
  int arr [i];
 

  for (i = 0; i < 10; i++) //for loop to read in 10 values
  {
    cin >> A;   //Kattis input
    arr [i] = A % 42;     
  }

  if (arr[i] = arr [i])
    counter--;

  cout << counter + 11 << endl;
  
return 0;  
}