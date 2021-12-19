#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h, i, j, indent;
    do 
    {
        h = get_int("Enter height: ");
    }
    while (h < 1 || h > 8);
//loop next line
    for (i = 0; i < h; i++)
    {
//loop indentation
        for (indent = 0; indent < (h - i - 1); indent++)
        {

            printf(" ");
        }
//loop hashes
        for (j = 0; j <= i; j++)
        {

            printf("#");
        }

        printf("\n");
    }
}