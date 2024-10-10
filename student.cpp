#include <string>
#include <vector>

using namespace std;

namespace students{
    int findStudent(string studentName, vector<string> classroom){
        for(int i = 0; i < classroom.size(); i++){
            if(classroom.at(i) == studentName)return i;
        }
        return -1;
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
}