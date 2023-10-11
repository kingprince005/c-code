#include <stdio.h>
#include<conio.h>
int main() 
{
    int balance =1000000;
    int option;
    int amount;
    int pin;
    
    while(1)
    {   
        printf("Welcome to PRINCE ATM\n");
        printf("enter the ATM pin :\n");
        scanf("%d",&pin);
        if(pin==1122)
        {
        printf("\nPlease select an option:\n");
        printf("1. Withdraw money\n");
        printf("2. Deposit money\n");
        printf("3. Check balance\n");
        printf("4. Exit\n");
        printf("Enter option (1-4): ");
        }
            else
            {
                printf("Sorry it is incorrect pin. Better luck next time sir");
            }
                scanf("%d", &option);   

            switch (option) {
                case 1:
                    printf("\nEnter amount to withdraw: ");
                    scanf("%d", &amount);
                    if (amount <= balance) 
                    {
                        balance -= amount;
                        printf("Withdrawn amount: %d\n", amount);
                        printf("Remaining balance: %d\n", balance);
                    } 
                        else
                            {
                                printf("Insufficient balance\n");
                            }  
                break;
                case 2:
                    printf("\nEnter amount to deposit: ");
                    scanf("%d", &amount);
                    balance += amount;
                    printf("Deposited amount: %d\n", amount);
                    printf("New balance: %d\n", balance);
                break;
                case 3:
                    printf("\nYour balance is: %d\n", balance);
                break;
                case 4:
                    printf("\nThank you for using PRINCE ATM\n");
                break;
                    default:
                    printf("\nPlease enter the correct number\n");
        }
    }
    getch();
}
