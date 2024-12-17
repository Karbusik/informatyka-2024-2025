#include <iostream>
using namespace std;
int main() {
int wiek;
 cout << "podaj swoj wiek: ";
 cin >> wiek; 
if (wiek >= 0 && wiek <= 12) {
        cout << "twoja kategoria wiekowa: dziecko" << endl;
    }
 else if (wiek >= 13 && wiek <= 17) {
        cout << "twoja kategoria wiekowa: nastolatek" << endl;
    }
  else if (wiek >= 18 && wiek <= 64) {
        cout << "twoja kategoria wiekowa: dorosly" << endl;
    }
   else if (wiek >= 65 && wiek <= 120){
        cout << "twoja kategoria wiekowa:Senior" << endl;
    }
else if (wiek >= 120 && wiek <= 100000){
        cout << "podales zla wartosc" << endl;
    }










}
