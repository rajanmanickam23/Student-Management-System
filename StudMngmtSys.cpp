#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    int rollNo;
    string department;
    float cgpa;
};

vector<Student> students;

void addStudent() {
    Student newStudent;
    cout << "Enter student name: ";
    cin >> newStudent.name;
    cout << "Enter student roll no: ";
    cin >> newStudent.rollNo;
    cout << "Enter student department: ";
    cin >> newStudent.department;
    cout << "Enter student CGPA: ";
    cin >> newStudent.cgpa;
    students.push_back(newStudent);
    cout << "Student added successfully!" << endl;
}

void deleteStudent() {
    int rollNo;
    cout << "Enter roll no of student to delete: ";
    cin >> rollNo;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == rollNo) {
            students.erase(students.begin() + i);
            cout << "Student deleted successfully!" << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

void updateStudent() {
    int rollNo;
    cout << "Enter roll no of student to update: ";
    cin >> rollNo;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == rollNo) {
            cout << "Enter new student name: ";
            cin >> students[i].name;
            cout << "Enter new student department: ";
            cin >> students[i].department;
            cout << "Enter new student CGPA: ";
            cin >> students[i].cgpa;
            cout << "Student updated successfully!" << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

void displayStudents() {
    cout << "Student List:" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Roll No: " << students[i].rollNo << endl;
        cout << "Department: " << students[i].department << endl;
        cout << "CGPA: " << students[i].cgpa << endl;
        cout << endl;
    }
}

void searchStudent() {
    int rollNo;
    cout << "Enter roll no of student to search: ";
    cin >> rollNo;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == rollNo) {
            cout << "Name: " << students[i].name << endl;
            cout << "Roll No: " << students[i].rollNo << endl;
            cout << "Department: " << students[i].department << endl;
            cout << "CGPA: " << students[i].cgpa << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "Student Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Delete Student" << endl;
        cout << "3. Update Student" << endl;
        cout << "4. Display Students" << endl;
        cout << "5. Search Student" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                deleteStudent();
                break;
            case 3:
                updateStudent();
                break;
            case 4:
                displayStudents();
                break;
            case 5:
                searchStudent();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}

