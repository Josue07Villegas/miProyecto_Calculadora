#include <stdio.h>
void suma(){
float a,b;
printf("ingrese el primer numero: ");
scanf("%e",&a);
printf("ingrese el segundo numero: ");
scanf("%e",&b);
printf("el resultado es de la operacion: %f+%f = %f",a,b,(a+b));
}
float resta(float a, float b){
printf("el resultado es de la operacion: %f-%f = %f",a,b,(a-b));
}
int main() {
float a,b;
int choice=0;
printf("calculadora sencilla \n selecione un numero para realizar la operacion: \n 1.Suma \n 2.resta \n 3.Multiplicacion \n 4.Division\n");
scanf("%d",&choice);
if (choice == 2 || choice == 4){
printf("ingrese el primer numero: ");
scanf("%e",&a);
printf("ingrese el segundo numero: ");
scanf("%e",&b);
}
switch(choice){
case 1: suma();break;
case 2: resta(a,b); break;
}

return 0;
}
