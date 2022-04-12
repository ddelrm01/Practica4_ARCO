#include "funcionalidad.h"

int funcionalidad::convertRealToUnion(float number, float number2, int op){
    bool inf = false;
    bool NaN = false;
    float total;
    vector <int> vectorIEEE;

    union Code op1;
    union Code op2;
    /* Convert the first number */
    op1.numero = number;
    op1.bitfield.sign;
    op1.bitfield.expo;
    op1.bitfield.partFrac;

    /* Convert the second number */
    op2.numero = number2;
    op2.bitfield.sign;
    op2.bitfield.expo;
    op2.bitfield.partFrac;


    switch (op) {
            case 0:{
                if(op1.bitfield.expo>=255 || op2.bitfield.expo>=255){
                    /*inf*/
                    total = 0.0;
                    if(op1.numero==-op2.numero){
                        NaN = true;
                    }else{
                        inf = true  ;
                    }
                }else{
                    if (op1.numero == 0) {
                        total = op2.numero;
                    }else{
                        if (op2.numero == 0) {
                            total = op1.numero;
                        }else{
                            if(op1.numero!=-op2.numero){
                                vectorIEEE = operationAddition(op1, op2);
                                total = binaryToDecimal(vectorIEEE);
                            }else{
                                total = 0.0;
                            }
                        }
                    }

                }
                break;
            }
       }
    return total;
}


float funcionalidad:: binaryToDecimal(vector <int> v){

}



