#include<stdio.h>
float balance = 0;
void createAccount()
{
	balance = 0;
	printf("Account created successfully!\n");
}
void deposit()
{
	float amount;
	printf("enter amount to deposit:");
	scanf("%f",&amount);
	balance +=amount;
	printf("deposited successfully!\n");
}
void withdraw()
{
	float amount;
	printf("enter amount to withdraw:");
	scanf("%f",&amount);
	if (amount > balance)
	{
		printf("insufficient balance!\n");
	}
	else
	{
		balance-=amount;
		printf("withdraw successful!\n");
	}
}
void checkBalance()
{
	printf("Current balance: %.2f\n",balance);
}
int main()
{
	int choice;
	do
	{
		printf("\n---Bank System---\n");
		printf("1. Create Account\n");
		printf("2.Deposit\n");
		printf("3.Withdraw\n");
		printf("4.check balance\n");
		printf("5.Exit\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: createAccount();
			break;
			case 2: deposit(); break;
			case 3: withdraw(); break;
			case 4: checkBalance(); break;
			case 5: printf("Thank you!\n"); break;
			default: printf("Invalid choice!\n");
		}
	}
	while(choice !=5);
	return 0;
}

