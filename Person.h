#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class person{
private:
string name;
int id;

public:
person(string n,string i){
name = n;
id = i;
}
void display(){
cout<<"name: "<<name<<"id: "<<id<<endl;
};









#endif
