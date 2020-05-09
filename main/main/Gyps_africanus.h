#ifndef Gyps_africanus_h
#define Gyps_africanus_h
#include "Gyps.h"
#include "stdafx.h"

class Gyps_africanus : public Gyps {
public:
	/* ����������� */
	Gyps_africanus() {}
    void fly();
    void spread_wings();
    void voice();
	/* �������� */
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Gyps_africanus_h
