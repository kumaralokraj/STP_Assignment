// Write a program to ask user about the cost price and selling 
// price banana per dozen. Calculate the profit or loss earned 
// upon selling 25 bananas.
#include<iostream>
using namespace std;

int main() {
    float costPerDozen, sellPerDozen;
    cout << "Enter cost price per dozen bananas: ";
    cin >> costPerDozen;

    cout << "Enter selling price per dozen bananas: ";
    cin >> sellPerDozen;
    float costPerBanana = costPerDozen / 12.0;
    float sellPerBanana = sellPerDozen / 12.0;

    float totalCost = costPerBanana * 25;
    float totalSell = sellPerBanana * 25;

    float profitOrLoss = totalSell - totalCost;

    if (profitOrLoss > 0) {
        cout << "Profit earned on selling 25 bananas: Rs " << profitOrLoss << endl;
    } else if (profitOrLoss < 0) {
        cout << "Loss incurred on selling 25 bananas: Rs " << -profitOrLoss << endl;
    } else {
        cout << "No profit, no loss on selling 25 bananas." << endl;
    }

    return 0;
}
