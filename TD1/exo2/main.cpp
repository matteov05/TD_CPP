#include <iostream>
#include "complex.h"

using namespace std;

int main() {


    //Test de get
    Complex2D z(3.0, 5.0); 

    cout << "Reel : " << z.get_reel() << endl;
    cout << "Imaginaire : " << z.get_imaginaire() << endl;

    //Test de set
    z.set_reel(10.0);
    z.set_imaginaire(20.0);

    cout << "Reel : " << z.get_reel() << endl;
    cout << "Imaginaire : " << z.get_imaginaire() << endl;

    //Test de l'addition
    Complex2D z1(3.0, 5.0);
    Complex2D z2(2.0, 2.0);
    Complex2D z3 = z1 + z2;
    cout << z3.get_reel() << " + " << z3.get_imaginaire() << "i" << endl;

    //Test de la soustraction
    Complex2D z4 = z1 - z2;
    cout << z4.get_reel() << " + " << z4.get_imaginaire() << "i" << endl;

    //Test de la multiplication
    Complex2D z5 = z1 * z2;
    cout << z5.get_reel() << " + " << z5.get_imaginaire() << "i" << endl;

    //Test de la division
    Complex2D z6 = z1 / z2;
    cout << z6.get_reel() << " + " << z6.get_imaginaire() << "i" << endl;

    //Test de l'opérateur <
    if (z1 < z2) {
        cout << "z1 est plus petit que z2" << endl;
    } else {
        cout << "z1 n'est pas plus petit que z2" << endl;
    }

    //Test de l'opérateur >
    if (z1 > z2) {
        cout << "z1 est plus grand que z2" << endl;
    } else {
        cout << "z1 n'est pas plus grand que z2" << endl;
    }

	return 0;
}
