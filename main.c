#include <stdio.h>

main()
{

   const int row = 4;
   const int col = 3;
   int ma[row][col], i,j;
   int mo[row*col];
   int k;
   k=0;
   for (i = 0; i < row; ++i)
       for (j = 0; j < col; ++j) ma[i][j] = i*col + j;

   for (i = 0; i < row; ++i, printf("\n"))
       for (j = 0; j < col; ++j) printf("%4d",ma[i][j]);

       for (i = 0; i < row; ++i)
      for (j = 0; j < col; ++j) {mo[i*col + j   ]=ma[i][j];}

       for (k = 0; k < row*col; ++k)
      printf("%4d",mo[k]);
       printf("\n");
 for (k = 0; k < col*row; ++k)
 mo[k]=k;
i=0;j=0;
 for (k = 0; k < row*col; ++k)
      printf("%4d",mo[k]);
      printf("\n");
       k=0;
    for (k = 0; k < row*col; ++k)
        {ma[  k/col ][  k%col  ] = mo[k];if(j<col)j++;else j=0;}

        for (i = 0; i < row; ++i, printf("\n"))
       for (j = 0; j < col; ++j) printf("%4d",ma[i][j]);

   return 0;
}
