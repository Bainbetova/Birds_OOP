#ifndef Semnornis_ramphastinus_h
#define Semnornis_ramphastinus_h
#include "Semnornithidae.h"

class Semnornis_ramphastinus : public Semnornithidae {
public:
	/* ����������� */
	Semnornis_ramphastinus() {}
    void voice();
    void fly();
	/* �������� */
	int get_color() const;
	void print();
	char * type() const;
};

#endif // Semnornis ramphastinus_h
