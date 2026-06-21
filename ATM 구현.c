#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int rest(void);
void deposit(int);
void withdraw(int);

int balance = 1000000;

int main(void)
{
	int input, money;

	printf("********** Welcome to Express ATM **********\n");
	printf("잔고는 %d입니다.\n", rest());

	while (1)
	{
		printf("<1> 잔액\n");
		printf("<2> 입금\n");
		printf("<3> 출금\n");
		printf("<4> 종료\n");
		printf("메뉴를 선택하시오: ");
		scanf("%d", &input);

		if (input == 4)
			break;

		switch (input)
		{
		case 1:
		{
			printf("잔고는 %d입니다.\n", rest());
			break;
		}
		case 2:
		{
			printf("입금 금액을 입력하시오: ");
			scanf("%d", &money);
			deposit(money);
			printf("잔고는 %d입니다.\n", rest());
			break;
		}
		case 3:
		{
			printf("출금 금액을 입력하시오: ");
			scanf("%d", &money);
			withdraw(money);
			printf("잔고는 %d입니다.\n", rest());
			break;
		}
		}
	}

	printf("ATM이 종료되었습니다.");

	return 0;
}

int rest(void)
{
	return balance;
}

void deposit(int money_deposit)
{
	balance += money_deposit;
	return;
}

void withdraw(int money_withdraw)
{
	balance -= money_withdraw;
	return;
}