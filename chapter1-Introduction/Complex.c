typedef struct{
    float realpart;              /*实部*/
    float imagpart;              /*虚部*/
}Complex                         /*定义复数抽象类型*/

void assign(Complex *A,float real,float imag);      /*赋值*/
void add(Complex *A,float real,float imag);         /*A + B*/
void minus(Complex *A,float real,float imag);       /*A - B*/
void multiply(Complex *A,float real,float imag);    /*A * B*/
void divide(Complex *A,float real,float imag);      /*A / B*/


void assign(Complex *A,float real,float imag){
    A->realpart = real;                         /*实部赋值*/
    A->imagpart = imag;                         /*虚部赋值*/
}                                               /*End of assign()*/

void add(Complex *c,Complex A,Complex B){       /*c = A + B*/
    c->realpart = A.realpart + B.realpart;      /*实部相加*/
    c->imagpart = A.imagpart + B.imagpart;      /*虚部相加*/
}                                               /*End of add()*/

......


#include <stdio.h>
... ...
void main(){
    ... ...
    complex z1,z2,z3,z4,z;
    float RealPart,ImagPart;
    assign(z1,8.0,6.0);        //构造复数z1
    assign(z2,4.0,3.0);        //构造复数z2
    add(z1,z2,z3);             //两个复数相加
    multiply(z1,z2,z4);        //两个复数相乘
    if (divide(z4,z3,z)){
        GetReal(z,RealPart);
        GetImag(z,ImagPart);
    }//if
    ... ...
}
