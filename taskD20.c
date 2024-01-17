#include <stdio.h>
#include <locale.h>

unsigned long long int recurs_power (int n, int p) // Возведение в степень
{
	if (p == 0)
	{
		return 1;
	}
	else
	{
		return n*recurs_power(n,p-1);
	}
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned int n, p;
	puts("Введите два целых положительных числа через пробел. Два целых числа -100 >= n >= 100 и 0 >= p >= 100");
	scanf("%u %u", &n, &p);
	printf("Данные на входе: %u %u\n", n, p);
	printf("Данные на выходе: %llu", recurs_power(n,p));
	return 0;
}