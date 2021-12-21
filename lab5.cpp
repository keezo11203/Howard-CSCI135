#include <fstream>//file stream
#include <string>//creates string variables
#include <iostream>//input-output stream
#include <iomanip>//lets you use setw
using namespace std;//uses cout throughout program
//cout means counsle out
//cin means console in
//endl means end line

int main()//tells computer this is a C++ program 
{
  int a;//creates variable
  float counter = 0;//counts how many time the code has been run
  
  while (counter < 4) //check to see if counter is less than 4
    {
     cout << "Enter a number: " << endl; //ask user for number
        cin >> a;
     
     if (a > 100 ) // Check if number is greater than 100
 {
   cout << " This is a big number" << endl; // print message
 }
     
     if (a < 10 ) // Check if number is less than 10
 {
   cout << " This is a small number" << endl; // print message
 }
     if (a >= 10 && a <= 100) // Check if number is between 10 and 100
 {
   cout << " This is a number" << endl; // print message
       
 }
      counter = counter +1;//adds 1 to the counter variable after the code is run
   }
     
  return 0;
}
