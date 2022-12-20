#include <iostream>
using namespace std;

int main() {

    string word;
    string concatenatedWord;
    int n;
    
    cout << "Podaj ciag znakow do konkatenacji: " << endl;
    cin >> word;
    cout << "Podaj ilosc konkatenacji: " << endl;
    cin >> n;

    //concatenation of string
    for(int i=0; i<n; i++){
        concatenatedWord += word;
    }
    
    cout << "Wynik konkatenacji '" << word << "' " << n << " razy:"<< endl << "=========================" << endl << concatenatedWord ; 

    return 0;
}