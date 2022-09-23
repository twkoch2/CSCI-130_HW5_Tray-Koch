/************************************************************
Programmer: Tray Koch
Description: This code was created to solve the Kattis problem called Modulo. This program needs to accept 10 numbers (A) as inputs and outputs the how many have a distinct a % 42 value.
Data Modified: September 23, 2022
************************************************************/

#include <iostream>
#include <vector>
#include <algorithm> //from Bronson textbook


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
    arr [i] = A % 42;    //store answers in an array 
  }
  
  // Sort the array so that it goes lowest to highest
  //This simplfifies comparisons to find duplicate answers
  sort(arr, arr+10); // souce of line: https://www.youtube.com/watch?v=psNKC1LEtq0&feature=emb_logo

  counter = 10; //remove from counter when duplicates are found
  
  //brute force method to find duplicates
  if (arr [0] == arr [1])
    counter --;
  
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
  
  //display output 
  cout << counter << endl;
 
return 0;  
}