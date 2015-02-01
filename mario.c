// CS50 2015
// Scott Linne
// Program to build a Mario pyramid

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    
    do
    {
    printf("provide a height for the pyramid, greater than 0 less than 24:\n");
    height = GetInt();
    }
    while (height < 0 || height > 23);
    
    
    
    
    // loop through and set the height of the pyramid
    for(int i = 0; i < height; i++)
    {
        // loop through and print the spaces, start with 1 index
        for(int j = 1; j< height-i; j++)
        {
            printf(" ");
        }
        
        // loop through and print the hashes, adding 2 hashes for top of pyramid
        for(int k =0; k<i+2; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}
