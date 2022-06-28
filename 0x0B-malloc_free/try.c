#include <stdio.h> 
int size(int w, int h) {     int a[w][h];     int i, j;     printf("total size of array is %ld bytes\n", sizeof(a));     printf("can take up to %ld elements\n", sizeof(a)/sizeof(int));      for (i = 0; i < h; i++)     {         for (j = 0; j < w; j++)         {             printf("0");             printf(" ");         }                 printf("\n");     } }  
	int main() {     size(6, 4);     size(3, 5);      return 0; }
