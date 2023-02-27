#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    char dob[11];
    char branch[20];
    int marks;
};
int main()
{
    student s;
    cout<<"Enter full name = ";
    cin.get(s.name,50);
    cout<<"Enter roll no = ";
    cin>>s.roll;
    cout<<"Enter date of birth= ";
    cin>> s.dob;
    cout<<"Enter Branch = ";
    cin>>s.branch;
    cout<<"Enter the marks = ";
    cin>>s.marks;

    cout<<"\nDisplaying information "<<endl;
    cout<<"Name = "<<s.name<<endl;
    cout<<"Roll = "<<s.roll<<endl;
    cout<<"DOB = "<<s.dob<<endl;
    cout<<"Branch = "<<s.branch<<endl;
    cout<<"Marks = "<<s.marks;
    return 0;
}
