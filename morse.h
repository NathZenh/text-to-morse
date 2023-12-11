/*
 * morse.h
 *
 *  Created on: 02.12.2023
 *      Author: JumpStart
 */

#ifndef MORSE_H_
#define MORSE_H_

#define TIME_UNIT 300 /* [ms] */

/* morse encoding

  	  '.' : dot, a short signal (one time unit)
  	  '-' : dash, a long signal (three time units)
  	  ' ' : letter space, (three time units)
*/

#define MAX_ENTRY_LEN 8  /* 1 (char) + 1 (space) + 5 (longest code) + 1 ('\0') */
#define NUM_ENTRIES (('z'-'a'+1)+('9'-'0'+1)+2)

const char morse_dict[NUM_ENTRIES][MAX_ENTRY_LEN] = {
			{"a .-"},
			{"b -..."},
			{"c -.-."},
			{"d -.."},
			{"e ."},
			{"f ..-."},
			{"g --."},
			{"h ...."},
			{"i .."},
			{"j .---"},
			{"k -.-"},
			{"l .-.."},
			{"m --"},
			{"n -."},
			{"o ---"},
			{"p .--."},
			{"q --.-"},
			{"r .-."},
			{"s ..."},
			{"t -"},
			{"u ..-"},
			{"v ...-"},
			{"w .--"},
			{"x -..-"},
			{"y -.--"},
			{"z --.."},
			{"1 .----"},
			{"2 ..---"},
			{"3 ...--"},
			{"4 ....-"},
			{"5 ....."},
			{"6 -...."},
			{"7 --..."},
			{"8 ---.."},
			{"9 ----."},
			{"0 -----"},
			{"   "}, /* word space equals 2 letter spaces */
	};


#endif /* MORSE_H_ */
