#include <iostream>
using namespace std;

int main() {
    double item1, item2, taxRate, basePrice, priceAfterDiscounts, totalPrice, halfOff;
    char clubCard, noClubCard;

    cout << "Enter price of first item: ";
    cin >> item1;
    cout << "Enter price of second item: ";
    cin >> item2;

    if (item1 < item2)
    {
        halfOff = item1 * .5;
    } else
        halfOff = item2 * .5;
    cout << item1 << endl;
    cout << item2 << endl;
    cout << halfOff << endl;

    return 0;
}


//clubCard, noClubCard- (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”)
//taxRate- (User enters the percentage as a number; for example they enter 8.25 if the tax rate is 8.25%)
//basePrice- total price before discounts and taxes
//priceAfterDiscounts- price after BOGO and memebers discount, if applicable
//totalPrice- total cost after all discounts and taxes have been applied