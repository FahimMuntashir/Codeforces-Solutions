#include<stdio.h>
#include<math.h>
int main ()
{
     int  i,j,row,col,x1,x2,x3,x4,y1,y2,y3,y4,d,k=0;
     scanf("%d %d", &i, &j);
     char value, a[i][j];
     for(row=0;row<i;row++)
     {
         for(col=0;col<j;col++)
         {
             scanf(" %c", &a[row][col]);
         }
     }

          for(row=0;row<i;row++)
     {
         for(col=0;col<j;col++)
         {
             value=a[row][col];
             if(value=='*')
             {
                k++;
                if(k==1)
                {
                    x1=row;
                    y1=col;
                }
                else if(k==2)
                {
                    x2=row;
                    y2=col;
                }
                else if (k==3)
                {
                    x3=row;
                    y3=col;
                }
             }
         }
     }
     if(x1==x2 )
     {
         x4=x3;
          if(y3==y2)
       y4=y1;
       else
        y4=y2;

     }
     else if(x1==x3 )
     {
         x4=x2;
          if(y1==y2)
       y4=y3;
       else
        y4=y1;
     }
     else if (x2==x3)
     {
       x4=x1;
       if(y1==y2)
       y4=y3;
       else
        y4=y2;
     }
      printf("%d %d ",x4+1, y4+1);
     return 0;
}