#include<iostream>

using namespace std;

typedef struct Price{
    int banknotes;
    int coins;
} Price;


void inputPrice(Price *price) {
    cout << "banknotes" << endl;
    int banknotes;
    cin >> banknotes;
    price->banknotes = banknotes;
    cout << "coins" << endl;
    int coins;
    cin >> coins;
    price->coins = coins;

}

void printPrice(const Price price) {
    cout << "banknotes = " << price.banknotes << endl;
    cout << "coins = " << price.coins << endl;

}

int main() {
    Price price;
    inputPrice(&price);
    printPrice(price);
    free(&price);
}