#include <locale.h>
#include <stdio.h>
#include "name.h"

void main()

{
	setlocale(LC_ALL, "RUS");
	name(); 
	return 5555;

}
