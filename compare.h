#include <iostream>
#include <cmath>
#include "grades.h"

using namespace std;

void printStudent(student s){
    cout << "\nStudent: " << s.name
    << "\nGrade: " << s.grade << endl;
}

void aboveAverage(vector<student> classRoom){
    int average = averageGrade(classRoom);
    for(int i = 0; i < classRoom.size(); i++){
        if(classRoom.at(i).grade > average){
            printStudent(classRoom.at(i));
        }
    }
}

void compareStudents(student student1, student student2){
    printStudent(student1);
    printStudent(student2);

    bool higher = (student1.grade > student2.grade)?true:false;
    cout << student1.name << "has a " << ((higher)?"higher":"lower") << " grade than " << student2.name
    << " by a margin of " << abs(student1.grade - student2.grade) << "." << endl;
}