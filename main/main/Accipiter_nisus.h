#ifndef Accipiter_nisus_h
#define Accipiter_nisus_h
#include "Accipiter.h"

class Accipiter_nisus : public Accipiter {
public:
	/* ����������� */
	 Accipiter_nisus() {}
	/* ������ */
    void fly();
    void spread_wings();
	void voice(); 
	/* �������� */
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Accipiter_nisus_h
