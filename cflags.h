#ifndef C_FLAGS_H
#define C_FLAGS_H

#include <stdint.h>

#define FLAG_OPERATION_BITWIDTH 64

uint64_t bit_flip(uint64_t flag, uint8_t bit);
uint64_t bit_off(uint64_t flag, uint8_t bit);
uint64_t bit_on(uint64_t flag, uint8_t bit);
uint8_t bit_check(uint64_t flag, uint8_t bit);
uint64_t bit_set(uint64_t flag, uint8_t pos, uint8_t bit);

void printflag(uint64_t flag);

#endif

