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
    
    int student = 0;
    int operation;
    double average;

    while(student != 7){
        cout << "Wybierz ucznia:" << endl << "==================" << endl;

        for(int i=0; i<6; i++){
            cout << i+1 << ". " << students[i] << endl;
        }
        cout << "7. Wyjscie" << endl;
        
        cin >> student;

        if(student!=1 && student!=2 && student!=3 && student!=4 && student!=5 && student!=6 && student!=7){
            cout << "Nie ma takiego ucznia!";
        }
        else if(student == 7){
            cout << "Do widzenia";
        }
        else{
            cout << "Wybierz przedmiot: " << endl << "==================" << endl;

            cout  << "1. Informatyka" << endl  << "2. Matematyka" << endl  << "3. Biologia" << endl  << "4. J.Polski" << endl  << "5. Srednia" << endl;

            cin >> operation;

            switch(operation){
                case 1:
                    cout << "Uczen - " << students[student-1] << " Ocena z informatyki: " << itgrades[student-1] << endl;
                    break;
                case 2:
                    cout << "Uczen - " << students[student-1] << " Ocena z matematyki: " << mathgrades[student-1] << endl;
                    break;
                case 3:
                    cout << "Uczen - " << students[student-1] << " Ocena z biologii: " << biologygrades[student-1] << endl;
                     break;
                case 4:
                    cout << "Uczen - " << students[student-1] << " Ocena z j.polskiego: " << polishgrades[student-1] << endl;
                    break;
                case 5:
                    average = ((double)itgrades[student-1] + (double)mathgrades[student-1] + (double)biologygrades[student-1] + (double)polishgrades[student-1]) / 4;
                    cout << "Uczen - " << students[student-1] << " Srednia: " << average << endl;
                    break;
                default:
                    cout << "Nieprawidlowy numer przedmiotu!";
            }
        }
    }

    return 0;
}
