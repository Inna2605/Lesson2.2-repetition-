/*Користувач вводить з клавіатури час початку і час завершення використання скутера (години, хвилини та секунди). 
Порахувати вартість подорожі, якщо вартість хвилини — 2 гривні.*/

#include<iostream>
using namespace std;
int main() {
	int Hp = 0, Mp = 0, Sp = 0, Hk = 0, Mk = 0, Sk = 0, V = 0;
	cout << "Vvedite chas pochatky(godunu hvulunu sekyndu): ";
	cin >> Hp >> Mp >> Sp;
	cout << "Vvedite chas zakinchenna(godunu hvulunu sekyndu): ";
	cin >> Hk >> Mk >> Sk;
	if ((Sk - Sp) != 0) {
		V = ((((Hk - Hp) * 3600) + ((Mk - Mp) * 60) + (Sk - Sp)) * 200) / 60;
	}
	cout << "Vartist podorozi: " << V / 100 << " grn " << V - ((V/100) * 100) << " kop\n";
}