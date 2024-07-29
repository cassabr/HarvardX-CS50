// Implement a program in C that recreates that pyramid, using hashes (#) for bricks.
// But prompt the user for the pyramid’s actual height.
// Re-prompt the user, again and again as needed, if their input is not greater than 0 or not an int altogether.

#include <cs50.h>
#include <stdio.h>

void pyramid(int n);

// Asks for pyramid height, checks the input and then executes the function
int main(void)
{
    int height = 0;
    // Asks for height until it is a int comprised between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (!(height >= 1 && height <= 8));

    pyramid(height);
}

// Generates a ramp of hashes n tall and as large as the line number (i)
void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Prints empty spaces first
        for (int k = n - i - 2; k >= 0; k--)
        {
            printf(" ");
        }
        // Then the actual ramp
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // Moves one line down
        printf("\n");
    }
}
