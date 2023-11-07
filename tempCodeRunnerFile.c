// Compilateur C en ligne pour exécuter des programmes C en ligne
#include <stdio.h>
 char afficher_menu();
 int main (){
    char option = afficher_menu();
    printf("entrer votre choix :");
    scanf("%c",option);
     switch(option){
    case 'm' :printf("votre choix est multiplication");break;
    case 'd' : printf("votre choix est division");break;
    default : printf("votre choix invalide");break;
    
     return 0;
    }
 }
  char afficher_menu(){
  char choix;
    printf("Exemple de menu: \n");
    printf(" Faites votre choix (Tapez la lettre entre parenthèses):\n");
    printf("- Division réelle de deux entiers (d) \n");
    printf(" - Table de multiplication (m)\n");
    scanf("%c",&choix);
        return choix ;
    }

    
    
 
   

   