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
 
ifstream reader;//looks for text file
    reader.open("file.txt");//opens text file
    string word;
    string word2;
    string word3;
    string word4;
    float word5;
  reader >> word >> word2 >> word3 >> word4 >> word5;//reads from file
  std::cout << " Song Title:" << word << setw(7) << word2 << " by:" << word3 << setw(7) << word4 <<  " Number of Listens:" << word5 << std::endl;//prints
 
    string word6;
    string word7;
    string word8;
    float word9;
  reader >> word6 >> word7 >> word8 >> word9;//reads from file
  std::cout << std::setw(10);//lines up with other sentences
  std::cout << " Song Title:" << word6 << " by:" << word7 << setw(10) << word8 << " Number of Listens:" << word9 << std::endl;//prints
  
    string word10;
    string word11;
    string word12;
    string word13;
    string word14;
    float word15;
  reader >> word10 >> word11 >> word12 >> word13 >> word14 >> word15;//reads from file
  std::cout << std::setw(10);//lines up with other sentences
  std::cout << " Song Title:" << word10 << setw(3) << word11 << setw(4) << word12 << " by:" << word13 << setw(5) << word14 << " Number of Listens:" << word15 << std::endl;//prints
  
    string word16;
    string word17;
    string word18;
    string word19;
    string word20;
    float word21;
  reader >> word16 >> word17 >> word18 >> word19 >> word20 >> word21;//reads from file
  std::cout << std::setw(10);//lines up with other sentences
  std::cout << " Song Title:" << word16 << setw(6) << word17 << " by:" << word18 <<  setw(4) << word19 << setw(7) << word20  << " Number of Listens:" << word21 << std::endl;//prints
 
    string word22;
    string word23;
    string word24;
    string word25;
    string word26;
    float word27;
  reader >> word22 >> word23 >> word24 >> word25 >> word26 >> word27;//reads from file
  std::cout << std::setw(10);//lines up with other sentences
  std::cout << " Song Title:" << word22 << setw(3) << word23 << setw(3) << word24 << setw(5) << word25 << " by:" << word26 << " Number of Listens:" << word27 << std::endl;//prints
 
  
    string word28;
    string word29;
  float word30;
  reader >> word28 >> word29 >> word30;//reads from file
  std::cout << std::setw(10);//lines up with other sentences
  std::cout << " Song Title:" << word28 << " by:" << word29 << " Number of Listens:" << word30 << std::endl;//prints
  
    string word31;
    string word32;
    string word33;
   float word34;
  reader >> word31 >> word32 >> word33 >> word34;//reads from file
  std::cout << std::setw(10);//lines up with other sentences
  cout << " Song Title:" << word31 << " by:" << word32 << setw(8) << word33 << " Number of Listens:" << word34 << std::endl;//prints
  
    string word35;
    string word36;
    string word37;
    string word38;
    string word39;
    float word40;
  reader >> word35 >> word36 >> word37 >> word38 >> word39 >> word40;//reads from file
  std::cout << std::setw(10);//lines up with other sentences
  cout << " Song Title:" << word35 << setw(4) << word36 << setw(12) << word37 << " by:" << word38 << setw(6) << word39 << " Number of Listens:" << word40 << std::endl;//prints
  
    string word41;
    string word42;
    string word43;
    string word44;
    string word45;
    float word46;
  reader >> word41 >> word42 >> word43 >> word44 >> word45 >> word46;//reads from file
  std::cout << std::setw(10); //lines up with other sentences
  cout << " Song Title:" << word41 << setw(3) << word42 << setw(8) << word43 << " by:" << word44 << setw(6) << word45 << " Number of Listens:" << word46 << std::endl;//prints
  
  float totallistens = word46 + word40 + word34 + word30 + word27 + word21 + word15 + word9 + word5;//calculates total listens
  std::cout << std::setw(10);//lines up with other sentences
    cout << "Total Listens:" << totallistens << std::endl;//prints 
  
  float avglistens = (totallistens/9); //calculates average listens
  std::cout << std::setw(10); //lines up with other sentences
  cout << "Average Listens:" << avglistens << std::endl; //prints
  
  return 0;//lets computer know everything went fine
}
