#ifndef Accipiter_gundlachi_h
#define Accipiter_gundlachi_h

#include "Accipiter.h"

class Accipiter_gundlachi : public Accipiter {
public:
	 /* ����������� */
	Accipiter_gundlachi() {}
	/* ������ */
    void fly();
    void spread_wings();
	void voice();
	/* �������� */
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Accipiter_gundlachi_h
