#include "main.h"


 /**
       *  * Author: Paschal Malachy Esidem
       *    *   * Program: WinMingle Community C Training
       *      *    * Description: Writing a function that prints the alphabet, in lowercase, followed by a new line.
       *        *     */

void print_alphabet_x10(void) {

	        int i, c;
		for (i = 0; i < 10; i++)
		{
		        for (c = 'a'; c <= 'z'; c++) {
				                _putchar(c);
						    
		  	}
			_putchar('\n');
		}
}


