/* Користувач вводить з клавіатури час у секундах, що минув з початку робочого дня. 
Порахувати, скільки цілих годин йому залишилося сидіти на роботі, якщо робочий день — 8 годин.*/

#include<iostream>
using namespace std;
int main() {
	int Tp, Tk;
	cout << "Vvedite chas y sek z pochatky robochogo dna: ";
	cin >> Tp;
	Tk = ((8 * 3600) - Tp) / 3600;
	cout << "\nDo kinca robochogo dna zalusulusa " << Tk << " ciluh godun\n";
}