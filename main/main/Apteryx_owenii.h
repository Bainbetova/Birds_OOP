#ifndef Apteryx_owenii_h
#define Apteryx_owenii_h
#include "Apterygiformes.h"

class Apteryx_owenii : public Apterygiformes {
 public:
	 /* ����������� */
	 Apteryx_owenii() {}
	 /* ����� */
	 void voice();
	 /*��������*/
	 double get_weight() const;
	 double get_size_egg() const;
	 void print();
	 char * type() const;
};

#endif // Apteryx_owenii_h
