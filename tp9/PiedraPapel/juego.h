#ifndef JUEGO_H
#define JUEGO_H


class Juego
{
private:
    int puntaje = 0;
public:
    Juego();
    int verificar(int valor);
    int getPuntaje();
};

#endif // JUEGO_H
