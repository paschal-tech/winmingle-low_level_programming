#include <stdio.h>

/**
 *  * main - prints the first 98 Fibonacci numbers
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
		unsigned long int a1 = 0, a2 = 1;
			unsigned long int b1 = 0, b2 = 2;
				unsigned long int c1, c2;
					unsigned long int limit = 1000000000;
						int count;

							printf("1, 2");

								for (count = 3; count <= 98; count++)
										{
													c1 = a1 + b1;
															c2 = a2 + b2;

																	if (c2 >= limit)
																				{
																								c1 += c2 / limit;
																											c2 %= limit;
																													}

																			printf(", ");

																					if (c1 > 0)
																									printf("%lu%09lu", c1, c2);
																							else
																											printf("%lu", c2);

																									a1 = b1;
																											a2 = b2;
																													b1 = c1;
																															b2 = c2;
																																}

									printf("\n");

										return (0);
}#include <stdio.h>

/**
 *  * main - prints the first 98 Fibonacci numbers
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	unsigned long int a1 = 0, a2 = 1;
	unsigned long int b1 = 0, b2 = 2;
	unsigned long int c1, c2;
	unsigned long int limit = 1000000000;
	int count;


	printf("1, 2");

	for (count = 3; count <= 98; count++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;

		if (c2 >= limit)
		{
			c1 += c2 / limit;
			c2 %= limit;
		}

		printf(", ");

		if (c1 > 0)
			printf("%lu%09lu", c1, c2);
		else
			printf("%lu", c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}

	printf("\n");

	return (0);
}
