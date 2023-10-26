#include <stdio.h>
#include <ctype.h>

// Procedimento em deixar tudo maíusculo
void transformarMaiusculo(char string1[], char string2[]) {
    int i = 0;
    while (string1[i] != '\0') {
        string2[i] = toupper(string1[i]); //toupper deixa cada letra maiusculo
        i++;
    }
    string2[i] = '\0';
}


// Procedimento em deixar tudo minúsculo
void transformarMinusculo(char string1[], char string2[]) {
    int i = 0;
    while (string1[i] != '\0') {
        string2[i] = tolower(string1[i]); //tolower deixa cada letra minusculo
        i++;
    }
    string2[i] = '\0';
}


int main() {
    char string1[] = {"Oi, Eu sou Você!, Isso mesmo kkkk"};
    char string2[50];

    transformarMaiusculo(string1, string2);
    printf("%s\n", string2);

    transformarMinusculo(string1, string2);
    printf("%s", string2);
}