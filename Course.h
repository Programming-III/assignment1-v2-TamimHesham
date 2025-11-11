#ifndef COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class course{
private:
    string courseCode;
    string courseName;
    int maxStudent;
    Student* students;
    int currentStudents;
public:
    course(string cc,string cn,int ms,Student* s,int cs){
   courseCode = cc;
   courseName = cn;
   maxStudent = ms;
   students = s;
   currentStudents = cs;
    }
~course(){
}

 addStudents(const student& s){
 if(currentStudents<maxStudents){
    currentStudents++;
 }
 else{
    cout<<"cannot add students. limit reached!"<<endl;
 }
 }
 voidDisplayCourseInfo(){
 cout<<"course code: "<<cc<<"course name:"<<cn<<"max students :"<<ms<<"currently enrolled: "<<cs<<endl;}

   };


#endif
