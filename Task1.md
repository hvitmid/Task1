#include <locale.h>

#include <stdio.h>

void name()
{
	setlocale(LC_ALL, "RUS");
	puts("тема: разработка консольного приложение выполнила торопцева с.в.");

}

void main()

{
	name();
	setlocale(LC_ALL, "RUS");
	puts("Моя программа");
	return 5555;

}
