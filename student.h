#include <string>
#include <vector>

using namespace std;

namespace students{
    int findStudent(string studentName, vector<string> classroom);

    void removeStudent(int index, vector<string> &classroom, vector<int> &grades);

    void changeGrade(int index, int newGrade, vector<int> &grades);
}