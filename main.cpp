#include <iostream>
#include <limits>
#include "compare.h"

using namespace compare;

void clearStream();

int main(){
    vector<student> classroom;
    string input, msg = "";
    int inputValue;

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

            classroom.push_back(newStudent(input,inputValue));
            msg = "\n" + input + " was added with a grade of " + to_string(inputValue);

        }else if(input == "remove"){
            clearStream();
            cout << "\nEnter student name: ";
            getline(cin, input);
            if(findStudent(input,classroom).name != "Not Found"){
                msg = "\nRemoved " + input + " from classroom.";
                for(int i = 0; i < classroom.size(); i++){
                    if(input == classroom.at(i).name){
                        classroom.erase(classroom.begin()+i);
                    }
                    break;
                }
            }else{
                msg = "\nERROR: student " + input + " not found";
            }
        }else if(input == "change"){

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