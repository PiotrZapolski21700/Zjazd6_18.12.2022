#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct student {
        int index;
        string name;
        string surname;
        
        bool operator<(const student& a) const
        {
            return index < a.index;
        }
};

int main() {
    int n;
    
    cout << "Podaj liczbe studentow do wprowadzenia: " << endl;
    cin >> n;

    vector<student> students(n);

    for (int i = 0; i < n; i++) {
        cout << endl << "Podaj index studenta " << i+1 << ":";
        cin >> students[i].index;
        cout << endl  << "Podaj imie studenta " << i+1 << ":";
        cin >> students[i].name;
        cout << endl  << "Podaj nazwisko studenta " << i+1 << ":";
        cin >> students[i].surname;
    }
    
    cout << endl << "Uczniowie w kolejnosci wprowadzenia: " << endl << "===========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << students[i].index << "\t" << students[i].name << "\t" << students[i].surname << endl;
    }
    
    sort(students.begin(), students.end());
    
    cout << endl <<"Uczniowie posortowani według indeksow: " << endl << "===========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << students[i].index << "\t" << students[i].name << "\t" << students[i].surname << endl;
    }

    return 0;
}