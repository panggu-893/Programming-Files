#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
	int tile[10][10] = { 0 };
	int x, y, number;
	x = y = 5;
	tile[x][y] = 1;


	while (!((x <= -1 || y <= -1) || (x >= 10 || y >= 10)))
	{
		system("cls");
		for (int i = 0;i < 10;i++)
		{
			for (int j = 0;j < 10;j++)
			{
				if (tile[i][j] == 0)
					printf(". ");
				else if (tile[i][j] == 1)
					printf("* ");
			}
			printf("\n");
		}
		Sleep(1000);
		number = rand() % 8;
		switch (number)
		{
		case 0:
			x--;
			tile[x][y] = 1;
			break;
		case 1:
			x--;
			y++;
			tile[x][y] = 1;
			break;
		case 2:
			y++;
			tile[x][y] = 1;
			break;
		case 3:
			x++;
			y++;
			tile[x][y] = 1;
			break;
		case 4:
			x++;
			tile[x][y] = 1;
			break;
		case 5:
			x++;
			y--;
			tile[x][y] = 1;
			break;
		case 6:
			y--;
			tile[x][y] = 1;
			break;
		case 7:
			x--;
			y--;
			tile[x][y] = 1;
			break;
		}
	}
	
	return 0;
}
