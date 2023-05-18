#include <iostream>
using namespace std;

class course {
    char name[20];
    int ID;
    int credit;
public:
    course();
    ~course();
    void input();
    void display();
};

course::course() {
    cout << "\n This is constructor";
}

void course::input() {
    cout << "\n Enter the name of course: ";
    cin >> name;
    cout << "\n Enter the course id: ";
    cin >> ID;
    cout << "\n Enter the course credit: ";
    cin >> credit;
    cout << endl;
}

void course::display() {
    cout << "This is the details of the course\n" << endl;
    cout << "Course name: " << name << endl;
    cout << "Course ID: " << ID << endl;
    cout << "Credit: " << credit << endl;
}

course::~course() {
    cout << "Course details is closed";
}

int main() {
    course p;
    p.input();
    p.display();
    return 0;
}