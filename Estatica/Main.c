/*2)Escreva um programa para checar o balanceamento de símbolos. Dependendo da
linguagem utilizada, o conjunto dos símbolos pode variar. Por exemplo, em Pascal
seriam: begin/end, ( ), [ ], { }; enquanto que em C: /* /, ( ), [ ], { }.
Escreva um programa que seja capaz de avaliar uma string de expressão, contendo
caracteres como ( ), [ ], { }, e com o uso de TADs Pilhas, verifique se o balanceamento
esteja correto. Implemente uma solução com TAD Pilha Estática e outra Dinâmica.*/
#include <stdbool.h>
#include <stdio.h>
#include "Stack.h"


bool checkValidity(struct Stack* stack, char a){
    char value = popStack(stack);
    switch(a){
        case ')':
            return value == '(';
        case ']':
            return value == '[';
        case '}':
            return value == '{';
    }
}

int main(){
    char str[64];
    printf("Digite a string que deve ser testada(max 64 caracteres): ");
    scanf("%s",str);
    int index = 0;
    struct Stack* stack = createStack();
    char temp = str[index];
    do{
        switch (temp){
            case '(':
            case '[':
            case '{':
                pushStack(stack, temp);
            break;
            default:
                bool result = checkValidity(stack, temp);
                if(!result){
                    printf("A string não está formatada corretamente :(\n");
                    return 0;
                }
        }
        index++;
        temp = str[index];
    }while(temp != '\0');
    printf("A string está formatada corretamente :)\n");
    return 0;
}
