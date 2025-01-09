#include <stdio.h>

int main()
{

	int dec;
	int i = 1, j, temp;
	char hexa[100];
    printf("Enter Decimal Number:");
    scanf("%d",&dec);

	while (dec != 0) {
		temp = dec % 16;


		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexa[i++] = temp;
		dec = dec / 16;
	}

	printf("Hexadecimal value is: ");
	for (j = i - 1; j > 0; j--)
		printf("%c", hexa[j]);

	return 0;
}
