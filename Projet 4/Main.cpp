#include <iostream>
#include "listecourse.h"

using namespace std;

int main(void) {
	listecourse L = listecourse();
	char name = 'lait';
	int prix = 12;
	int quantité = 1;
	produit P = produit(name, prix, quantité);
	L.addProduit(P);
	for (int i = 0; i < L.liste.size(); i++) {
		cout << L.liste[i].name << endl;
	}
	return 0;
}