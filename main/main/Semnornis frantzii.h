#ifndef Semnornis_frantzii_h
#define Semnornis_frantzii_h
#include "Semnornithidae.h"

class Semnornis_frantzii : public Semnornithidae {
public:
	/* ����������� */
	Semnornis_frantzii() {}
    void voice();
    void fly();
	/* �������� */
	int get_color() const;
	void print();
	char * type() const;
};

#endif // Semnornis frantzii_h
