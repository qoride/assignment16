#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

namespace grading{
    int findStudent(string studentName, vector<string> classroom);

    void printStudent(string studentName, vector<string> classroom, vector<int> grades);

    void removeStudent(int index, vector<string> &classroom, vector<int> &grades);

    void changeGrade(int index, int newGrade, vector<int> &grades);

    int averageGrade(vector<int> grades);

    int lowestGrade(vector<string> classroom, vector<int> grades);

    int highestGrade(vector<string> classroom, vector<int> grades);
    
    void aboveAverage(vector<string> students, vector<int> grades);

    void compareStudents(string student1, string student2, vector<string> classroom, vector<int> grades);
}