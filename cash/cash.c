#include<stdio.h>
#include<math.h>

int main(){
    int cash_return, quarters,dimes,nickels,pennies;
    printf("Enter the return cash amount in cents: ");
    scanf("%d", &cash_return);
// Calculate the number of each coin type
quarters = cash_return / 25;
cash_return = cash_return % 25;
    dimes = cash_return / 10;
    cash_return = cash_return % 10;
        nickels = cash_return / 5;
        cash_return = cash_return % 5;
            pennies = cash_return;
            // Print the results
    printf("No. of Quarters returned: %d\n", quarters);
    printf("No. of Dimes returned: %d\n", dimes);
    printf("No. of Nickels returned: %d\n", nickels);
    printf("No. of Pennies returned: %d\n", pennies);
    return 0;
}