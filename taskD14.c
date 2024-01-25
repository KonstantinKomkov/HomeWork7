#include <stdio.h>
#include <locale.h>


int odd_num (void) // Вывод введеных нечетных чисел в прямом порядке
{
	static int value = 0;
	char c;
	if ((c = getchar()) != '0') // Если введенный символ не равен 0
	{
		if ((int)c != 32) // Если введенный символ не равен пробелу
		{
			value = value*10 + (c - '0'); // Записываем в переменную число стоящее перед пробелом
		}
		else
		{
			if (value%2 != 0) // Если число перед пробелом нечетное то печатаем его
			{
				printf("%u ", value);
			}
			value = 0;
		}
		odd_num();
	}
	else 
	{
		return 0;
	}
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите последовательность ненулевых целых чисел через пробел. В конце число 0.");
	printf("Данные на входе: ");
	odd_num();
	return 0;
}
