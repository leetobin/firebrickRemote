/*
 * lcd2usb.c - test application for the lcd2usb interface
 *             http://www.harbaum.org/till/lcd2usb
 *
 * Modified for use in FIREBrick by Pavel Gladyshev, DigitalFIRE
 *             http://digitalfire.ucd.ie/firebrick
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printUsage() 
{
   printf ("\nUsage: \n");
   printf ("   lcd             - without any parameters will act like TEE\n");
   printf ("   lcd c           - erase LCD screen\n");
   printf ("   lcd g 2 5       - set cursor to the row 2 column 5\n");
   printf ("   lcd p \"Hello\"   - print Hello message on LCD and exit\n");
   printf ("   lcd o 123       - set LCD cOntrast to 123 \n");
   printf ("   lcd b 123       - set LCD brightness to 123 \n\n");
}

int main(int argc, char *argv[]) {

 int x,y,curx;
 char c;
 char line[25];
 int input_window_width;
 
  
  if (argc == 1)
  {
     printUsage();
     exit(0);
  }

      switch(argv[1][0])
      {
         case 'o':   // Set Contrast
              break;
              
         case 'b':   // Set brightness
              break;
              
         case 'c':   // erase
		      printf("\033[2J");
              break;
              
         case 'g':   // Go To X,Y coordinates
              if (argc >= 4)
              {    
                  x=atoi(argv[2]);
                  y=atoi(argv[3]);
		          printf("\033[%d;%dH",(y+1),(x+1));
			  }
              break;
              
         case 'p':   // Print message and exit
              if (argc >= 3)
              {
                  printf("%s",argv[2]);
              }
              break;
			  
		 case 'i':   // read line echoing to LCD   lcd i x y width
         case 'j':
		 if (argc >= 2)
              {  
                  scanf("%18s",line);			  
				  printf("%s",line);
			  }
              break;	  
			  		 
         default:   // Print usage message and exit
              printUsage();
      }

  return 0;
}
