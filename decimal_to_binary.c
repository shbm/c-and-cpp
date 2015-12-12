#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string convertBase(int x) {

    char map[] = "01";
    string converted;
    while(x) {
        converted.push_back(map[x%2]);
        x /= 2;
    }
    reverse(converted.begin(), converted.end());

    return converted;
}

int main() {
    cout << convertBase(2015);
}
