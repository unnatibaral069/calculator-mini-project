#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number,guess,attempts=0;
	srand(time(0));
	number = rand() % 100 + 1;
	printf("Guess a number between 1 and 100\n");
	do
	{
		printf("Enter your guess:");
		scanf("%d",&guess);
		attempts++;
		
		if(guess>number)
		printf("too high!\n");
		else if (guess < number)
		printf("too low!\n");
		else
		printf("correct! You guested in %d attempts.\n",attempts);
	}
	while (guess !=number);
	return 0;
}
