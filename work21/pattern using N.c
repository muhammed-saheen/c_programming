
#include <stdio.h>


int main() 
{    
    int amount, notes;   

 
    int denominations[8] = {1000,500, 100, 50, 20,10,5, 1};

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("\n");

    for (int i = 0; i < 8; i++) 
    {
        notes = amount / denominations[i];

        if (notes)
        {
            amount = amount % denominations[i]; 

            printf("%d * %d = %d \n", notes, denominations[i], 
                notes * denominations[i]);
        }                
    }

    return 0;
}
