#include "gestorhs.h"

GestorHs::GestorHs()
{

}

void GestorHs::setHs(Horas hs){
    this->horas.push_back(hs);
}
Horas GestorHs::getMax(){
    std::sort(this->horas.begin(),this->horas.end(),
             [](Horas hs1, Horas hs2) -> bool  { return hs1.getCantHs() < hs2.getCantHs(); });
    return this->horas[0];
}
Horas GestorHs::getMin() {
    std::sort(this->horas.begin(),this->horas.end(),
             [](Horas hs1, Horas hs2) -> bool  { return hs1.getCantHs() > hs2.getCantHs(); });
    return this->horas[0];
}
bool GestorHs::hayHs(){
    return this->horas.size() > 0;
}
