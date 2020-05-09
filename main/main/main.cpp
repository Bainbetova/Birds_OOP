// main.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include "colla.h"
#include "collb.h"

// �u�������� �������
void Menu();
void Menu1();
void Menu_1();
void Menu2();
void RandCas(Casuarius *);
void AddCas(Casuarius *);
void RandDr(Dromaius_novaehollandiae *);
void AddDr(Dromaius_novaehollandiae *);
void RemoveCa();
void MethodCa();
void PropertyCa();
void ShowCa();
void RandAcc(Accipiter_striatus *);
void AddAcc(Accipiter_striatus *);
void RandAcg(Accipiter_gundlachi *);
void AddAcg(Accipiter_gundlachi *);
void RandAcn(Accipiter_nisus *);
void AddAcn(Accipiter_nisus *);
void RemoveCb();
void MethodCb();
void PropertyCb();
void ShowCb();
void Fun();
void Fun1();
void Fun2(char);
void Fun3();
void Fun4();
char Fun5();
char Fun6();
void Fun7();
void Fun8(char);
void Fun9();
char Fun10();
void Fun11();
void Fun12();
void Fun13();
void Fun14(char);
void Fun15();
void Fun16(char);
void Fun17();

// ���������� ����������
colla ca; // ��������� �1 
collb cb; // ��������� �2

// ������� �������
void main() {
	setlocale(LC_ALL, ".1251");
	Fun();
	return;
}

// ������� ��� ������ ���� �� �����
void Menu() {
	printf("\n������ ���������: \n\n");
	printf("1. ���������������.\n");
	printf("2. ��������� �������.\n");
	printf("3. �����.\n\n");
	printf("�������� ���������: ");
	return;
}

// ������� ��� ������ ���� �� �����
void Menu1() {
	printf("\n������ ���������������: \n\n");
	printf("1. �������.\n");
	printf("2. ���.\n");
	printf("�������� ��� �����: ");
	return;
}

// ������� ��� ������ ���� �� �����
void Menu2() {
	printf("\n������ ��������� ��������:\n\n");	 
	printf("1. ��������� ������.\n");
	printf("2. ��������� ������.\n");
	printf("3. ������-������������.\n");
	printf("�������� ��� �����: ");
	return;
}

// ������� ��� ������ ���� �� �����
void Menu_1() {
	printf("\n�������� ��� ���������: \n\n");
	printf("1. �������� � ���������.\n");
	printf("2. ������� �� ���������.\n");
	printf("3. ������� ������ ��� ������� ����.\n");
	printf("4. ������� �������� ��� ������ � ��������� �����.\n");
	printf("5. �������� ���������.\n");
	printf("�������� ��������: ");
	return;
}

void RandCas(Casuarius *cas) {
	srand((unsigned)time(NULL));
	int k = 0;
	for (int i = 0; i < 5; i++) { k = 1 + (5 * rand() / RAND_MAX); }
	if (k == 1) { cas->set_name("Toby"); }
	if (k == 2) { cas->set_name("Alex"); }
	if (k == 3) { cas->set_name("Mila"); }
	if (k == 4) { cas->set_name("Lila"); }
	if (k == 5) { cas->set_name("Aria"); }
}

void AddCas(Casuarius *cas) {
	cas->id = ca.count();
	ca.add(cas);
	printf("\n������ %s c id = %d �������� � ���������.\n", cas->get_name(), cas->id);
	_getch();
}

void RandDr(Dromaius_novaehollandiae *dr) {
	srand((unsigned)time(NULL));
	int k = 0;
	for (int i = 0; i < 5; i++) { k = 1 + (5 * rand() / RAND_MAX); }
	if (k == 1) { dr->set_name("Toby"); }
	if (k == 2) { dr->set_name("Alex"); }
	if (k == 3) { dr->set_name("Mila"); }
	if (k == 4) { dr->set_name("Lila"); }
	if (k == 5) { dr->set_name("Aria"); }
}

void AddDr(Dromaius_novaehollandiae *dr) {
	dr->id = ca.count();
	ca.add(dr);
	printf("\n��� %s c id = %d �������� � ���������.\n", dr->get_name(), dr->id);
	_getch();
}

void RemoveCa() {
	int number;
	printf("\n������� ������� ��� �������: ");
	scanf_s("%d", &number);
	if (number > ca.count() || ca.count() < 0 || number <= 0) {
		printf("������ �������� � ��������� ���.");
		_getch();
	} else {
		number = number - 1;
		ca.remove(number);
		printf("����� ������� �� ���������.\n");
		_getch();
	}
}

void MethodCa() {
	if (ca.count() == 0) {
		printf("\n������ ����������� ������, ����� ��������� �����\n");
		_getch();
	} else {
		ca.item(0)->run();
		ca.item(0)->voice();
		_getch();
	}
}

void PropertyCa() {
	int number;
	if (ca.count() == 0) {
		printf("\n������ ����������� ��������, ����� ��������� �����");
		_getch();
	} else {
		printf("������� ����� �����, � ������� ������ ����������� ��������:\n");
		scanf_s("%d", &number);
		if (number > ca.count() || ca.count() < 0 || number <= 0) {
			printf("\n������ �������� � ��������� ���.");
			_getch();
		} else {
			number = number - 1;
			printf("\nid: %d\nname: %s\ntype: %s\n", ca.item(number)->id, ca.item(number)->get_name(), ca.item(number)->type());
			_getch();
		}
	}
}

void ShowCa() {
	printf("\n������ ���������:\n");
	ca.show();
	_getch();
}

void RandAcc(Accipiter_striatus *acc) {
	int k = 0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++) { k = 1 + (5 * rand() / RAND_MAX); }
	if (k == 1) { acc->set_name("Toby"); }
	if (k == 2) { acc->set_name("Alex"); }
	if (k == 3) { acc->set_name("Mila"); }
	if (k == 4) { acc->set_name("Lila"); }
	if (k == 5) { acc->set_name("Aria"); }
}

void AddAcc(Accipiter_striatus *acc) {
	acc->id = cb.count();
	cb.add(acc);
	printf("\n������ %s c id = %d �������� � ���������.\n", acc->get_name(), acc->id);
	_getch();
}

void RandAcg(Accipiter_gundlachi *acg) {
	int k = 0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++) { k = 1 + (5 * rand() / RAND_MAX); }
	if (k == 1) { acg->set_name("Toby"); }
	if (k == 2) { acg->set_name("Alex"); }
	if (k == 3) { acg->set_name("Mila"); }
	if (k == 4) { acg->set_name("Lila"); }
	if (k == 5) { acg->set_name("Aria"); }
}

void AddAcg(Accipiter_gundlachi *acg) {
	acg->id = cb.count();
	cb.add(acg);
	printf("\n��������� ������ %s c id = %d �������� � ���������.\n", acg->get_name(), acg->id);
	_getch();
}

void RandAcn(Accipiter_nisus *acn) {
	int k = 0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++) { k = 1 + (5 * rand() / RAND_MAX); }
	if (k == 1) { acn->set_name("Toby"); }
	if (k == 2) { acn->set_name("Alex"); }
	if (k == 3) { acn->set_name("Mila"); }
	if (k == 4) { acn->set_name("Lila"); }
	if (k == 5) { acn->set_name("Aria"); }
}

void AddAcn(Accipiter_nisus *acn) {
	acn->id = cb.count();
	cb.add(acn);
	printf("\n������-������������ %s c id = %d �������� � ���������.\n", acn->get_name(), acn->id);
	_getch();
}

void RemoveCb() {
	int number;
	printf("\n������� ������� ��� �������: ");
	scanf_s("%d", &number);
	if (number > cb.count() || cb.count() < 0 || number <= 0) {
		printf("������ �������� � ��������� ���.\n");
		_getch();
	}
	else {
		number = number - 1;
		cb.remove(number);
		printf("����� ������� �� ���������.\n");
		_getch();
	}
}

void MethodCb() {
	if (cb.count() == 0) {
		printf("\n������ ����������� ������, ����� ��������� �����\n");
		_getch();
	}
	else {
		cb.item(0)->fly();
		cb.item(0)->voice();
		cb.item(0)->spread_wings();
		_getch();
	}
}

void PropertyCb() {
	int number;
	if (cb.count() == 0) {
		printf("\n������ ����������� �������a, ����� ��������� �����");
		_getch();
	} else {
		printf("\n������� ����� �����, � ������� ������ ����������� ��������:\n");
		scanf_s("%d", &number);
		if (number > ca.count() || ca.count() < 0 || number <= 0) {
			printf("������ �������� � ��������� ���.\n");
			_getch();
		} else {
			number = number - 1;
			printf("\n��������� ������:\nid: %d\nname: %s\ntype: %s\n", cb.item(number)->id, cb.item(number)->get_name(), cb.item(number)->type());
			_getch();
		}
	}
}

void ShowCb() {
	printf("\n������ ���������:\n");
	cb.show();
	_getch();
}

void Fun() {
	Menu(); // ����� ���� �� �����
	Fun1();
}

void Fun1() {
	char ch1;
	ch1 = _getch();
	printf("%c\n", ch1);
	Fun2(ch1);
}

void Fun2(char ch1) {
	do {
		switch (ch1) {
		case '1': // ���������������
			Fun9();
			break;
		case '2': // ��������� �������
			Fun17();
			break;
		case '3': // �����
			break;
		default:
			printf("������� ������������ ��������.\n");
			_getch();
		}
	} while (ch1 != 3);
}

void Fun3() {
	Casuarius *cas;
	cas = new Casuarius();
	RandCas(cas);
	AddCas(cas);
}

void Fun4() {
	Dromaius_novaehollandiae *dr;
	dr = new Dromaius_novaehollandiae();
	RandDr(dr);
	AddDr(dr);
}

char Fun5() {
	Menu_1();
	char ch2 = _getch();
	printf("%c\n", ch2);
	return ch2;
}

char Fun6() {
	Menu1();
	char ch = _getch();
	printf("%c\n", ch);
	return ch;
}

void Fun7() {
	switch (Fun6()) {
	case '1': // �������
		Fun3();
		break;
	case '2': // ���
		Fun4();
		break;
	default:
		printf("������� ������������ ��������.\n");
		_getch();
	}
}

void Fun8(char ch) {
	switch (ch) {
	case '1': // ���������� � ���������
		Fun7();
		break;
	case '2': // �������� �� ���������
		RemoveCa();
		break;
	case '3': // ����� �������
		MethodCa();
		break;
	case '4': // ����� ��������
		PropertyCa();
		break;
	case '5': // �������� ���������
		ShowCa();
		break;
	default:
		printf("������� ������������ ��������.\n");
		_getch();
	}
}

void Fun9() {
	char ch = Fun5();
	Fun8(ch);
}

char Fun10() {
	Menu2();
	char ch2 = _getch();
	printf("%c\n", ch2);
	return ch2;
}

void Fun11() {
	Accipiter_striatus *acc;
	acc = new Accipiter_striatus();
	RandAcc(acc);
	AddAcc(acc);
}

void Fun12() {
	Accipiter_gundlachi *acg;
	acg = new Accipiter_gundlachi();
	RandAcg(acg);
	AddAcg(acg);
}

void Fun13() {
	Accipiter_nisus *acn;
	acn = new Accipiter_nisus();
	RandAcn(acn);
	AddAcn(acn);
}

void Fun14(char ch) {
	switch (ch) {
	case '1': // ��������� ������
		Fun11();
		break;
	case '2': // ��������� ������
		Fun12();
		break;
	case '3': // ������-������������
		Fun13();
		break;
	default:
		printf("������� ������������ ��������.\n");
		_getch();
	}
}

void Fun15() {
	char ch = Fun10();
	Fun14(ch);
}

void Fun16(char ch) {
	switch (ch) {
	case '1': // ���������� � ���������
		Fun15();
		break;
	case '2': // �������� �� ���������
		RemoveCb();
		break;
	case '3': // ����� �������
		MethodCb();
		break;
	case '4': // ����� ��������
		PropertyCb();
		break;
	case '5': // �������� ���������
		ShowCb();
		break;
	default:
		printf("������� ������������ ��������.\n");
		_getch();
	}
}

void Fun17() {
	char ch  = Fun5();
	Fun16(ch);
}
