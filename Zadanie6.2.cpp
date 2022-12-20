#include <iostream>
#include <vector>
using namespace std;

struct student {
        string name;
        int itgrade;
        int mathgrade;
        int biologygrade;
        int polishgrade;
        double average;
};

int main() {

    vector<student> students(6);

    //i as student id
    for(int i=0; i<6; i++){
        cout << "Podaj imie ucznia nr " << i+1 << ":";
        cin >> students[i].name;

        cout << endl << "Podaj ocene z informatyki: ";
        cin >> students[i].itgrade;

        cout << endl << "Podaj ocene z matematyki: ";
        cin >> students[i].mathgrade;

        cout << endl << "Podaj ocene z biologi: ";
        cin >> students[i].biologygrade;

        cout << endl << "Podaj ocene z j.Polskiego: ";
        cin >> students[i].polishgrade;
        
        students[i].average = ((double)students[i].itgrade + (double)students[i].mathgrade + (double)students[i].biologygrade + (double)students[i].polishgrade) / 4;
    }
    
    int studentnum = 0;
    int operation;

    while(studentnum != 7){
        cout << "Wybierz ucznia:" << endl << "==================" << endl;

        for(int i=0; i<6; i++){
            cout << i+1 << ". " << students[i].name << endl;
        }
        cout << "7. Wyjscie" << endl;
        
        cin >> studentnum;

        if(studentnum!=1 && studentnum!=2 && studentnum!=3 && studentnum!=4 && studentnum!=5 && studentnum!=6 && studentnum!=7){
            cout << "Nie ma takiego ucznia!";
        }
        else if(studentnum == 7){
            cout << "Do widzenia";
        }
        else{
            cout << "Wybierz przedmiot: " << endl << "==================" << endl;

            cout  << "1. Informatyka" << endl  << "2. Matematyka" << endl  << "3. Biologia" << endl  << "4. J.Polski" << endl  << "5. Srednia" << endl;

            cin >> operation;

            switch(operation){
                case 1:
                    cout << "Uczen - " << students[studentnum-1].name << " Ocena z informatyki: " << students[studentnum-1].itgrade << endl;
                    break;
                case 2:
                    cout << "Uczen - " << students[studentnum-1].name << " Ocena z matematyki: " << students[studentnum-1].mathgrade << endl;
                    break;
                case 3:
                    cout << "Uczen - " << students[studentnum-1].name << " Ocena z biologii: " << students[studentnum-1].biologygrade << endl;
                     break;
                case 4:
                    cout << "Uczen - " << students[studentnum-1].name << " Ocena z j.polskiego: " << students[studentnum-1].polishgrade << endl;
                    break;
                case 5:
                    cout << "Uczen - " << students[studentnum-1].name << " Srednia: " << students[studentnum-1].average << endl;
                    break;
                default:
                    cout << "Nieprawidlowy numer przedmiotu!" << endl;
            }
        }
    }

    return 0;
}
