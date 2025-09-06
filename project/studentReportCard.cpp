//
// Created by Abhishek shivale on 05/09/25.
//

/*
 * Student Report Card
 * 1. take name, roll No, class/Grade, section, subject
 * 2. multiple student support
 * 3. add, update, delete student records
 * 4. display all student report card in tabular format
 * 5. search student by roll no number/name and sort percentage, name, roll number
 * 6. add csv export
 */


#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct subject {
    int maths;
    int english;
    int science;
    int history;
    int geography;
};

struct student {
    string roll_no;
    string name;
    string grade;
    string section;
    subject subject;
};

int main() {
    vector<student> students;

    char choice;

    do {
        student s;


        cout << "Enter the name of the student: ";
        cin >> s.name;
        cout << "Enter the roll number of the student: ";
        cin >> s.roll_no;
        cout << "Enter the grade of the student: ";
        cin >> s.grade;
        cout << "Enter the section of the student: ";
        cin >> s.section;

        cout << "Enter marks in Maths: ";
        cin >> s.subject.maths;
        cout << "Enter marks in English: ";
        cin >> s.subject.english;
        cout << "Enter marks in Science: ";
        cin >> s.subject.science;
        cout << "Enter marks in History: ";
        cin >> s.subject.history;
        cout << "Enter marks in Geography: ";
        cin >> s.subject.geography;

        students.push_back(s);


        cout << "Student Record added successfully!\n";
        cout << "Do you want to add another student? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\n--- Student Report Cards ---\n";
    for (auto &s: students) {
        cout << "Name: " << s.name << "\n";
        cout << "Roll No: " << s.roll_no << "\n";
        cout << "Grade: " << s.grade << "  Section: " << s.section << "\n";
        cout << "Maths: " << s.subject.maths << "\n";
        cout << "English: " << s.subject.english << "\n";
        cout << "Science: " << s.subject.science << "\n";
        cout << "History: " << s.subject.history << "\n";
        cout << "Geography: " << s.subject.geography << "\n";
        cout << "--------------------------\n";
    }

    return 0;
}
