#include <iostream>
using namespace std;

int choice = 0;
int bill = 0, payment = 0, change = 0, deficit = 0;

int main()
{
    cout << "--Cash Register for a Flower Shop--" << endl;
    cout << "Developed by: DJ Wayne T. Yamomo" << endl << endl;

    cout << "[ WELCOME! ]" << endl << endl;

    cout << "Meet our Newest Collection of Bouquets!" << endl;
    cout << "-------------------------------------------------------------------------" << endl << endl;

    cout << " F1: RADIANT ROSE = Php 1,250.00" << endl;
    cout << "  Delve within the classic symbolism of purity and blossom." << endl << endl;

    cout << " F2: CELESTIAL CARNATIONS = Php 550.00" << endl;
    cout << "  Bloom a shred of undying love from the tears of nature." << endl << endl;

    cout << " F3: SUCCINCT STARGAZER = Php 450.00" << endl;
    cout << "  Manifest a pint of success and abundance through a flower." << endl << endl;

    cout << " F4: ASTRAL ALSTROEMERIA = Php 350.00" << endl;
    cout << "  Emanate sense of devotion from a forged friendship." << endl << endl;

    cout << " F5: TRANSCEDENT TULIPS = Php 400.00" << endl;
    cout << "  Acquire perfection embodied into a stem of hope and nurture." << endl << endl;

    cout << " F6: DIVINE DAFFODILS = Php 650.00" << endl;
    cout << "  Revive into an halcyon place where ideals flourish into reality." << endl << endl;

    cout << " F7: CHARMING CHRYSANTHEMUMS = Php 700.00" << endl;
    cout << "  Live in a realm of longevity and optimism amidst the fray." << endl << endl;

    cout << " F8: ORNATE ORCHIDS = Php 1,000.00" << endl;
    cout << "  Refine the mind with serene saudade and longing future." << endl << endl;

    cout << "-------------------------------------------------------------------------" << endl << endl;

    cout << " | Select the Code of Your Order: F";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
        case 1:
            cout << " You ordered RADIANT ROSE worth Php 1,250.00." << endl << endl;
            cout << " Total Bill: Php 1,250.00" << endl;
            bill = 1250;
            break;

        case 2:
            cout << " You ordered CELESTIAL CARNATIONS worth Php 550.00." << endl << endl;
            cout << " Total Bill: Php 550.00" << endl;
            bill = 550;
            break;

        case 3:
            cout << " You ordered SUCCINCT STARGAZER worth Php 450.00." << endl << endl;
            cout << " Total Bill: Php 450.00" << endl;
            bill = 450;
            break;

        case 4:
            cout << " You ordered ASTRAL ALSTROEMERIA worth Php 350.00." << endl << endl;
            cout << " Total Bill: Php 350.00" << endl;
            bill = 350;
            break;

        case 5:
            cout << " You ordered TRANSCEDENT TULIPS worth Php 400.00." << endl << endl;
            cout << " Total Bill: Php 400.00" << endl;
            bill = 400;
            break;

        case 6:
            cout << " You ordered DIVINE DAFFODILS worth Php 650.00." << endl << endl;
            cout << " Total Bill: Php 650.00" << endl;
            bill = 650;
            break;

        case 7:
            cout << " You ordered CHARMING CHRYSANTHEMUMS worth Php 700.00." << endl << endl;
            cout << " Total Bill: Php 700.00" << endl;
            bill = 700;
            break;

        case 8:
            cout << " You ordered ORNATE ORCHIDS worth Php 1,000.00." << endl << endl;
            cout << " Total Bill: Php 1,000.00" << endl;
            bill = 1000;
            break;

        default:
            cout << "Wrong input. Please try once more in purchasing your order." << endl;
            cout << "Thank you very much!" << endl;
            exit(0);
    }

    cout << endl;
    cout << " | Insert Your Payment: ";
    cin >> payment;
    cout << endl;

    cout << " Received Payment: Php " << payment << ".00" << endl;

    while (payment < bill)
    {
        deficit = bill - payment;
        bill = deficit;
        cout << " The value paid is less than the amount needed." << endl;
        cout << " Deficient Amount: Php " << deficit << ".00" << endl << endl;

        cout << " | Payment for the Deficient Amount: ";
        cin >> payment;
        cout << endl;

        cout << " Received Payment: Php " << payment << ".00" << endl;

    }

    if (payment > bill)
    {
        change = payment - bill;
        cout << " Returned Change: Php " << change << ".00";
        cout << endl;
    }

    else
    {
        cout << " The value paid is exactly the amount needed for the bill.";
        cout << endl;
    }

    cout << endl;
    cout << " [TRANSACTION SUCCESSFUL!]" << endl << endl;

    cout << "Thank you for ordering in our shop. Please come again!";

    cout << endl;
	return 0;
}
