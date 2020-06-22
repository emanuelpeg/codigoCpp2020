#ifndef LUGAR_H
#define LUGAR_H


class Lugar
{
protected:
    char * nombre;
public:
    Lugar(char * nombre);
    virtual int getHabitantes() = 0;
};

#endif // LUGAR_H
