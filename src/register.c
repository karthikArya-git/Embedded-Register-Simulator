#include <stdio.h>
#include "../include/register.h"

uint8_t GPIO_REGISTER = 0;

void setBit(uint8_t bit)
{
    if(bit < 8)
        GPIO_REGISTER |= (1 << bit);
}

void clearBit(uint8_t bit)
{
    if(bit < 8)
        GPIO_REGISTER &= ~(1 << bit);
}

void toggleBit(uint8_t bit)
{
    if(bit < 8)
        GPIO_REGISTER ^= (1 << bit);
}
void readBit(uint8_t bit)
{
    if ((GPIO_REGISTER >> bit) & 1)
        printf("Bit %d = HIGH\n", bit);
    else
        printf("Bit %d = LOW\n", bit);
}

void resetRegister(void)
{
    GPIO_REGISTER = 0;
}

void setAllBits(void)
{
    GPIO_REGISTER = 0xFF;
}

void displayRegister(void)
{
    printf("\nRegister Status\n");
    printf("-----------------\n");

    printf("Binary  : ");

    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (GPIO_REGISTER >> i) & 1);
    }

    printf("\nHex     : 0x%02X", GPIO_REGISTER);
    printf("\nDecimal : %d\n", GPIO_REGISTER);
}