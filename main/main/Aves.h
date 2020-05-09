#ifndef Aves_h
#define Aves_h
#include <string.h>
#define MAX_NAME 15
/* ������� ���� "�����" */
class Aves {
	char name[MAX_NAME + 1]; // ��� �������
public:
    int id; // �����
    /* ����������� */
	Aves() {}
    virtual void voice() = 0;
	virtual double get_weight() const = 0;
    void set_name(char * s) {
		int len = strlen(s);
		len = len > MAX_NAME ? MAX_NAME : len;
		for (int i = 0; i < len; i++) name[i] = s[i]; name[len] = 0;
	}
	char * get_name() {
		return name;
	}
	virtual char * type() const = 0; // ����������� �������, ���������� �������� ������
};
#endif // Aves_h
