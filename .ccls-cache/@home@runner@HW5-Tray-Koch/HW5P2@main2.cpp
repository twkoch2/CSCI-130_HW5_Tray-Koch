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
  
  // load input file 
  ifstream inFile; //declare stream variable
  inFile.open ("NumberData1.txt");

  //load all data in while loop
  while (inFile >> dataTemp)
    {
      if (dataTemp >= 0)
      {
        // update cumulative value of all data and number of data points loaded
      }

      else //the value is negative and we should exit
      {
        cout << "Negative value encountered of " << dataTemp << "." << endl;
        cout << "Will not use rest of data..." << endl;
        break;
      }
      //cout << dataTemp << endl;
    }

  
  
}