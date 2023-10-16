//
// Created by Alex on 13.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // calculates total cost by price and quantity
    // beecrowd problem 1038 https://www.beecrowd.com.br/judge/en/problems/view/1038

    int item_code, quantity;
    const double price_item_1 = 4.00;
    const double price_item_2 = 4.50;
    const double price_item_3 = 5.00;
    const double price_item_4 = 2.00;;
    const double price_item_5 = 1.50;

    cin >> item_code >> quantity;

    if (item_code == 1)
        printf("Total: R$ %.2f\n", quantity * price_item_1);
    else if (item_code == 2)
        printf("Total: R$ %.2f\n", quantity * price_item_2);
    else if (item_code == 3)
        printf("Total: R$ %.2f\n", quantity * price_item_3);
    else if (item_code == 4)
        printf("Total: R$ %.2f\n", quantity * price_item_4);
    else if (item_code == 5)
        printf("Total: R$ %.2f\n", quantity * price_item_5);

    return 0;
}
