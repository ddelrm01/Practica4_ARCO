#include "funcionalidad.h"

funcionalidad :: funcionalidad(){

}

int funcionalidad::convertRealToUnion(float numero, float numero2, int op){
    bool inf = false;
    bool NaN = false;
    float total;
    vector <int> vectorIEEE;

    union Code op1;
    union Code op2;
    /* Convert the first number */
    op1.num = numero;
    op1.bitfield.sig;
    op1.bitfield.exp;
    op1.bitfield.partFrac;

    /* Convert the second number */
    op1.num = numero2;
    op1.bitfield.sig;
    op1.bitfield.exp;
    op1.bitfield.partFrac;


    switch (op) {
            case 0:{
                if(op1.bitfield.exp>=255 || op2.bitfield.exp>=255){
                    /*inf*/
                    total = 0.0;
                    if(op1.num==-op2.num){
                        NaN = true;
                    }else{
                        inf = true  ;
                    }
                }else{
                    if (op1.num == 0) {
                        total = op2.num;
                    }else{
                        if (op2.num == 0) {
                            total = op1.num;
                        }else{
                            if(op1.num!=-op2.num){
                                vectorIEEE = opSuma(op1, op2);
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


vector<int> funcionalidad::opSuma(union Code op1, union Code op2){

}
