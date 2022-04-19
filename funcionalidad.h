#ifndef funcionalidad_H
#define funcionalidad_H

#include <QDialog>
#include <stdio.h>
#include <string>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <QString>

union Code {

    struct{
        unsigned int partFrac : 23;
        unsigned int exp : 8;
        unsigned int sig : 1;
    }bitfield;

    float num;
    unsigned int numerox;
};

using namespace std;

namespace Ui {
class funcionalidad;
}

class funcionalidad : public QDialog
{
    Q_OBJECT

public:

    /* MÉTODOS VARIOS */
    funcionalidad();
    int convertRealToUnion(float number, float number2, int op);
    float binaryToDecimal(vector <int> v);
    vector <int> opSuma(union Code op1, union Code op2);
private:
    Ui::funcionalidad *ui;

    double total = 0.0;
    vector<int> vectorIEEE;

    union Code res;
    vector <int> operator1;
    vector <int> operator2;

    bool NaN = false;
    bool inf = false;

    int c1;

    struct{
          int sign;
          vector<int>  exponente;
          vector<int>  mantisa;
          vector<int>  partfrac;
    }result;
};

#endif // funcionalidad_H
