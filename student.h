#include <string>

using namespace std;

struct student{
    string name;
    int grade;
};

struct student newStudent(string studentName = "John Doe", int studentGrade = 0){
    struct student newStudent;
    newStudent.name = studentName;
    newStudent.grade = studentGrade;
    return newStudent;
}