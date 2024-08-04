// Prints the minimum coins needed to make the given amount of change, in cents.
// Re-prompt the user, if their input is not greater than or equal to 0 (or if their input isn’t an int at all!).

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed in dollars: ");
    }
    while (dollars <= 0);

    int coins = 0;
    // converts from float to int for precision
    int cents = round(dollars * 1);

    // loop continues until you are owed no change
    while (cents > 0)
    {
        // conditionals check for every type of coin, subtract that coin from the total change and
        // add 1 to the total number of coins
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }
    // displays the total number of coins needed to give the change
    printf("%i\n", coins);
}
