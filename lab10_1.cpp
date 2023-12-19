#include<iostream>
using namespace std;

int main() {
    char grade;
    int totalStudents = 1;
    int count[5] = {0, 0, 0, 0, 0};

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
    
    do {
        cout << "Student [" << totalStudents  << "]: ";
        cin >> grade;

        if (grade == 'A') {
            count[0]++;
            totalStudents++;
        } else if (grade == 'B') {
            count[1]++;
            totalStudents++;
        } else if (grade == 'C') {
            count[2]++;
            totalStudents++;
        } else if (grade == 'D') {
            count[3]++;
            totalStudents++;
        } else if (grade == 'F') {
            count[4]++;
            totalStudents++;
        } else if (grade == '0') {
            break; 
        } else {
            cout << "Wrong input. Please input again." << endl;
        }

      

    } while (true);

    cout << "In total " << totalStudents - 1 << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4]  ;

    return 0;
}