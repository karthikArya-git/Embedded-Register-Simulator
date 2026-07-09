#ifndef REGISTER_H
#define REGISTER_H

#include <stdint.h>

extern uint8_t GPIO_REGISTER;

void setBit(uint8_t bit);
void clearBit(uint8_t bit);
void toggleBit(uint8_t bit);
void readBit(uint8_t bit);
void resetRegister(void);
void setAllBits(void);
void displayRegister(void);

#endif