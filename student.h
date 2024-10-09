#include <string>
#include <vector>

using namespace std;

namespace students{
    struct student{
        string name;
        int grade;
    };

    struct student newStudent(string studentName = "John Doe", int studentGrade = 0);

    student findStudent(string studentName, vector<student> classRoom);
}