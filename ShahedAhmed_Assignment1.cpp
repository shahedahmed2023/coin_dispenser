// Name: Shahed Ahmed
// Date : 1/26/2023
// Assignment1

#include <iostream>

using namespace std;

int main()
{

// Declare Variable
double dollar;
int quarters, dime, nickel, pennies, cents, total;
int Machine = 0;


// Asking user for input
cout << "Enter 1 to covert Cash to Coins" <<endl;
cout << "Enter 2 to convert Coins to Cash" <<endl;
cin >> Machine;


// Run one statement by user input
switch (Machine)

{
    case 1 :
            // Asking user for input
            cout << "Enter the dollar amount Exchanged in coins" << endl;
            cin >> dollar;

            // No negative number allowed
            if (dollar >= 0)
            {

            // Calculate dollar
                cents = dollar * 100;
                quarters = cents / 25;
                dime = (cents % 25) / 10;
                nickel = ((cents % 25) % 10) / 5;
                pennies = ((cents % 25) % 10) % 5;

                //Display out the result
                cout << quarters <<" quarters"<<endl;
                cout << dime <<" dime" <<endl;
                cout << nickel << " nickel" <<endl;
                cout << pennies <<" pennies" <<endl;

}
            else
                cout << "invalid input";

        break;
    case 2 :
                    // Ask user for input
            cout << "Enter the number of quarters, dimes, nickels, and pennies in order" <<endl;

            cin >>quarters >>dime >>nickel >>pennies;


            //Calculate each coin
            quarters *= 25;
            dime *= 10;
            nickel *= 5;
            pennies *= 1;

            // Calculate coins and sum
            total = quarters + dime + nickel + pennies;
            dollar = total/100;
            cents = total % 100;

            //Display the result
            cout <<"$" <<dollar <<"." << cents << endl;

    break;
    // show that user input is incorrect
    default:
        cout << "invalid input" << endl;


}
cout <<" End Of Program" <<endl;



    return 0;
}
