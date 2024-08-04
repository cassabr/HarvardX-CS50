// Learning a new code with basis of C

#include <cs50.h>
#include <stdio.h>

void pyramid(int n);

// ask for pyramid height, check the input and then executes the function
int main(void)
{
    int height = 0;

    // ask for height until it is an int comprised between 1 and 8 inclusive
    do
    {
        height = get_int("Height: ");
    }
    while (!(height >= 1 && height <= 8));

    pyramid(height);
}

// print empty spaces
void space(int l)
{
    for (int k = 0; k < l; k++)
    {
        printf(" ");
    }
}

// generate a pyramid of hashes n tall and twice as large as the line number (i)
void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        space(n - i - 1);

        // print the actual ramp
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        space(2);

        // print the actual ramp
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // move one line down
        printf("\n");
    }
}
