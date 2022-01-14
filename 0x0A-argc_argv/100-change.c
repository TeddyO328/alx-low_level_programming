#include <stdio.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
 *main-prints the minimum number of coins
 *to make change for an amount of money.
 *@argc:number of commandline arguments.
 *@argv:pointer to an array of commmand line arguments.
 *Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, leastcents = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			leastcents += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else
=======
 * main - prints the minimum number of coins to make change for a given amount
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: number of coins or 1
 **/
int main(int argc, char *argv[])
{
	int amount, coins;

	if (argc != 2)
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	{
		printf("Error\n");
		return (1);
	}
<<<<<<< HEAD
=======
	amount = atoi(argv[1]);
	coins = 0;
	if (amount > 25)
	{
		while (amount >= 25)
			amount -= 25, coins++;
	}
	if (amount > 10 && amount < 25)
	{
		while (amount >= 10)
			amount -= 10, coins++;
	}
	if (amount > 5 && amount < 10)
	{
		while (amount >= 5)
			amount -= 5, coins++;
	}
	if (amount > 2 && amount < 5)
	{
		while (amount >= 2)
			amount -= 2, coins++;
	}
	if (amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	return (0);
}
