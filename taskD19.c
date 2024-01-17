#include <stdio.h>
#include <locale.h>

int acounter (void) // Количество 'a' в введенной строке
{
	char c;
	if ((c = getchar()) != '.') // Если введенный символ не равен '.'
	{
		if (c == 'a') // Если введенный символ равен 'а'
		{
			return 1+acounter();
		}
		acounter();
	}
	else 
	{
		return 0;
	}
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите строку состоящую из английских букв, пробелов и знаков препинания. В конце строки символ '.'");
	printf("Данные на входе: ");
	printf("Данные на выходе: %d", acounter());
	return 0;
}
