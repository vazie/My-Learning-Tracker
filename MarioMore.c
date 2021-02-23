#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get positive int between 1 and 8
    int noBlocks;
    do
    {
        noBlocks = get_int("How high should the tower be? ");
    }
    while (noBlocks > 8 || noBlocks < 1);
    
    // think about how many lines are needed
    for (int a = 0; a < noBlocks; a++)
    {
        
        //print the number of spaces before each # and count backwards
        for (int b = noBlocks - 1; b > a; b--)
        {
            printf(" ");
        }
        
        //print correct no of # after each space
        for (int c = -1; c < a; c++)
        {
            printf("#");
        }
        
        //Go to new line after each row of #
        printf("  ");
        for (int d = -1; d < a; d++)
        {
            printf("#");
        }
        printf("\n");
    }
}
