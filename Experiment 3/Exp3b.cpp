#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string fatherName;
    string phoneNumber;
    int rollNo;
    string dateOfBirth;
    int semester;
    string email;
    string addr;
public:
    void addStudent() {
        cout << "\nEnter student name: ";
        cin >> name;
        cout << "Enter father's name: ";
        cin >> fatherName;
        cout << "Enter contact number: ";
        cin >> phoneNumber;
        cout << "Enter date of birth (DD/MM/YYYY): ";
        cin >> dateOfBirth;
        cout << "Enter email: ";
        cin >> email;
        cout << "Enter address: ";
        cin >> addr;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter semester: ";
        cin >> semester;
    }
    
    void updateStudent() {
        cout << "\nEnter updated student name: ";
        cin >> name;
        cout << "Enter updated father's name: ";
        cin >> fatherName;
        cout << "Enter updated contact number: ";
        cin >> phoneNumber;
        cout << "Enter updated date of birth (DD/MM/YYYY): ";
        cin >> dateOfBirth;
        cout << "Enter updated email: ";
        cin >> email;
        cout << "Enter updated address: ";
        cin >> addr;
        cout << "Enter updated semester: ";
        cin >> semester;
    }
    
    void displayStudent() {
        cout << "\nName: " << name << endl;
        cout << "Father's Name: " << fatherName << endl;
        cout << "Contact Number: " << phoneNumber << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
        cout << "Email: " << email << endl;
        cout << "Address: " << addr << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Semester: " << semester << endl;
    }
    
    int getRollNo() {
        return rollNo;
    }
};

int main() {
    Student students[100]; // maximum of 100 students
    int count = 0; // number of students currently in the system
    int choice, rollNo;
    
    do {
        cout << "\n\t\tModel Institute of Engineering" << endl;
        cout << "\n___________________" << endl;
        cout << "\n1. Add student" << endl;
        cout << "2. Update student" << endl;
        cout << "3. Delete student" << endl;
        cout << "4. Display all students" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                if (count < 100) {
                    students[count].addStudent();
                    count++;
                    cout << "\nStudent added successfully." << endl;
                } else {
                    cout << "\nError: Maximum number of students reached." << endl;
                }
                break;
                
            case 2:
                cout << "\nEnter roll number of the student to update: ";
                cin >> rollNo;
                for (int i = 0; i < count; i++) {
                    if (students[i].getRollNo() == rollNo) {
                        students[i].updateStudent();
                        cout << "\nStudent information updated successfully." << endl;
                        break;
                    }
                }
                break;
                
            case 3:
            cout << "\nEnter roll number of the student to delete: ";
            cin >> rollNo;
            for (int i = 0; i < count; i++) {
                if (students[i].getRollNo() == rollNo) {
                    for (int j = i; j < count - 1; j++) {
                        students[j] = students[j + 1];
                    }
                    count--;
                    cout << "\nStudent deleted successfully." << endl;
                    break;
                } else if (i == count - 1) {
                    cout << "\nError: Student not found." << endl;
                }
            }
            break;
            
        case 4:
            if (count > 0) {
                cout << "\nList of students:" << endl;
                for (int i = 0; i < count; i++) {
                    students[i].displayStudent();
                }
            } else {
                cout << "\nError: No students in the system." << endl;
            }
            break;
            
        case 5:
            cout << "\nGoodbye!" << endl;
            break;
            
        default:
            cout << "\nInvalid choice. Please try again." << endl;
    }
} while (choice != 5);

return 0;
}
