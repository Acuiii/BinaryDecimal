/* Binary to Decimal Conversion */

#include <stdio.h>
main()
{
	long unsigned bin, store, dec=0, pos = 0, digit;

	printf("\nEnter a Binary Number: ");
	scanf("%ld",&bin); fflush(stdin);

	store = bin;
	while(bin)
	{
		digit = bin % 10;
		dec += digit << pos;
		pos++;
		bin /= 10;
	} 

	printf("The Decimal equivalent of Binary %Id is %ld\n\n", store, dec); 
}