#include <stdio.h>
#include <locale.h>

int dec_to_bin_count1 (int a) // Количество 1 в двоичной записи числа
{
	if (a%2 == 1)
	{
		return 1+dec_to_bin_count1(a/2);
	}
	if (a >= 2)
	{
		return dec_to_bin_count1(a/2);
	}
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned int a;
	puts("Введите одно натуральное число");
	scanf("%u", &a);
	printf("Данные на входе: %u\n", a);
	printf("Данные на выходе: %d", dec_to_bin_count1(a));
	return 0;
}
