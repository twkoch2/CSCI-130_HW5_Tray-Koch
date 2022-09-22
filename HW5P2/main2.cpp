/************************************************************
Programmer: Tray Koch
Description: Test loading a *.txt file. Follows the handout FileImport2.pdf This handout outlines that uses of the break function to salvage data when something goes awry.
Data Modified: September 22, 2022
************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
  //identify variables
  int dataTemp;
  int sumData = 0;
  int counter = 0;
  
  // load input file 
  ifstream inFile; //declare stream variable
  inFile.open ("NumberData1.txt");

  //load all data in while loop
  while (inFile >> dataTemp)
    {
      if (dataTemp >= 0)
      {
        // update cumulative value of all data and number of data points loaded
        sumData = sumData + dataTemp;
        counter++;
      }

      else //the value is negative and we should exit
      {
        cout << "Negative value encountered of " << dataTemp << "." << endl;
        cout << "Will not use rest of data..." << endl;
        break;
      }
    
    }

  // display rest of data to console
  cout << "The sum of valid data is: " << sumData << endl;
  cout << "The number of valid data points is: " << counter << endl;
  cout << "The average of valid data is: " << (sumData) / (counter) << endl;
  
  return 0;
}