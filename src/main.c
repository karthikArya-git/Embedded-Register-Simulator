#include <stdio.h>
#include "../include/register.h"

int main()
{
    int choice;
    int bit;

    while(1)
    {
        printf("\n==============================\n");
        printf(" Embedded Register Simulator\n");
        printf("==============================\n");

        printf("\n1. Set Bit\n");
        printf("2. Clear Bit\n");
        printf("3. Toggle Bit\n");
        printf("4. Read Bit\n");
        printf("5. Display Register\n");
        printf("6. Reset Register\n");
        printf("7. Set All Bits\n");
        printf("8. Exit\n");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
{
case 1:
    printf("Enter Bit (0-7): ");
    scanf("%d",&bit);
    setBit(bit);
    displayRegister();
    break;

case 2:
    printf("Enter Bit (0-7): ");
    scanf("%d",&bit);
    clearBit(bit);
    displayRegister();
    break;

case 3:
    printf("Enter Bit (0-7): ");
    scanf("%d",&bit);
    toggleBit(bit);
    displayRegister();
    break;

case 4:
    printf("Enter Bit (0-7): ");
    scanf("%d",&bit);
    readBit(bit);
    break;

case 5:
    displayRegister();
    break;

case 6:
    resetRegister();
    displayRegister();
    break;

case 7:
    setAllBits();
    displayRegister();
    break;

case 8:
    printf("Exiting...\n");
    return 0;

default:
    printf("Invalid Choice!\n");
}}
    return 0;
}