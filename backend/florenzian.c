#include "florenzian.h"
#include <math.h>
#include <stdlib.h>

double addizione(double a, double b) { return a + b; }
double sottrazione(double a, double b) { return a - b; }
double moltiplicazione(double a, double b) { return a * b; }
double divisione(double a, double b) { return b != 0 ? a / b : 0; }
double modulo(double a, double b) { return b != 0 ? fmod(a, b) : 0; }
double esponenziazione(double a, double b) { return pow(a, b); }
double media(double a, double b) { return (a + b) / 2.0; }
double massimo(double a, double b) { return (a > b) ? a : b; }
double minimo(double a, double b) { return (a < b) ? a : b; }
double percentuale(double a, double b) { return (a / 100.0) * b; }
double ipotenusa(double a, double b) { return sqrt((a * a) + (b * b)); }
double logaritmo(double a, double b) { return (a > 0 && b > 0 && b != 1) ? log(a) / log(b) : 0; }
double valore_assoluto(double a, double b) { return fabs(a - b); }

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int mcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return abs(a * b) / mcd(a, b);
}

int and_bit(int a, int b) { return a & b; }
int or_bit(int a, int b) { return a | b; }
int xor_bit(int a, int b) { return a ^ b; }
int shift_left(int a, int b) { return a << b; }
int shift_right(int a, int b) { return a >> b; }
double area_rettangolo(double a, double b) { return a * b; }
double area_triangolo(double a, double b) { return 0.5 * a * b; }
double interesse_semplice(double p, double r, double t) { return (p * r * t) / 100.0; }
double distanza(double a, double b) { return sqrt((a * a) + (b * b)); }
int uguaglianza(double a, double b) { return (a == b) ? 1 : 0; }