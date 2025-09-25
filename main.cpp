#include <iostream>
#include <string>
#include "include/num.h"

using namespace std;

int main() {
    string day;
    int numb;
    cin >> day >> numb;

    if (bool rez = Scary(day, numb) == 1) {
        cout << "He is afraid" << "\n";
    } else {
        cout << "Not afraid" << "\n";
    }
    
    
}