#include <iostream>
#include <limits>
#include "grades.h"

using namespace std;
using namespace grading;

void clearStream();

int main(){
    vector<string> students;
    vector<int> grades;
    string input = "", msg = "";
    int inputValue, index;

    while(input != "stop"){
        cout << "\nMAIN MENU" << endl
        << "\"add\" - add new students" << endl
        << "\"remove\" - remove students" << endl
        << "\"change\" - change a student's grade" << endl
        << "\"show\" - prints all students" << endl
        << "\"average\" - prints average grade" << endl
        << "\"highest\" - prints student with highest grade" << endl
        << "\"lowest\" - prints student with lowest grade" << endl
        << "\"aboveavg\" - prints every student above average grade" << endl
        << "\"compare\" - compares two student's grades" << endl
        << "\"stop\" - exits the program" << endl
        << msg << "\ninput: ";
        cin >> input;
        msg = "";

        if(input == "add"){
            clearStream();
            cout << "\nEnter student name: ";
            getline(cin, input);
            cout << "\nEnter grade (0-100): ";
            while(!(cin >> inputValue)){
                cout << "\nERROR: wrong value, try again: ";
                clearStream();
            }

            if(inputValue > 100)inputValue = 100;
            if(inputValue < 0)inputValue = 0;

            students.push_back(input);
            grades.push_back(inputValue);

            msg = "\n" + input + " was added with a grade of " + to_string(inputValue);

        }else if(input == "remove"){
            clearStream();
            cout << "\nEnter student name: ";
            getline(cin, input);
            index = findStudent(input,students);
            if(index != -1){
                msg = "\nRemoved " + input + " from classroom.";
                removeStudent(index,students,grades);
            }else{
                msg = "\nERROR: student " + input + " not found";
            }

        }else if(input == "change"){
            clearStream();
            cout << "\nEnter student name: ";
            getline(cin, input);
            index = findStudent(input,students);
            if(index != -1){
                cout << "\nEnter grade (0-100): ";
                while(!(cin >> inputValue)){
                    cout << "\nERROR: wrong value, try again: ";
                    clearStream();
                }

                if(inputValue > 100)inputValue = 100;
                if(inputValue < 0)inputValue = 0;

                changeGrade(index,inputValue,grades);

                msg = "\n" + input + " had their grade changed to " + to_string(inputValue);
            }else{
                msg = "\nERROR: student " + input + " not found";
            }

        }else if(input == "show"){
            for(int i = 0; i < students.size(); i++){
                printStudent(students.at(i), students, grades);
            }
        }else if(input == "average"){

        }else if(input == "highest"){

        }else if(input == "lowest"){

        }else if(input == "aboveavg"){

        }else if(input == "compare"){

        }else if(input == "stop"){

        }else{
            msg = "\nERROR: unrecognized option";
        }

        clearStream();
    }

    return 0;
}

void clearStream(){ //reject the rest of the inputs
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    cin.clear();
}