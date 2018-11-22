#include <stdio.h>

void funkcja();

int
main()
{
	funkcja();
	funkcja();	

	return (0);
}

void
funkcja()
{
	static int number_of_calls = 0;

	number_of_calls++;
	printf("%d\n", number_of_calls);
}
