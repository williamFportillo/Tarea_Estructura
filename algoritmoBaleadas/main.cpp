#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int opc1, opc2, opc3, opc4, opc5, opc6;
    cout << "*** BALEADERA UNITEC ***" << endl;
    cout << "Comprar baleadas" << endl;
    cout << "1.Si" << endl;
    cout << "2.No" << endl;
    cin >> opc1;
    if (opc1 == 1) {
        cout << "*** ESPECIALIDADES ***" << endl;
        cout << "1. Sencilla" << endl;
        cout << "2. con Huevo" << endl;
        cout << "3. con Pollo" << endl;
        cin >> opc2;
        if (opc2 == 1) {
            cout << "Con mantequilla" << endl;
            cout << "1.Si" << endl;
            cout << "2.No" << endl;
            cin >> opc3;
            if (opc3 == 1) {
                cout << "Serian 10 lempiras!" << endl;
                cout << "GRACIAS POR SU COMPRA!" << endl;
            } else {
                cout << "Serian 8 lempiras!" << endl;
                cout << "GRACIAS POR SU COMPRA!" << endl;
            }
        } else if (opc2 == 2) {
            cout << "Queres agregarle chorizo al huevo?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cin >> opc4;
            if (opc4 == 1) {
                cout << "Serian 18 lempiras!" << endl;
                cout << "GRACIAS POR SU COMPRA!" << endl;
            } else {
                cout << "Serian 15 lempiras!" << endl;
                cout << "GRACIAS POR SU COMPRA!" << endl;
            }
        } else if (opc2 == 3) {
            cout << "Algo de tomar?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cin >> opc5;
            if (opc5 == 1) {
                cout << "1.Pepsi" << endl;
                cout << "2.Horchata" << endl;
                cin >> opc6;
                if (opc6 = 1) {
                    cout << "Serian 35 lempiras" << endl;
                    cout << "GRACIAS POR SU COMPRA!" << endl;
                } else {
                    cout << "Serian 38 lempiras con la horchata";
                    cout << "GRACIAS POR SU COMPRA!" << endl;
                }
            } else {
                cout << "Serian 20 lempiras!" << endl;
                cout << "GRACIAS POR SU COMPRA!" << endl;
            }
        }
    } else {
        cout << "Compra baleadas man!" << endl;
    }
    getch();
}