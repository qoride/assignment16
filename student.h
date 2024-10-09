#include <string>
#include <vector>

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

student findStudent(string studentName, vector<student> classRoom){
    for(int i = 0; i < classRoom.size(); i++){
        if(classRoom.at(i).name == studentName)return classRoom.at(i);
    }
    return newStudent("Not Found");
}