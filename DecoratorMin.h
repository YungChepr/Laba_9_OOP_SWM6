#pragma once
#include "Decorator.h"
class DecoratorMin : public Decorator
{
public:
	//Конструктор инициализирует указатель на IUnit
	DecoratorMin(IUnit* un) : Decorator(un) {}
	//Задача декоратора вывести сообщение "Минимально допустимое значение"
	void DoWrite() override;
};

