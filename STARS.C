#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,k,star_count;
clrscr();
Jump:
printf("\nEnter the number of stars:");
scanf("%d",&star_count);
if((star_count%2)!=0)
{
 for(i=0;i<star_count;i++)
  {
   for(j=star_count-1;j>i;j--)
   {
    printf(" ");
   }
   for(k=0;k<=i;k++)
   {
    printf("* ");
   }
   printf("\n");
  }
 for(i=star_count-1;i>=1;i--)
 {
  for(j=star_count-1;j>=i;j--)
  {
   printf(" ");
  }
  for(k=i;k>=1;k--)
  {
   printf("* ");
  }
  printf("\n");
 }
}
else
{
 printf("\nWarning!!!\nEnter any odd number");
 goto Jump;
}
getch();
}
