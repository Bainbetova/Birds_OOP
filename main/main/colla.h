#pragma once
#include "stdafx.h"
/* �����-��������� ������� Casuariiformes */
class colla {
	std::vector<Casuariiformes*> vec;
public:
	/* ����������� */
	colla() {}
	/* ������ */
	void add(Casuariiformes* element) { // ���������� �������� � ��������� 
		vec.push_back(element);
	}
	void remove(int index) { // �������� ��������
		vec.erase(vec.begin() + index);
	}
	Casuariiformes * item(int index) { // �������� ��� ������� � ���� "���������"
		return vec.at(index);	
	}
	int count() { // ���������� ���������� ��������� � ���������
		return vec.size();
	}
	void show() { // ����� ���������
		int count = vec.size();
		if (count < 1) {
			printf("\nEmpty\n\n");
			return;
		}
		for (int i = 0; i < count; i++) {
			Casuariiformes * ob = item(i);
			printf("\n[�%d] type: %s, name: %s, id: %d\n", i+1, ob->type(), ob->get_name(), ob->id);
		}
	}
};
