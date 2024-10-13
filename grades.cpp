#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

namespace grading{
    int findStudent(string studentName, vector<string> classroom){
        for(int i = 0; i < classroom.size(); i++){
            if(classroom.at(i) == studentName)return i;
        }
        return -1;
    }

    void printStudent(string studentName, vector<string> classroom, vector<int> grades){
        cout << "\nStudent: " << studentName
        << "\nGrade: " << grades.at(findStudent(studentName,classroom)) << endl;
    }

    void removeStudent(int index, vector<string> &classroom, vector<int> &grades){
        if(index != -1){
            classroom.erase(classroom.begin()+index);
            grades.erase(grades.begin()+index);
        }
    }

    void changeGrade(int index, int newGrade, vector<int> &grades){
        if(index != -1){
            grades.at(index) = newGrade;
        }
    }

    int averageGrade(vector<int> grades){
        int total = 0;
        for(int i = 0; i < grades.size(); i++){
            total += grades.at(i);
        }
        return total/grades.size();
    }

    int lowestGrade(vector<string> classroom, vector<int> grades){
        int lowest = 0;
        for(int i = 1; i < classroom.size(); i++){
            if(grades.at(i) < grades.at(lowest))lowest = i;
        }
        return lowest;
    }

    int highestGrade(vector<string> classroom, vector<int> grades){
        int highest = 0;
        for(int i = 1; i < classroom.size(); i++){
            if(grades.at(i) > grades.at(highest))highest = i;
        }
        return highest;
    }

    void aboveAverage(vector<string> students, vector<int> grades){
        int average = averageGrade(grades);
        for(int i = 0; i < students.size(); i++){
            if(grades.at(i) > average){
                printStudent(students.at(i), students, grades);
            }
        }
    }

    void compareStudents(string student1, string student2, vector<string> classroom, vector<int> grades){
        printStudent(student1, classroom, grades);
        printStudent(student2,classroom, grades);

        bool higher = (grades.at(findStudent(student1, classroom)) > grades.at(findStudent(student2, classroom)))?true:false;
        cout << student1 << "has a " << ((higher)?"higher":"lower") << " grade than " << student2
        << " by a margin of " << abs(grades.at(findStudent(student1, classroom)) - grades.at(findStudent(student2, classroom))) << "." << endl;
    }
}