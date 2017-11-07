#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{


	int dice1, dice2, dice3;
	int tio = 10;
	int femtio = 50;
	int hundra = 100;
	int credits;
	int spela;
	int igen;
	int refil;

	
	printf("Hej hur mycket vill du sätta in? ");
	scanf_s("%d", &credits);
	
	

	while (1)
	{
		srand((int)time(NULL));

		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		dice3 = rand() % 6 + 1;
		printf("Du har %d ", credits);
		while (credits < 10)
		{
			printf("Du har för lite credits, vill du sätta in? Ja=1 / Nej = 0");
			scanf_s("%d", &refil);

		}
		printf("Vill du spela? (1/0 \n");
		scanf_s("%d", &spela);
		if (spela == 1)
		{
			printf("%d, %d, %d", dice1, dice2, dice3);
			credits = credits - 10;
			getchar();

			if (dice1 == 6 && dice2 == 6 && dice3 == 6)

			{
				credits = credits + 100;
				printf("\nGrattis du vann %d", hundra);
				getchar();
			}


			else if (dice1 == dice2 && dice1 == dice3 && dice2 == dice3)
			{
				credits = credits + 50;
				printf("\nGrattis du vann %d", femtio);
				getchar();
			}
			else if (dice1 == dice2 || dice1 == dice3 || dice2 == dice3)
			{
				credits = credits + 10;
				printf("\nGrattis du vann %d", tio);
				getchar();
			}

			else
				printf("\nIngen vinst, vill du spela igen? Ja=1 / Nej = 0");
			scanf_s("%d", &igen);

		}


		else
			printf("Hej då");

		getchar();

		if (igen == 0)
			break;

	}
	getchar();
}
