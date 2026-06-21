#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));

	int tile[10][10];
	int x, y, prob, life;
	life = 1;

	for (int i = 0;i < 10;i++)//처음 맨땅 출력
	{
		for (int j = 0;j < 10;j++)
			printf(". ");
		printf("\n");
	}

	for (int i = 0;i < 10;i++) //지뢰 설치(지뢰면 원소 = -1, 아니면 1)
	{
		for (int j = 0;j < 10;j++)
		{
			prob = rand() % 100;
			if (prob < 30)
				tile[i][j] = -1;
			else
				tile[i][j] = 1;
		}
	}

	while (life) //게임 시작
	{
		printf("어떤 셀을 여시겠어요?(행번호, 열번호) >> ");
		scanf("%d %d", &x, &y);
		system("cls");

		if (tile[x][y] == -1) //지뢰 밟은 경우, 값을 -2로 바꾸고 반복문에서 -2를 읽으면 #출력하여 죽은 자리를 출력할 수 있게 설정.
		{
			printf("지뢰를 밟았어요!\n");
			tile[x][y] = -2;
			life = 0;
		}
		else //지뢰를 안 밟은 경우, 값을 2로 바꾸고 반복문에서 2를 읽으면 *출력하여 한 번 열었다는 걸 알 수 있게 설정.
			tile[x][y] = 2;

		for (int i = 0;i < 10;i++)
		{
			for (int j = 0;j < 10;j++)
			{
				if (tile[i][j] == 1||tile[i][j] == -1) //한 번도 열리지 않았을 경우 .출력
					printf(". ");
				else if (tile[i][j] == 2) //한 번이라도 열렸을 경우, *출력
					printf("* ");
				else if (tile[i][j] == -2) //지뢰 구역일 경우, #출력
					printf("# ");
			}
			printf("\n");
		}
	}

	printf("게임 끝~~");

	return 0;
}
