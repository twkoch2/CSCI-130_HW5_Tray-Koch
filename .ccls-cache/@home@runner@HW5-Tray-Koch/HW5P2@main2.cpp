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
  while (!inFile.eof())
    {
      inFile >> dataTemp;
      cout << dataTemp << endl;
    }

  
  
}