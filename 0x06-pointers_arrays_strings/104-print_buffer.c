#include "main.h"
#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

/**
 * print_buffer - prints a buffer.
 *@b: the buffer
 *@size: size of data printed out.
 * Return: Always 0.
 */
void print_buffer(char *b, int size)
{
	int counter;
	int j;
	char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	/* printf("%#p\n",(void *)b);*/
	counter=0;
	while(counter < size)
	{
		printf("%08x: ", counter);
		for(j=0; j < 10; j+=2)
		{
			if( (counter + j ) < size)
				printf("%02x",b[ counter + j]); 
			else 
				printf("  ");
			if( (counter + j + 1) < size)
				printf("%02x ",b[ counter + j + 1]);
			else
				printf("   ");

		
		}
		for(j=0; j < 10; j++)
                {
                        if( (counter + j ) < size)
			{
				c = b[ counter + j];
                                printf("%c", (c >= 32) ? c : '.');
			}
                }
		counter += 10;
		printf("\n");
	}
}

