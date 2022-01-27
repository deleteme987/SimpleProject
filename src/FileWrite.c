#include <stdio.h>

main() {
	
   // Added this comment, (as well as thecode itself   
   
   FILE *fp;

   fp = fopen("/tmp/test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   
   // Add some simple types:
   double pi = 3.1415962;
   double n = 3.0;
}