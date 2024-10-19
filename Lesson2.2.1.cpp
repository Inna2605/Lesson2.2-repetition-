/*Користувач вводить з клавіатури відстань до аеропорту і час, за який потрібно доїхати. 
Обчислити швидкість, з якою йому потрібно їхати.*/

#include<iostream>
using namespace std;
int main() {
	float S, V, T;
	cout << "Vvedite vidstan i chas: ";
	cin >> S >> T;
	V = S / T;
	cout << "\nsvidkist = " << V << endl;
}