#include <stdio.h>
int main () {

    int i = 1;

    printf("***Torre move-se***\n");
    do { 
       printf("Para frente!\n"); // torre move 5 vezes para frente.
     i++; // evita o loop infinito.
   } while (i <= 5);

   // reiniciando
   int j = 1;

   printf("***Rainha move-se*** \n");
    while (j <= 8) {
    printf("Para esquerda!\n"); // rainha move 8 casas para esquerda.
    j++; 
}

    printf("***Bispo move-se***\n");
    for (i = 1; i <= 5; i++) // Bispo move-se 5 casas para diagonal direita.
    {   
    printf("%d - Diagonal-Direita\n", i);
    }
    printf("============================\n");
    printf("***Cavalo move-se***\n");

<<<<<<< HEAD:Movimentação peças Xadrez.c
return 0;
}
=======
    int MovimentoCavalo = 1;

    while (MovimentoCavalo <= 1)
    {
        for ( int k = 0; k <= 2; k++)
      {
        printf("Baixo\n");

       }

      printf("Esquerda!\n");
      MovimentoCavalo++;

    }
    
      




   printf("Novo commit\n");
    return 0;
}
>>>>>>> 4c9b962 (criei o printf):#include <stdio.c
