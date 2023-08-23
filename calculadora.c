#include <stdio.h>

int main(){ 

    int valor1;
    int valor2; 
    int resultado;
    char operacao;

    printf("Insira uma operacao: \n");
    scanf("%c", &operacao);

    printf("Insira 2 valores:\n");
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2: \n");
    scanf("%d", &valor2);

if(operacao == '+'){
    resultado = valor1 + valor2;
    }

else if(operacao == '-'){
    resultado = valor1 - valor2;
    }

else if(operacao == '*'){
    resultado = valor1 * valor2;
    }

else if(operacao == '/'){
    resultado = valor1 / valor2;
    }

    printf("reultado: %d\n", resultado);
    printf("operacao: %c\n", operacao);
    
    


  

}


// SOMA: valor1 + valor2 
// SUBTRAÇÃO: valor1 + valor2 
// MULTIPLICAÇÃO: valor1 + valor2
// DIVISÃO: /
// DIVISÃO COM/ PARA DESCOBRIR RESTOS: %
//PARA INCREMENTAR VALORES ou DECREMENTAR: valor1 = valor1 + 1; 
//ou: valor1++ valor1--





