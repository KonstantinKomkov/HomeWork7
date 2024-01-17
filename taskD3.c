#include <stdio.h>
#include <locale.h>

void print_num_reverse (int num) // Вывести числа в обратном порядке
{
	int n = num%10;
	if (num > 0)
	{
		printf("%d ", n);
		print_num_reverse(num/10);
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
	print_num_reverse(a);
	return 0;
}
