/************************************************************
Programmer: Tray Koch
Description: This code was created to solve the Kattis problem called Modulo. This program needs to accept 10 numbers (A) as inputs and outputs the how many have a distinct a % 42 value.
Data Modified: September 23, 2022
************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

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
  
  // Sort the vector  
  sort(arr, arr+10);

  //cout << endl << arr [1] << endl << arr [2] << endl << arr [3] << endl << arr [4] << endl << arr [4] << endl << arr [5] << endl << arr [6] << endl << arr [7] << endl << arr [8] << arr [9] << arr [10] << endl;
  
  counter = 10;
  
  if (arr [1] == arr [2])
    counter --;
  
  if (arr [2] == arr [3])
    counter --;
  
  if (arr [3] == arr [4])
    counter --;
  
  if (arr [4] == arr [5])
    counter --;
  
  if (arr [5] == arr [6])
    counter --;
  
  if (arr [6] == arr [7])
    counter --;
  
  if (arr [7] == arr [8])
    counter --;
  
  if (arr [8] == arr [9])
    counter --;
  
  if (arr [9] == arr [10])
    counter --;
  
  if (counter == 10)
    cout << counter << endl;
  if (counter != 10)
    cout << counter - 1 << endl;
  
  
return 0;  
}