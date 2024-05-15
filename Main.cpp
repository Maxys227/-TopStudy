//ЗОНА НАСТРОЕК И ПРЕПРОЦЕССОР
#include "settings.h"
//ЗОНА СТРУКТУРЫ
#include "myStruct.h"
//ЗОНА ФУНКЦИЙ ДЛЯ РАБОТЫ СО СТРУКТУРОЙ
#include "funcPrintName.h"

#include "funcPrintAge.h"

#include "funcMyAffairs.h"

#include "funcColor.h"
//ЗОНА РАБОТЫ ПРОГРАММЫ
int main()
{
	setlocale(LC_ALL, "ru");
	Human h1{ 15, "Max", "Evdok" };
	printName(h1.name, h1.surname);
	printAge(h1.age);
	printMe();
	printColor();
	return 0;
}
