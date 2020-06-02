#ifndef SECUENCIA_H
#define SECUENCIA_H


class Secuencia
{
protected:
    int nros[4];
public:
    Secuencia();
    virtual void generar() = 0;
    int* getNros();
};

#endif // SECUENCIA_H
