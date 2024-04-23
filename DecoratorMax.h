#pragma once
#include "Decorator.h"
class DecoratorMax : public Decorator
{
public:
	//Конструктор инициализирует указатель на IUnit
	DecoratorMax(IUnit* un) : Decorator(un) {}
	//Задача декоратора вывести сообщение "Максимально допустимое значение"
	void DoWrite() override;
};

