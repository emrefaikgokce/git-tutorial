#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <espl_lib.h>

int main ()
{
    int number_input;
	char *number_input_in_words;	
    bool continue_program = true;
    char *user_answer;

    while(continue_program) {
	    
        printf("Please enter a number: ");
	    scanf("%d", &number_input);
	
	    number_input_in_words = num_to_words(number_input);

	    printf("%s\n", number_input_in_words);		

    LOOP:{
	        printf("Do you wish to continue? (y/n): ");
            scanf(" %s", user_answer);
    
            if( !strcmp(user_answer, "y") ) {
                continue_program = true;
            }

            else if ( !strcmp (user_answer, "n") ) {
                continue_program = false;
            }
        
            else {
                printf ("Please enter y or n.\n");
                goto LOOP;
            }
         }
     }

	return 0;
}			

