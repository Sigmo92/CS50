# CS50
#include <stdio.h>
#include <cs50.h>

//call upon funtions
void mario(int n);
int get_height_int(void);

// main program
int main(void)
{
    int x = get_height_int();
    mario(x);
}



// FUNCTIONS

//create mario bricks
void mario(int n)
{
    for(int i=0; i<n; i++)
    {
        //printing spaces in front
        int k = n-i;

        for(int l=0; l<k; l++)
        {
            printf(" ");
        }

        //print first column of harshtags
        for(int j=0; j<=i; j++)
        {
            printf("#");
        }
        //print spaces between columns
        printf("  ");

        //print second column of harshtags
        for(int j=0; j<=i; j++)
        {
            printf("#");
        }

        //change line
        printf("\n");
    }
}

// get positiv integer under or equal to 8
int get_height_int(void)
{
    int n;
    do
    {
        n=get_int("%s", "Height: ");
    }
    while (n<1 || n>=8);
    return n;
}
