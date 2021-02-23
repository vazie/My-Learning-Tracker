#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float changeOwed;
    do
    {
        changeOwed = get_float("Change owed: ");
    }
    while (changeOwed < 0.001);

    // convert change owed to cents
    int cents = round(changeOwed * 100);

    // remove a quarter
    int coins = 0;
    while (cents > 24)
    {
        cents = cents - 25;
        coins = coins + 1;
    }
    
    // remove a dimes
    while (cents > 9)
    {
        cents = cents - 10;
        coins = coins + 1;
    }
    
    // remove a nickels
    while (cents > 4)
    {
        cents = cents - 5;
        coins = coins + 1;
    }
    while (cents > 0)
    {
        cents = cents - 1;
        coins = coins + 1;
    }
    printf("Coins: %i\n", coins);
    printf("Cents left: %i\n", cents);
}
