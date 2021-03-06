/*
 Modulo de defincion de DtSpinning
 */

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_DTSPINNING_H
#define _CLASS_DTSPINNING_H

#include <iostream>
#include <string>

#include "DtClase.h"

class DtSpinning: public DtClase {
private:
  int cantBicicletas;
public:
  DtSpinning(int, std::string, Turno, int);
  int getcantBicicletas();
  void setcantBicicletas(int);
  ~DtSpinning();
  virtual int cupo();
  friend std::ostream& operator<<(std::ostream&, DtSpinning &dt);

};

#endif
