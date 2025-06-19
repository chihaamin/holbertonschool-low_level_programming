#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 83
#define TARGET_SUM 2772
#define BASE_ASCII 33

/**
 * main - Generates valid passwords using base + distribution method
 * Return: Always 0
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int remaining_sum = TARGET_SUM - (PASSWORD_LENGTH * BASE_ASCII);
	int i, random_index;

	/* Initialize random number generator */
	srand(time(0));

	/* Initialize password with base ASCII value */
	for (i = 0; i < PASSWORD_LENGTH; i++)
		password[i] = BASE_ASCII;
	password[PASSWORD_LENGTH] = '\0';

	/* Distribute remaining sum randomly */
	while (remaining_sum > 0)
	{
		random_index = rand() % PASSWORD_LENGTH;

		/* Only increment if below max printable ASCII */
		if (password[random_index] < 126)
		{
			password[random_index]++;
			remaining_sum--;
		}
	}

	printf("%s", password);
	return (0);
}
