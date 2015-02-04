/***********
Scott Linne
CS50 2015
Greedy - Program to receive user cash input, and return number
of coins as change


************/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{

float change;

    // ask how much change is owed
    printf("O hai!  How much change is owed?\n");

    // prompt for user input of change amount as a float value
    change = GetFloat();
    while (change < 0)
    {
        printf("please enter a non-negative value\n");
        change = GetFloat();
    
    }
    
    // convert user input into int as pennies
    float pennies = round(change*100);
    int coins = (int)pennies;
  
        // how many quarters are returned
        int quarters = coins/25;
         
         // remainder after quarters
        int after_quarters = coins%25;
        
        // how many dimes are returned
        int dimes = after_quarters/10;
        
        // remainder after dimes
        int after_dimes = after_quarters%10;
        
        // how many nickels are returned
        int nickels = after_dimes/5;
        
        // remainder after nickels
        int after_nickels = after_dimes%5;
        
        // how many pennies are returned
        int penny = after_nickels;
        
        printf("%i\n", quarters+dimes+nickels+penny);  
}
