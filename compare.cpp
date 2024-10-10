#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

namespace compare{
    void printStudent(string studentName, int grade){
        cout << "\nStudent: " << studentName
        << "\nGrade: " << grade << endl;
    }

    void aboveAverage(vector<string> students, vector<int> grades, int average){
        for(int i = 0; i < students.size(); i++){
            if(grades.at(i) > average){
                printStudent(students.at(i),grades.at(i));
            }
        }
    }

    void compareStudents(string student1, int grade1, string student2, int grade2){
        printStudent(student1,grade1);
        printStudent(student2,grade2);

        bool higher = (grade1 > grade2)?true:false;
        cout << student1 << "has a " << ((higher)?"higher":"lower") << " grade than " << student2
        << " by a margin of " << abs(grade1 - grade2) << "." << endl;
    }
}