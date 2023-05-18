#include<iostream>
using namespace std;
class student{
    char name[20],branch[20],subject[20];
    int roll,semester;
    public:
    student();
    ~student();
    void read();
    void display();
};
student::student()
{
    cout<<"This is constructor"<<endl;
}

void student::read()
{
    cout<<"\n Enter the student name:";
    cin>>name;
    cout<<"\n Enter the branch of students:";
    cin>>branch;
    cout<<"\n Enter the subject:";
    cin>>subject;
    cout<<"\n Enter the rollno of student:";
    cin>>roll;
    cout<<"\n Enter the semester of student:";
    cin>>semester;
    cout<<endl;
}

void student::display()
{
    cout<<"This is the details of the student"<<endl;
    cout<<"student name:"<<name<<endl;
    cout<<"student branch:"<<branch<<endl;
    cout<<"student subject:"<<subject<<endl;
    cout<<"student rollno:"<<roll<<endl;
    cout<<"student semester:"<<semester<<endl;
}

student::~student(){
    cout<<"student details is closed:";
}

int main(){
    student p;
    p.read();
    p.display();
    return 0;
}