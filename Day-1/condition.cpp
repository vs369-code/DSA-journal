#include <iostream>
using namespace std;
int main(){
    int marks;
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade A" << "\n";
        cout << "Pass";
    }
    else if (marks >= 70) {
        cout << "Grade B" << "\n";
        cout << "Pass";

    }
    else if (marks >= 50) {
        cout << "Grade C" << "\n";
        cout << "Pass";
    }
    else if (marks >= 35) {
        cout << "Grade D" << "\n";
        cout << "Pass";

    }

    else {
        cout << "Fail" << "\n";
    }

    return 0;

}