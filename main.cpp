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
    cout<<"yearLevel:"<<yl<<"major: "<<m<<endl;
    }
};

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
    };
}

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

 addStudents(const Student& s){
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


int main() {
 Student s = new student("Tamim",18,2,"cs");
    instructor i = new instructor("khaled","cs",3);
 course c = new course("dsa",102,20,4,10);
 
 c.addStudents(s);
 s.display();
 i.display();
 c.displayCourseInfo();

    return 0;
}
