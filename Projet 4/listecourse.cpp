#include <iostream>
#include "listecourse.h"

using namespace std;

listecourse::listecourse() {}

void listecourse::addProduit(produit A) {
	liste.push_back(A);
}