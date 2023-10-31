#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}

touch 0-putchar.c 1-alphabet.c 2-print_alphabet_x10.c 3-islower.c 4-isalpha.c 5-sign.c 6-abs.c 7-print_last_digit.c 8-24_hours.c 9-times_table.c 10-add.c 11-print_to_98.c 100-times_table.c