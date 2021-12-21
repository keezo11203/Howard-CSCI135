#include <fstream>//file stream
#include <string>//creates string variables
#include <iostream>//input-output stream
#include <iomanip>//lets you use setw
using namespace std;//uses cout throughout program
//cout means counsle out
//cin means console in
//endl means end line

void getData(float& miles, float& hours, float& mph)//reference points
{
  ifstream reader;//looks for text file
    reader.open("file.txt");//opens text file
    string word;
    string word2;
    float word3;
  reader >> word >> word2 >> word3;//reads from file
  
  string word4;
  string word5;
  string word6;
  float word7;
  reader >> word4 >> word5 >> word6 >> word7;//reads from file
  
   miles = word3;//sets miles equal to 12340
   hours = word7;//sets hours equal to 460
  mph = (word3/word7);//sets up equation to find out mph
}

int main ()//tells computer this is a C++ program 
{
  float miles;//creates variable
  float hours;//creates variable
  float mph;//creates variable
  
  getData(miles, hours, mph);//gets info from fuction and puts it in main
  
  std::cout << "Miles:" << miles << std::endl;//prints
  std::cout << "Hours:" << hours << std::endl;//prints
  std::cout << "MPH:"  << fixed << showpoint << setprecision(2) << mph << std::endl;//prints
  
  return 0;//ends program
}
