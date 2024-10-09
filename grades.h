#include <string>
#include <vector>
#include "student.h"

using namespace std;

int averageGrade(vector<student> classRoom){
    int total = 0;
    for(int i = 0; i < classRoom.size(); i++){
        total += classRoom.at(i).grade;
    }
    return total/classRoom.size();
}

student lowestGrade(vector<student> classRoom){
    student lowest = classRoom.at(0);
    for(int i = 1; i < classRoom.size(); i++){
        if(classRoom.at(i).grade < lowest.grade)lowest = classRoom.at(i);
    }
    return lowest;
}

student highestGrade(vector<student> classRoom){
    student highest = classRoom.at(0);
    for(int i = 1; i < classRoom.size(); i++){
        if(classRoom.at(i).grade > highest.grade)highest = classRoom.at(i);
    }
    return highest;
}