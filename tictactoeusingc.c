/*بسم الله الرحمن الرحيم */
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
char cr[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
//colors function
void blue () {
  printf("\033[1;34m");
}

void cyan() {
  printf("\033[1;36m");
}

void yellow() {
  printf("\033[1;33m");
}
void white() {
  printf("\033[1;37m");
}

void purple() {
  printf("\033[1;35m");
}
void green() {
  printf("\033[1;32m");
}

void reset () {
  printf("\033[0m");
}

//condition function
int cond();
//board function
void pb();
//main condition
int main()
{
   int ar[9]={1,2,3,4,5,6,7,8,9};
   char c[15]; 
   char d[15];
   int plnmb = 1,psi,con;
// words animations
 char a[]="\n\n \t\t\t\t\t Hello Players";
 char b[]="\n\n\n \t\t\t\t Welcome To The Gaming World";
 char f[]="\n\n\n \t\t\t Let's Play The Tic Tac Toe !!!!!!!!!!!!";
 int i,j,k,l,m,n,o,p;
 char e[]="\n\n\n \t\t\t Hello ";
 system("cls");
 printf("\n\n\n\n\n");
 for (i = 0; a[i]!=NULL; i++)
 { 
    blue();
    printf("%c",a[i]);
    usleep(100000);
 }
 for (j = 0; b[j]!=NULL; j++)
 {
    cyan();
    printf("%c",b[j]);
    usleep(100000);
 }
 for (p = 0; f[p]!=NULL; p++)
 {
    white();
    printf("%c",f[p]);
    usleep(100000);
 }
reset();
yellow();
printf("\n\n\n Enter The Username Of player 1 : ");
scanf("%s",&c);
printf("\n\n Enter The Username Of player 2 : ");
scanf("%s",&d);
reset();
printf("\n\n");
purple();
printf("\n \t\t\t\t\t\t The board follows ");
 printf("\n \t\t\t\t Press The Numbers shown as following the number for input ");
 reset();
 printf("\n\n\n\n");
   green();
    printf("\n  %d    |   %d\t |     %d",ar[0],ar[1],ar[2]);
    printf("\n-------------------------------");
    printf("\n  %d    |   %d\t |     %d",ar[3],ar[4],ar[5]);
    printf("\n-------------------------------");
    printf("\n  %d    |   %d\t |     %d",ar[6],ar[7],ar[8]);
printf("\n\n\n\n");
reset();
usleep(2000000);
do
{
   pb();
   plnmb = ( plnmb % 2) ? 1 : 2;
   switch (plnmb)
   {
   case 1:
      cyan();
      printf("\n\n\n\n");
      printf("\t\t\t%s Enter The Position You Want To Place : ",c);
      reset();
      scanf("%d",&psi);
      white();
      if(psi==1 && cr[0]== ' ')
      cr[0]=' X';
      else if (psi==2 && cr[1]== ' ')
      cr[1]=' X';
      else if (psi==3 && cr[2]== ' ')
      cr[2]=' X';
      else if (psi==4 && cr[3]== ' ')
      cr[3]=' X';
      else if (psi==5 && cr[4]== ' ')
      cr[4]=' X';
      else if (psi==6 && cr[5]== ' ')
      cr[5]=' X';
      else if (psi==7 && cr[6]== ' ')
      cr[6]=' X';
      else if (psi==8 && cr[7]== ' ')
      cr[7]=' X';
      else if (psi==9 && cr[8]== ' ')
      cr[8]=' X';
      break;
   reset();
   case 2:
   cyan();
   printf("\n\n\n\n");
   printf("\t\t\t %s Enter The Position You Want To Place : ",d);
      reset();
      scanf("%d",&psi);
      white();
      if(psi==1 && cr[0]== ' ')
      cr[0]=' O';
      else if (psi==2 && cr[1]== ' ')
      cr[1]=' O';
      else if (psi==3 && cr[2]== ' ')
      cr[2]=' O';
      else if (psi==4 && cr[3]== ' ')
      cr[3]=' O';
      else if (psi==5 && cr[4]== ' ') 
      cr[4]=' O';
      else if (psi==6 && cr[5]== ' ')
      cr[5]=' O';
      else if (psi==7 && cr[6]== ' ')
      cr[6]=' O';
      else if (psi==8 && cr[7]== ' ')
      cr[7]=' O';
      else if (psi==9 && cr[8]== ' ')
      cr[8]=' O';
    break;
    reset();
   default:
   printf("Invalid Move");
   }
   con = cond();
   plnmb ++;
} while (con==0);

pb();
--plnmb;
purple();
if (con==1 && plnmb==1)
{
printf("\n\n\n\n");
printf("\t\t\t\t %s Congrats You Won The Game",c);
printf("\n\n\n\n");
}
else if(con==1 && plnmb==2)
{
printf("\n\n\n\n");
printf("\t\t\t\t %s Congrats You Won The Game",d);
printf("\n\n\n\n");
}
else 
{
  printf("\n\n\n\n");
   printf("\t\t\t\t Oh Tough Competition and It Is A Draw");
  printf("\n\n\n\n");
}
reset();
 return 0;
}
int cond(int a)
{
 if (cr[0]=='X' && cr[1]=='X' && cr[2]=='X')
 {
   return 1;
 }
 else if (cr[3]=='X' && cr[4]=='X' && cr[5]=='X')
 {
   return 1;
 }
 else if (cr[6]=='X' && cr[7]=='X' && cr[8]=='X')
 {
   return 1;
 }
 else if (cr[0]=='X' && cr[3]=='X' && cr[6]=='X')
 {
   return 1;
 }
 else if (cr[1]=='X' && cr[4]=='X' && cr[7]=='X')
 {
   return 1;
 }
 else if (cr[2]=='X' && cr[5]=='X' && cr[8]=='X')
 {
   return 1;
 }
 else if (cr[0]=='X' && cr[4]=='X' && cr[8]=='X')
 {
   return 1;
 }
 else if (cr[2]=='X' && cr[4]=='X' && cr[6]=='X')
 {
   return 1;
 }
 
else if (cr[0]=='O' && cr[1]=='O' && cr[2]=='O')
 {
   return 1;
 }
 else if (cr[3]=='O' && cr[4]=='O' && cr[5]=='O')
 {
   return 1;
 }
 else if (cr[6]=='O' && cr[7]=='O' && cr[8]=='O')
 {
   return 1;
 }
 else if (cr[0]=='O' && cr[3]=='O' && cr[6]=='O')
 {
   return 1;
 }
 else if (cr[1]=='O' && cr[4]=='O' && cr[7]=='O')
 {
   return 1;
 }
 else if (cr[2]=='O' && cr[5]=='O' && cr[8]=='O')
 {
   return 1;
 }
 else if (cr[0]=='O' && cr[4]=='O' && cr[8]=='O')
 {
   return 1;
 }
 else if (cr[2]=='O' && cr[4]=='O' && cr[6]=='O')
 {
   return 1;
 }
 else if (cr[0]!=' ' && cr[1]!=' ' && cr[2]!=' ' && cr[3]!=' ' && cr[4]!=' ' && cr[5]!=' ' && cr[6]!=' ' && cr[7]!=' ' && cr[8]!=' ' )
 {
  /* code */
 }
 
else
{
   return 0;
}
}
void pb()
{
  green();
    printf("\n  %c    |   %c\t |     %c",cr[0],cr[1],cr[2]);
    printf("\n-------------------------------");
    printf("\n  %c    |   %c\t |     %c",cr[3],cr[4],cr[5]);
    printf("\n-------------------------------");
    printf("\n  %c    |   %c\t |     %c",cr[6],cr[7],cr[8]);
reset();
}
