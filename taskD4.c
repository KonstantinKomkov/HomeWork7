#include <stdio.h>
#include <locale.h>

void print_num (int num) // Вывести числа в прямом порядке
{
	int n = num%10;
	if (num > 0)
	{
		print_num(num/10);
		printf("%d ", n);
	}
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned int a;
	puts("Введите одно целое неотрицательное число");
	scanf("%u", &a);
	printf("Данные на входе: %u\n", a);
	printf("Данные на выходе: ");
	print_num(a);
	return 0;
}
