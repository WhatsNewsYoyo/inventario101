#include <iostream>
#include "Inventory.h"

int main() {
    Inventory Inventory;

    string name = "audifonos";

    Inventory.addProduct(name, 3);
    Inventory.getProduct(name);
    return 0;
}