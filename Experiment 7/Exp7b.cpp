#include <iostream>
#include <string>
using namespace std;

// Course class
class Course {
protected:
    string courseName;
    string courseCode;
public:
    Course(string name, string code) : courseName(name), courseCode(code) {}
    virtual void display() {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
    }
};

// UGCourse class derived from Course
class UGCourse : public Course {
private:
    int year;
public:
    UGCourse(string name, string code, int yr) : Course(name, code), year(yr) {}
    void display() override {
        Course::display();
        cout << "Year: " << year << endl;
    }
};

// PGCourse class derived from Course
class PGCourse : public Course {
private:
    string specialization;
public:
    PGCourse(string name, string code, string spec) : Course(name, code), specialization(spec) {}
    void display() override {
        Course::display();
        cout << "Specialization: " << specialization << endl;
    }
};

// DiplomaCourse class derived from Course
class DiplomaCourse : public Course {
private:
    string type;
public:
    DiplomaCourse(string name, string code, string t) : Course(name, code), type(t) {}
    void display() override {
        Course::display();
        cout << "Type: " << type << endl;
    }
};


int main() {
    string name, code, specialization, type;
    int year;

    // get input for UGCourse
    cout << "Enter UG course name: ";
    getline(cin, name);
    cout << "Enter UG course code: ";
    getline(cin, code);
    cout << "Enter year: ";
    cin >> year;
    UGCourse ugc(name, code, year);

    // get input for PGCourse
    cin.ignore(); // ignore the newline character left in the input stream
    cout << "Enter PG course name: ";
    getline(cin, name);
    cout << "Enter PG course code: ";
    getline(cin, code);
    cout << "Enter specialization: ";
    getline(cin, specialization);
    PGCourse pgc(name, code, specialization);

    // get input for DiplomaCourse
    cout << "Enter diploma course name: ";
    getline(cin, name);
    cout << "Enter diploma course code: ";
    getline(cin, code);
    cout << "Enter type: ";
    getline(cin, type);
    DiplomaCourse dc(name, code, type);

    // polymorphism
    Course* c1 = &ugc;
    Course* c2 = &pgc;
    Course* c3 = &dc;

    c1->display();
    c2->display();
    c3->display();

    return 0;
}