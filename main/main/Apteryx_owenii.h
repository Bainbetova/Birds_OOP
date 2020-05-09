#ifndef Apteryx_owenii_h
#define Apteryx_owenii_h
#include "Apterygiformes.h"

class Apteryx_owenii : public Apterygiformes {
 public:
	 /* Конструктор */
	 Apteryx_owenii() {}
	 /* Метод */
	 void voice();
	 /*Свойства*/
	 double get_weight() const;
	 double get_size_egg() const;
	 void print();
	 char * type() const;
};

#endif // Apteryx_owenii_h
