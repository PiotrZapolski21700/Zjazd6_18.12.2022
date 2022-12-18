#include <iostream>
using namespace std;

int main() {

    string students[6];
    int itgrades[6];
    int mathgrades[6];
    int biologygrades[6];
    int polishgrades[6];

    //i as student id
    for(int i=0; i<6; i++){
        cout << "Podaj imie ucznia nr " << i+1 << ":";
        cin >> students[i];

        cout << endl << "Podaj ocene z informatyki: ";
        cin >> itgrades[i];

        cout << endl << "Podaj ocene z matematyki: ";
        cin >> mathgrades[i];

        cout << endl << "Podaj ocene z biologi: ";
        cin >> biologygrades[i];

        cout << endl << "Podaj ocene z j.Polskiego: ";
        cin >> polishgrades[i];

    }



    cout << "Wybierz ucznia:" << endl << "==================" << endl;

    for(int i=0; i<6; i++){
        cout << i+1 << ". " << students[i] << endl;
    }
    cout << "7. Wyjscie" << endl;

    int student = 0;
    int operation = 0;

    while(student != 7){
        cin >> student;

        if(student!=1 && student!=2 && student!=3 && student!=4 && student!=5 && student!=6 && student!=7){
            cout << "Nie ma takiego ucznia!";
        }
        else{
            while(operation != 6){
                cout << endl << students[student-1] << endl;
                cout << "Wybierz przedmiot: " << endl << "==================" << endl;

                cout  << "1. Informatyka" << endl  << "2. Matematyka" << endl  << "3. Biologia" << endl  << "4. J.Polski" << endl  << "5. Srednia" << endl  << "6. Wyjdz" << endl;

                cin >> operation;

                switch(operation){
                    case 1:
                        cout << "Informatyka - " << itgrades[student-1];
                        break;
                    case 2:
                        cout << "Matematyka - " << mathgrades[student-1];
                        break;
                    case 3:
                        cout << "Biologia - " << biologygrades[student-1];
                        break;
                    case 4:
                        cout << "J.Polski - " << polishgrades[student-1];
                        break;
                    case 5:
                        cout << "Srednia - " << (itgrades[student-1] + mathgrades[student-1] + biologygrades[student-1] + polishgrades[student-1]) / 4;
                        break;
                    case 6:
                        break;
                    default:
                        cout << "Nieprawidlowy numer przedmiotu!";
                }
            }
        }
    }


    return 0;
}