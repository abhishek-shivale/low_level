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

using namespace std;

int main() {

    string student_name, student_roll_no, student_grade, student_section, student_subject;

    cout << "Enter the name of the student: ";
    cin >> student_name;
    cout << "Enter the roll number of the student: ";
    cin >> student_roll_no;
    cout << "Enter the grade of the student: ";
    cin >> student_grade;
    cout << "Enter the section of the student: ";
    cin >> student_section;
    cout << "Enter the subject of the student: ";
    cin >> student_subject;

    cout << student_name << endl;

}