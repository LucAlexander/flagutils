#include "cflags.h"
#include <stdio.h>

uint64_t bit_flip(uint64_t flag, uint8_t bit){
	return flag ^ (1<<(bit-1));
}

uint64_t bit_off(uint64_t flag, uint8_t bit){
	return flag & ~(1<<(bit-1));
}

uint64_t bit_on(uint64_t flag, uint8_t bit){
	return flag | (1<<(bit-1));
}

uint8_t bit_check(uint64_t flag, uint8_t bit){
	return (flag & (1<<(bit-1)))==(1<<(bit-1));
}

uint64_t bit_set(uint64_t flag, uint8_t pos, uint8_t bit){
	return ((flag & ~(1<<(pos-1))) | (bit << (pos-1)));
}

void printflag(uint64_t flag){
	int8_t i;
	for (i = FLAG_OPERATION_BITWIDTH;i>0;--i){
		printf("%u",bit_check(flag, i));
	}
	printf("\n");
}
