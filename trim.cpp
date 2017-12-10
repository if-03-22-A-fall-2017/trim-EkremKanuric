/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #define SOURCE_LENGTH strlen(source)
 void trim	(	const char * source,char * trimmed_string)
 {
   int length = 0;
   for (int i = 0; i < SOURCE_LENGTH; i++) {
     if (source[i] >= 65 && source[i] <= 122 || source[i] == 32) {
       length++;
     }
   }

   bool x = false;
   int count = 0;
   int count1 = length;
   //check where to begin the trimmed_array
   while (!x)
   {
     if (source[count] == ' ')
     {
         count++;
     }
     else
     {
       x = true;
     }
   }
   x = false;
   while (!x)
   {
     if (source[count1] == ' ')
     {
         count1--;
     }
     else
     {
       x = true;
     }
   }
   char array[STRLEN];
   for (int i = 0; i < count1;i++) {
     array[i] = source[i+count];
   }
   strcpy(trimmed_string,array);
 }
