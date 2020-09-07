#ifndef GESTORHS_H
#define GESTORHS_H
#include <vector>
#include <algorithm>
#include "horas.h"

class GestorHs
{
private:
    std::vector<Horas> horas;
public:
    GestorHs();
    void setHs(Horas hs);
    Horas getMax();
    Horas getMin();
    bool hayHs();
};

#endif // GESTORHS_H
