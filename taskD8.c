#include <stdio.h>
#include <locale.h>

void print_num (int a, int b) // Вывести числа в порядке возрастания или убывания
{
	printf("%d ", a);
	if (a > b)
	{
		print_num(a-1,b);
	}
	else if (a < b)
	{
		print_num(a+1,b);
	}
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned int a, b;
	puts("Введите два целых положительных числа через пробел");
	scanf("%u %u", &a, &b);
	printf("Данные на входе: %u %u\n", a, b);
	printf("Данные на выходе: ");
	print_num(a,b);
	return 0;
}
