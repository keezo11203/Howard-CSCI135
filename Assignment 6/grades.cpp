#include <fstream>//file stream
#include <string>//creates string variables
#include <iostream>//input-output stream
#include <iomanip>//lets you use setw
using namespace std;//uses cout throughout program
//cout means counsle out
//cin means console in
//endl means end line

float calculate (float sum, float number_of_grades, float possible_points)//creates the function 
{
  return (sum /(number_of_grades * possible_points)) * 100; // sets up expression
}

int main()//tells computer this is a C++ program 
{
  float lab[17];//creates array
  float quiz[17];//creates array
  float assignments[17];//creates array
  
  float finalexam;//creates variable
  float midterm;//creates variable
  
  float lab_grades_count;//creates variable
  float lab_grades_sum;//creates variable
  
  float assignments_grades_count;//creates variable
  float assignments_grades_sum;//creates variable
  
  float quiz_grades_count;//creates variable
  float quiz_grades_sum;//creates variable
  
  
  ifstream read("file.txt");//reads from file
  for (int i = 0; i < 16; i++)//reads file 16 times
  {
    char gradetype;//creates variable
    string grade_text;
    float grade;//creates variable
    read >> gradetype;//reads letter in front of grade
    getline(read, grade_text);
    grade = strtof(grade_text.c_str(), NULL);
    
    
    if (gradetype == 'L')//adds grades to lab array
    {
      lab[i] = grade;
      lab_grades_count++;
      lab_grades_sum += grade;
    }
    
  if (gradetype == 'Q')//adds grades to quiz array
    {
      quiz[i] = grade;
      quiz_grades_count++;
      quiz_grades_sum += grade;
    }
    
    if (gradetype == 'A')//adds grades to assignments array
    {
      assignments[i] = grade;
      assignments_grades_count++;
      assignments_grades_sum += grade;
    }
    
     if (gradetype == 'M')//reads midterm grade
     {
       midterm = grade;
     }
  }

  
 cout << "Enter a grade for the final:" << endl;//asks user to enter grade for the final
  cin >> finalexam;//gets answer
  
  
  float Qavg = calculate(quiz_grades_sum, quiz_grades_count, 10);//puts numbers in function
  float Lavg = calculate(lab_grades_sum, lab_grades_count, 20);//puts numbers in function
  float ASavg = calculate(assignments_grades_sum, assignments_grades_count,20);//puts numbers in function
  float currentgrade = (Lavg * 0.1) + (Qavg * 0.05) + (ASavg * 0.1) +  (midterm * 0.35) + (finalexam * 0.4);//calculates current grade
    
   
  std::cout << "Labs:" << Lavg << std::endl;//prints lab grade
  std::cout << "Quizzes:" << Qavg << std::endl;//prints quiz grade
  std::cout << "Assignments:" << ASavg << std::endl;//prints assignment grade
  std::cout << "Midterm:" << midterm << std::endl;//prints midterm grade
  std::cout << "Final:" << finalexam << std::endl;//prints final exam grade
  std::cout << "Current Grade:" << currentgrade << std::endl;//prints current grade
  
return 0;//lets computer know everything is fine
}
