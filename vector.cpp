#include <iostream>
#include <vector>

using namespace std;

struct Student {
    int roll;
    char section;
};

void newFunction();

int main(int argc, char *argv[]) {
    cout << "Hello World" << "\n";
    vector<int> myVector;
    int inputNumber;
    int counter = 0;
    while(inputNumber != -1) {
        cout << ++counter << "  => ";
        cin >> inputNumber;
        myVector.push_back(inputNumber);
    }
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << " ";
    }
    cout << "\n" << myVector.size() << "\n\n";
    newFunction();
    return 0;
}

void newFunction() {
    int inputNumber;
    vector<Student> newVector;
    Student S;
    int counter=0;
    while(inputNumber != -1) {
        cout << ++counter << " ROLL NUMBER  => ";
        cin >> S.roll;
        cout << counter << " SECTION  => ";
        cin >> S.section;
        newVector.push_back(S);
        cout << "\n-1 to exit any other to continue...\n";
        cin >> inputNumber;
    }
    for(int i = 0; i < newVector.size(); i++) {
        cout << newVector[i].roll << " " << newVector[i].section;
        cout << "\n";
    }
}
