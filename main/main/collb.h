#pragma once
#include "stdafx.h"
/* �����-�������� ������� Accipiter */
class collb {
	std::vector<Accipiter*> vec;
public:
	/* ����������� */
	collb() {}
	/* ������ */
	void add(Accipiter* element) { // ���������� �������� � ��������� 
		vec.push_back(element);
	}
	void remove(int index) { // �������� ��������
		vec.erase(vec.begin() + index);
	}
	Accipiter * item(int index) { // ������� ��� ������� � ���� "���������"
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
			Accipiter * ob = item(i);
			printf("\n[�%d] type: %s, name: %s, id: %d\n", i+1, ob->type(), ob->get_name(), ob->id);
		}
	}
};