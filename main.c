#include <stdio.h>
#include <stdlib.h>
main()
{ const int row = 6;
const int col = 8;
int ma[row][col],m[row][col], i,j,l,k, step, r,d,u;
i=0;j=0;k=0;step=0;

 for (i = 0; i < row; ++i)
       for (j = 0; j < col; ++j) {m[i][j] =abs(i-j)+1;};

        for (i = 0; i < row; ++i, printf("\n"))
       for (j = 0; j < col; ++j) printf("%4d",m[i][j]);

do
{
for (r = step; r < col-step; ++r) {k++;if(k>row*col) break;ma[step][r]=k; }
for (d = step; d < row-step-1; ++d) {k++;if(k>row*col) break;
ma[d+1][col-1-step]=k;}
for (l = step; l < col-step-1; ++l) {k++;if(k>row*col) break;
ma[row-1-step][col-2-l]=k;}
for (u = step; u < row-step-2; ++u) {k++; if(k>row*col)
break;ma[row-u-2][step]=k;}
step = step+1;
}
while(k<row*col) ;

for (i = 0; i < row; ++i){
for (j = 0; j < col; ++j){printf("%4d",ma[i][j]);}
printf("\n"); }

return 0;
}
