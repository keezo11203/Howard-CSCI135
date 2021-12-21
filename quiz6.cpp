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
  int i;//creates variable
  float numbers[5];//creates array
  
  // Store first number entered by the user
    for(i = 0; i < 5; i++)
    {
       cout << "Enter a number: ";//asks user to enter number
       cin >> numbers[i];//adds to array
    }

    // Loop to store largest number 
    for(i = 1;i < 5; i++)//loops 4 times
    {
       if(numbers[0] < numbers[i])//compares numbers in array
           numbers[0] = numbers[i];//finds highest number
    }
    cout << "Highest number: " << numbers[0];//prints

    return 0;//lets computer know everything is fine
}
