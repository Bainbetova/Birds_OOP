#ifndef Campephilus_principalis_h
#define Campephilus_principalis_h
#include "Campephilus.h"

class Campephilus_principalis : public Campephilus {
public:
	/* ����������� */
	Campephilus_principalis() {}
	/* ������ */
    void voice();
    void fly();
	/*��������*/
	int get_color() const;
	void print();
	char * type() const;
};

#endif // Campephilus_principalis_h
