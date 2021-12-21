#include <iostream> // allows me to use cout
#include <string> // creates string variable 
using namespace std; // uses cout for entire program
//cout means counsle out
//cin means console in
//endl means end line

int main() // tells computer this is a C++ program
{
  string Name; // creates variable to allow user to enter their name
  cout << " Enter full name: "; // asks user to enter their name
   getline (cin, Name); // gets name from user
 cout << " A brave group of 24 set out on a quest in search of the lost treasure of the ancient dwarfs. ";
 cout << " The group was led by that legendary rogue," << Name << ".\n"; // adds name to sentence 
 cout << "Along the way, a band of marauding ogres ambushed the party.";
 cout <<  "All fought bravely under the command of " << Name << " and the ogres were defeated, but at a cost."; // adds name to sentence 
 cout << " Of the adventurers, 5 were vanquished, leaving just 19 in the group.";
 cout << "The party was about to give up all hope, but while laying the deceased to rest,they stumbled upon the buried fortune.";
 cout << "The adventurers split 900 gold pieces." << Name << " held onto the extra 7 pieces to keep things fair of course."; // adds name to sentence 
  return 0; // tells computer everything is correct
}
