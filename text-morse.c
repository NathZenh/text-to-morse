/* your solution to miniproject sw12 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "board.h"

#include "morse.h"

#define MAX_CHARS 80  /* maximal number of characters */

#define XSTR(a) STR(a) /* get the value of a macro as string */
#define STR(a) #a      /* it's a bit tricky, don't worry too much about this ;-) */


int main(void) {
	init();
	/* request string from user */

	printf("\nenter string to be sent : ");
	char str[MAX_CHARS+1];
	const char* morseCodeForTarget = NULL;
	char* result = malloc(MAX_CHARS * NUM_ENTRIES);
	result[0] = '\0';

	scanf("%"XSTR(MAX_CHARS)"[^\n]%*c", str);  /* allow white spaces in input */

	/* get morse code from dictionary */
	for (int i = 0; i < MAX_CHARS+1; ++i) {
	    if (str[i] == '\0') {
	    	break;
	    }
	    for (int j = 0; j < NUM_ENTRIES; ++j) {
	    	/* search for the right character*/
	        if (morse_dict[j][0] == str[i]) {
	        	/* take only the morse code */
	        	morseCodeForTarget = morse_dict[j]+1;
	        	/* add the morse code to results */
	        	strcat(result, morseCodeForTarget);
	            break;
	        }
	    }
	}
    printf("%s\n", str);
    printf("%s\n", result);

	/* transmit as morse code sound output */
	for (int z = 0; z < MAX_CHARS * NUM_ENTRIES; ++z) {

		if (result[z] == '\0') {
	    	printf("FINISHED");
			break;
		}else if (result[z] == '.'){
			uint32_t t_now = get_ms_since_start();
			uint32_t t_end = t_now + TIME_UNIT;

			uint32_t t_prev = t_now;
			do {
				while ((t_now = get_ms_since_start()) == t_prev);

				set_output(PTD0, t_now & 0x1 ? high_level : low_level);

				t_prev = t_now;
			} while (t_now <= t_end);
		}else if (result[z] == '-'){
			uint32_t t_now = get_ms_since_start();
			uint32_t t_end = t_now + (3*TIME_UNIT);

			uint32_t t_prev = t_now;
			do {
				while ((t_now = get_ms_since_start()) == t_prev);

				set_output(PTD0, t_now & 0x1 ? high_level : low_level);

				t_prev = t_now;
			} while (t_now <= t_end);
		}else if (result[z] == ' '){
			uint32_t t_now = get_ms_since_start();
			uint32_t t_end = t_now + (3*TIME_UNIT);

			/* just stay silent */
			do {
				t_now = get_ms_since_start();
			} while (t_now <= t_end);
		}else {
		}
	}
	return(0);
}
