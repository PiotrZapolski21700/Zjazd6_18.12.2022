#include <iostream>
using namespace std;

int main() {

    int n;
    int count = 0;

    cout << "Podaj liczbe calkowita:";
    cin >> n;

    for(int i=0; i<=n ; i++){
        if(i%5==0 && i%3!=0){
            count++;
        }
    }

    cout << "Jest " << count << " liczb nie wiekszych od " << n << ", podzielnych przez 5 ale niepodzielnych przez 3.";

    return 0;
}
