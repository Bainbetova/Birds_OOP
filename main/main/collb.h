#pragma once
#include "stdafx.h"
/* Класс-коллекця классов Accipiter */
class collb {
	std::vector<Accipiter*> vec;
public:
	/* Конструктор */
	collb() {}
	/* Методы */
	void add(Accipiter* element) { // добавление элемента в коллекцию 
		vec.push_back(element);
	}
	void remove(int index) { // удаление элемента
		vec.erase(vec.begin() + index);
	}
	Accipiter * item(int index) { // привдит тип объекта к типу "коллекции"
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
			Accipiter * ob = item(i);
			printf("\n[№%d] type: %s, name: %s, id: %d\n", i+1, ob->type(), ob->get_name(), ob->id);
		}
	}
};