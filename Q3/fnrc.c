#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length){
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    

    for (int x = 0; x < length; ++x){
    	
    	int y = 0;
    	for (int z = 0; z < length; ++z){

    		if(sentence[z] == sentence[x]){
    			y++;
    			continue;
    		}

    	}

    	if(y == 1){
    		printf("A primeira letra nao repetida na palavra %s é: %c",sentence,sentence[x]);
    		break;
    	}
    }
    
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}
