#pragma once
#include "stdafx.h"
/* Класс-коллекция классов Casuariiformes */
class colla {
	std::vector<Casuariiformes*> vec;
public:
	/* Конструктор */
	colla() {}
	/* Методы */
	void add(Casuariiformes* element) { // добавление элемента в коллекцию 
		vec.push_back(element);
	}
	void remove(int index) { // удаление элемента
		vec.erase(vec.begin() + index);
	}
	Casuariiformes * item(int index) { // приводит тип объекта к типу "коллекции"
		return vec.at(index);	
	}
	int count() { // возвращает количество элементов в коллекции
		return vec.size();
	}
	void show() { // вывод коллекции
		int count = vec.size();
		if (count < 1) {
			printf("\nEmpty\n\n");
			return;
		}
		for (int i = 0; i < count; i++) {
			Casuariiformes * ob = item(i);
			printf("\n[№%d] type: %s, name: %s, id: %d\n", i+1, ob->type(), ob->get_name(), ob->id);
		}
	}
};
