#include <fstream>//file stream
#include <string>//creates string variables
#include <iostream>//input-output stream
#include <iomanip>//lets you use setw
using namespace std;//uses cout throughout program
//cout means counsle out
//cin means console in
//endl means end line

int getCredits;
void printWelcome(string Name){ //creates parameter
   cout << " Hello " << setw(5) << Name << setw(8); //prints
}
 void printMessage(string Major){ //creates parameter
   cout << "As a/an " << Major << " major you still need " << getCredits << " credits to graduate " ;//prints
}

   int main(){
     
 string Major;//creates variable
 int credsnow;//creates variable
 
     
   string Name; //creates string
   cout << "Enter your first name: "; //gets name from user
   cin >> Name;//prints
   printWelcome(Name);//calls back to function 
     
      cout << "What is your major? (C for Computer Engineering, E for Electrical Engineering , M for Math, S for Computer Science )";//prints
  cin >> Major;//gets major from user
     
   
  if (Major== "C")//if they press C
  {
    int credsC = 82;//computer engineering credits
     cout << "How many credits do you have?";
   cin >> credsnow;//gets number from user
    getCredits = credsC - credsnow;//gets remaining credits
printMessage(" Computer Engineering");//calls back to function 
    return 0;//ends program
   }
     
   if (Major== "E")//if the user presses E
   {
     int credsE = 80;//electrical engineering credits 
      cout << "How many credits do you have?";
   cin >> credsnow;//gets number from user
     getCredits = credsE - credsnow;//gets remaining credits
printMessage(" Electrical Engineering");//calls back to function 
     return 0;//ends program
   }
     
     if(Major== "M");//if the user presses E
  {
    int credsM = 85;//math credits
    cout << "How many credits do you have?";
   cin >> credsnow;//gets number from user 
    getCredits = credsM - credsnow;//gets remaining credits
printMessage(" Math");//calls back to function 
    return 0;//ends program
  }
     
   if (Major =="S");//if the user presses S
     {
       int credsS = 75;//computer science credits
    cout << "How many credits do you have?";
   cin >> credsnow;//gets number from user
    getCredits = credsS - credsnow;//gets remaining credits
printMessage(" Computer Science");//calls back to function 
       return 0;//ends program
  }
     
   
     return 0;//lets computer know everything went fine
}
