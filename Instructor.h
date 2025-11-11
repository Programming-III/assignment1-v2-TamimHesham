#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class instructor:public person{
private: 
    string department;
    int experienceYears;
public:
    instructor(string d,int el){
    department = d;
    experienceLevel = el;
   void display(){
    cout<<"department: "<<d<<"experienceLevel: "<<el<<endl;
    }
    ~instructor(){
        
    }
    };
}
