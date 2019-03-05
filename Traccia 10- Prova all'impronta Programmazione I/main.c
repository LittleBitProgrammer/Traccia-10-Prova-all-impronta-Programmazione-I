//
//  main.c
//  Traccia 10- Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 18/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

//Sviluppare una function C che, data come parametro di input una stringa che rappresenta un testo in italiano, determina e restituisce come parametro di output il numero di parole che iniziano con a e terminano con e contenute nel testo. Nel testo le parole sono separate da un unico spazio.
#include <stdio.h>
#include <string.h>

int wordWithAandE(char *);

int main(int argc, const char * argv[]) {
    int numbers_of_are;
    char phrase[50];
    
    printf("inserisci la frase:\n");
    fgets(phrase, 4096, stdin);
    
    numbers_of_are  = wordWithAandE(phrase);
    printf("parole che iniziano con a e finiscono con e sono = %d\n", numbers_of_are);
    
    return 0;
}

int wordWithAandE(char *word){
    int i = 0;
    char last;
    char separators[] = {' ','\0','\t','\n'};
    char *token = strtok(word, separators);
    
    while (token != NULL) {
        
        last = token[strlen(token)-1];
        
        if (last == 'e' && token[0] == 'a') {
            i++;
        }
        token = strtok(NULL," \n");
    }
    return i;
}
