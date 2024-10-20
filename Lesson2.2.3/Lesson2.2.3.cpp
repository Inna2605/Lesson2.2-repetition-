/*Користувач вводить з клавіатури відстань, витрату бензину на 100 км і вартість трьох видів бензину.
Вивести на екран порівняльну таблицю з вартістю подорожі на різних видах палива.*/

#include<iostream>
using namespace std;
int main() {
	float S, Vt, B1, B2, B3, P1, P2, P3;
	cout << "Vvedite vidstan: ";
	cin >> S;
	cout << "Vvedite vutraty benzuny na 100 km: ";
	cin >> Vt;
	cout << "Vvedite vartist troh vudiv benzuny : ";
	cin >> B1 >> B2 >> B3;
	P1 = ((S * Vt) / 100) * B1;
	P2 = ((S * Vt) / 100) * B2;
	P3 = ((S * Vt) / 100) * B3;
	cout << "\nVartist podorozi na benzuni B1: " << P1
		<< "grn\nVartist podorozi na benzuni B2: " << P2
		<< "grn\nVartist podorozi na benzuni B3: " << P3 << "grn\n";
}
