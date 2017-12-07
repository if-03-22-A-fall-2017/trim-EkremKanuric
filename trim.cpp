/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
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
 void trim	(	const char * source,char * trimmed_string)
 {
   bool x = false;
   int count = 0;
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
   //check when to end copy array
   x = false;
   int count1 = count;
   while(!x)
   {
     if (source[count1] == ' ' && source[count1 + 1] == ' ')
     {
       x = true;
     }
     else
     {
       count1++;
     }
   }
   char array[STRLEN];
   for (int i = count; i < count1; i++)
   {
     array[i - count] = source[i];
   }
   strcpy(trimmed_string, array);
 }
