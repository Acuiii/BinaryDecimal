/* Decimal to Binary Conversion */

#include <stdio.h>
main()
{
	int i, j, cnt, nbits;
	unsigned mask; 

	printf("\nEnter an Integer value: ");
	scanf("%d", &i); fflush(stdin);

	nbits = (8 * sizeof(int));
	mask = 0x1 << (nbits - 1); 
	for(cnt = 0; cnt < nbits; cnt++) 
	{
		j = (i & mask)? 1: 0;
		printf("%x",j);
		mask >>= 1; 
	}
	printf("\n"); 
}