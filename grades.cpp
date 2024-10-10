#include <vector>
#include <string>

using namespace std;

namespace grading{
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
        return highest;
    }
}