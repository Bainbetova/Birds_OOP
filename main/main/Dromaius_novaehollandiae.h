#ifndef Dromaius_novaehollandiae_h
#define Dromaius_novaehollandiae_h
#include "Casuariiformes.h"

class Dromaius_novaehollandiae : public Casuariiformes {
public:
	/* ����������� */
	Dromaius_novaehollandiae() {}
	/* ������ */
    void voice();
    void go_ahead();
	/*��������*/
	double get_weight() const;
	double get_size_egg() const;
	void print();
	char * type() const;
};

#endif // Dromaius_novaehollandiae_h
