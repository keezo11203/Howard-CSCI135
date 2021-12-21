#include <fstream>//file stream
#include <string>//creates string variables
#include <iostream>//input-output stream
#include <iomanip>//lets you use setw
using namespace std;//uses cout throughout program
//cout means counsle out
//cin means console in
//endl means end line

struct Athlete//creates struct and variables for athletes
{
  string name;
  string sport;
  int height;
  Athlete* next;//uses info for next athlete in the list
};

int main ()
{
  
  Athlete* first;//sets up info for first athlete
  first = new Athlete;//shows what variable we are working on 
  first -> name = "Usain Bolt"; //gets name
  first -> sport = "Sprinting";//gets sport
  first -> height = 77;//gets height
  
  
  Athlete* next;
  next = new Athlete;//shows what variable we are working on 
  next -> name = "Tiger Woods";//gets name
  next -> sport = "Golf";//gets sport
  next  -> height = 73;//gets height
  
  
  Athlete* current;
  current = new Athlete;//shows what variable we are working on 
  current -> name = "Michael Jordan";//gets name
  current -> sport = "Basketball";//gets sport
  current -> height = 78;//gets height
  
  std::cout << first -> name << " is the best at " << first -> sport << " and is " << first -> height << " inches tall" << std::endl; //prints info
  std::cout << current -> name << " is the best at " << current -> sport << " and is " << current -> height << " inches tall" << std::endl; //prints info
  std::cout << next -> name << " is the best at " << next -> sport << " and is " << next -> height << " inches tall" << std::endl; //prints info
  
  
  return 0;//ends program
}
