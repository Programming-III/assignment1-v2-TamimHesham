#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

class student:public person{
private:
    int yearLevel;
    string major;
public:
    student(int yl , string m){
    yearLevel = yl;
    major = m;
    }
    void display(){
    person p;
    }
};















#endif
