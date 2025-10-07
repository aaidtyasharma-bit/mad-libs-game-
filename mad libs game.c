#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    // mad libs game in c


    char noun [50]  = " " ;
    char verb [50]  = " " ; 
    char adjective1 [50]  = " " ;
    char adjective2 [50]  = " " ;
    char adjective3 [50]  = " " ;
    char adverb [50]  = " " ;


    printf("Enter an adjective(description) "); 
    fgets(adjective1, sizeof(adjective1), stdin) ;  
    adjective1[strlen(adjective1) - 1] = '\0' ; // remove newline character
    printf("Enter a noun(person, place or thing) ") ;
    fgets(noun, sizeof(noun), stdin) ;
    noun[strlen(noun) - 1] = '\0' ; // remove newline character
    printf("Enter a verb(ending with ing) ") ;
    fgets(verb, sizeof(verb), stdin) ;
    verb[strlen(verb) - 1] = '\0' ; // remove newline character
    printf("enter an adjective (description) ") ;
    fgets(adjective2, sizeof(adjective2), stdin) ;
    adjective2[strlen(adjective2) - 1] = '\0' ; // remove newline character
   
printf("%s the %s %s %s %s %s in the world.\n", noun, adjective1, verb, adverb, adjective2, adjective3) ;
 
    return 0;
}