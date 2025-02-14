#include <stdlib.h>
#include <time.h>

/* Print random number
*
* main - print random positiv or negativ number
*
* return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("Positive number: %d \n", n);

	else if (n < 0)
		printf("Negative number: %d \n", n);
	else
		printf("zero: %d \n", n);

	return (0);
}
