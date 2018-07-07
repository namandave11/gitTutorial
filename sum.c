#include<stdio.h>
#include<stdint.h>

uint32_t sum(uint16_t a, uint16_t b)
{
	return a + b;
}

int main(void)
{
	uint32_t a = 20;
	uint32_t b = 20;
	
	printf("Sum of a and b is %u", sum(a,b));
	
	return 0;
}
