#include <stdio.h>

/**
* flip_bits - Returns the number of bits needed to flip to get from n to m.
* @n: The source number.
* @m: The target number.
*
* Return: The number of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int numFlips = 0;

while (xor_result)
{
numFlips += xor_result & 1;
xor_result >>= 1;
}

return (numFlips);
}
