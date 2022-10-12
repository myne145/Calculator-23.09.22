#include <iostream>
#include <cmath>

using namespace std;

double calculator(double x, double y, int i) {
    double result = 0;
    switch (i) {
        case 1:
            result = x * y;
            break;
        case 2:
            result = x + y;
            break;
        case 3:
            result = x - y;
            break;
        case 4:
            if(y == 0) {
                std::cout << "Nie mozna dzielic przez 0" << std::endl;
                return -1;
            }
            result = x / y;
            break;
        case 5:
            result = pow(x, y);
            break;
        case 6:
            int silnia = 1;
            for(int i = 1; i <= x; i++)
                silnia = silnia * i;
            result = silnia;
    }
    return result;
}

int init() {
    cout << "1 - mnozenie, 2 - dodawanie, 3 - odejmowanie, 4 -dzielenie, 5 - potegowanie, 6 - silnia, 10 - zakonczenie programu" << endl;
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> z;
    if(z >= 1 && z <= 5) {
        cin >> x;
        cin >> y;
        cout << calculator(x, y ,z) << endl;
        init();
    } else if(z == 10) {
        return 0;
    } else {
        cin >> x;
        cout << calculator(x, -1 ,z) << endl;
        init();
    }
}

int main() {
    init();
    /*
     * napisać skrypt z wykorzystaniem pętli najprościej jak się da
     * 1.uzytkownik naciskajac klawisz zakancza program że mogę wybrać dodawania, odejmowanie i zakończenie programu, trzeba zabezpieczyć
     * 2. sprawdzenie czy numer jest peselem
     */

    return 0;
}
