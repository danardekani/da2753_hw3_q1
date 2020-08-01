#include <iostream>
using namespace std;

int main() {
    double item1, item2, taxRate, basePrice, priceAfterDiscounts, totalPrice, halfOff, clubDiscount;
    char clubCard;

    cout << "Enter price of first item: ";
    cin >> item1;
    cout << "Enter price of second item: ";
    cin >> item2;
    cout << "Does customer have a club card/ (Y/N): ";
    cin >> clubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: " ;
    cin >> taxRate;

    //Find cheapest item and apply 50% off
    if (item1 < item2)
    {
        halfOff = item1 * .5;
    } else
        halfOff = item2 * .5;

    //Price of item 1 + item 2
    basePrice = item1 + item2;

    //Club Member? (yes or no)
    if (clubCard == 'Y' || clubCard == 'y')
    {
        clubDiscount = basePrice * .09;
    }

    // half off and club discount applied to base price
    priceAfterDiscounts = basePrice - halfOff - clubDiscount;

    //Calculate total tax burden in dollars and cents. Add to total price.
//    taxRate = taxRate / 100;
//    totalTax = priceAfterDiscounts * taxRate;

    //Price after discounts +  total tax
    totalPrice = priceAfterDiscounts * (1 + taxRate / 100);

    cout << "Base price: " << basePrice << endl;
    cout << "Price after discounts: " << priceAfterDiscounts << endl;
    cout << "Total price: " << totalPrice << endl;

    return 0;
}


//clubCard, noClubCard- (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”)
//taxRate- (User enters the percentage as a number; for example they enter 8.25 if the tax rate is 8.25%)
//basePrice- total price before discounts and taxes
//priceAfterDiscounts- price after BOGO and memebers discount, if applicable
//totalPrice- total cost after all discounts and taxes have been applied