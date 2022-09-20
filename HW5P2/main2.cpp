/************************************************************
Programmer: Tray Koch
Description: Test loading a *.dat file. Follows the handout EOF_While_FileImport.pdf
Data Modified: September 20, 2022
************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
  //declare variables
  string firstName;
  string date;
  int TestResult;

  //declare stream variables
  ifstream inFile;  //needed to access files we want to load
  ofstream outFile;  //needed to save the results of the analysis

  //open the input file
  inFile.open("TestResultsData.dat");

  //read in the date - first line of file
  inFile >> date;
  cout << date << endl;

  //read in the 2 pieces of info on the second line
  inFile >> firstName;
  cout << firstName << ' ';
  inFile >> TestResult;
  cout << TestResult << endl;

  
}