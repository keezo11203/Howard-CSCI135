#include <iostream>// allows me to use cout
#include <string>// creates string variable 
using namespace std;// uses cout for entire program

int main()//tells computer this is a c++ program
{
  bool enternum = true;//creates loop
  string answer;//creates variable
  
  while(enternum == true)//creates while loop
  {
  int num;//creates variable
  cout << "Enter a number (0-9)";//asks user for number
  cin >> num;//gets number
    
   cout << "Do you want to stop? (y/n)" << endl;//asks user
        cin >> answer;//gets answer
        if(answer =="Y"||answer =="y")//if user clicks Y
        {
            return 0;//ends program 
        }
    
        if(answer =="N"||answer =="n")//if user clicks N
        {
          enternum = true;//continues program
        }
  }
    
return 0;//tells computer everything is fine
}
