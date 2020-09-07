#ifndef HORAS_H
#define HORAS_H


class Horas
{
private:
    long dni = 0;
    int cantidadHs = 0;
public:
    Horas(long dni, int cantidadHs);
    long getDNI();
    int getCantHs();
};

#endif // HORAS_H
