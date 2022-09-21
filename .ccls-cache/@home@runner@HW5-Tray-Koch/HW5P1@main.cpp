/************************************************************
Programmer: Tray Koch
Description: Test loading a *.dat file. Follows the handout EOF_While_FileImport.pdf
Data Modified: September 21, 2022
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
  int count = 0;
  int cumulative_cases = 0;

  //declare stream variables
  ifstream inFile;  //needed to access files we want to load
  ofstream outFile;  //needed to save the results of the analysis

  //open the input file
  inFile.open("TestResultsData.dat");

  //open the output file
  outFile.open ("AnalyzedData.txt");

  //read in the date - first line of file
  inFile >> date;
  cout << date << endl;
  //add date to the output file in the first line
  outFile << date << endl;

  //read in the 2 pieces of info on the second line
  inFile >> firstName;
  cout << firstName << ' ';
  inFile >> TestResult;
  cout << TestResult << endl;

  while (inFile)
  {
      // update number of cases and persons tested
    cumulative_cases = cumulative_cases + TestResult;
    count++;  //increment the number of patients

    //read in the next line
    inFile >> firstName;
    inFile >> TestResult;
    
  }

  outFile << "Total Number of Cases = " << cumulative_cases << endl;
  outFile << "Number of Persons Tested = " << count << endl;

  //report prevalence as % with two decimals
  outFile << fixed << showpoint << setprecision(2);
  outFile << "The Prevalence is ";
  outFile << ( (static_cast<double>(cumulative_cases)) /count) * 100;
  outFile << "%" << endl;
  
  //close input file
  inFile.close();

  //close output file
  outFile.close();
  




  

  
}