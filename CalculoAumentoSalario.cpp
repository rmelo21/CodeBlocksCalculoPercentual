
#include <stdio.h>
#include <math.h>

int main () {

    float salario, percentualAumento, novoSalario;


    printf("\nDigite o salario do funcionario!!!\n");

    scanf("%f%*c",&salario);


    printf("\nDigite o percentual de reajuste salarial!!!\n");

    scanf("%f%*c",&percentualAumento);


    novoSalario = salario + (salario * (percentualAumento/100));



    printf("\nO valor do salario com reajuste = %f\n", novoSalario);


    getchar();
    return 0;

}
