#ifndef Sarcogyps_h
#define Sarcogyps_h
#include "Accipitrinae.h"

class Sarcogyps : public Accipitrinae {
public:
	/* Конструктор */
	Sarcogyps() {}
    void fly();
    void spread_wings();
    void voice();
	/* Свойства */
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Sarcogyps_h
