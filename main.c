#include <stdio.h>
#include <stdlib.h>

void Adolescente(int anoAtual, int anoNascimento){
    int idade = anoAtual - anoNascimento;
     if (idade >= 11 && idade <= 18){
        printf("idade %d anos adolescente.\n", idade);
     }
}

int main()
{
    int anoAtual, anoNascimento;


    printf("Digite o ano atual:");
    scanf ("%d", &anoAtual);

    printf("Digite o ano de Nascimento:");
    scanf ("%d", &anoNascimento);

     Adolescente(anoAtual, anoNascimento);



    return 0;
}
