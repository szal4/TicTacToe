#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int count =0;
void gamename()
{
    printf("\n\t\t       Tic_Tac_Toe");
}
void show()
{
    printf("\n\n\t\t\t|--|--|--|\n");
    printf("\t\t\t|%c |%c |%c |\n",a[0],a[1],a[2]);
    printf("\t\t\t|--|--|--|\n");
    printf("\t\t\t|%c |%c |%c |\n",a[3],a[4],a[5]);
    printf("\t\t\t|--|--|--|\n");
    printf("\t\t\t|%c |%c |%c |\n",a[6],a[7],a[8]);
    printf("\t\t\t|--|--|--|\n");
    return 0;
}
void inputSymbol()
{
    printf("\nPlayer 1 symbol :x:\nPlayer 2 symbol :0:\n");
   return 0;
}

void play()
{
    char p,s;
    printf("\nEnter position and symbol for the player\n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    change(p,s);
    count+=1;
}
void change(char p,char s)
{
    for(int i=0;i<9;i++)
    {
        if(a[i]==p)
        {
            a[i]=s;
        }
    }
}
int end()  //incomplete  4/6
{
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
    {
      return 100;
    }
  else  if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
  {
      return 200;
  }
  else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
  {
      return 100;
  }
  else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
  {
      return 200;
  }
  else if((a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
  {
      return 100;
  }
  else if((a[2]=='0'&&a[5]=='0')&&(a[8]=='0'||a[2]=='0'&&a[4]=='0'&&a[6]=='0'))
  {
      return 200;
  }
   else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
  {
      return 100;
  }
  else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
  {
      return 200;
  }
  else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
  {
      return 100;
  }
  else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
  {
      return 200;
  }
  else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
  {
      return 100;
  }
  else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
  {
      return 200;
  }
  return 300;
  }
void main(void)
{
  char ch;
  labell:
   gamename();
   show();
   inputSymbol();
   play();
   show();
   label:

   play();
   int k=end();
   show();
if(count<9)
{
   if(k==100){
    printf("\nPlayer 1 win");
    count =0;
   }
   else if(k==200){
    printf("\nPlayer 2 win");
    count=0;
   }
   else{
   goto label;
   }
}
   else{
    printf("\ngame draw\n");
   }
   printf("\nDo you want to continue playing if yes enter->y if no enter->n\n");
   fflush(stdin);
   scanf("%c",&ch);
   if(ch=='y'||ch=='Y')
   {
       printf("---------------------------------------------------------------");
       a[0]='1';
       a[1]='2';
       a[2]='3';
       a[3]='4';
       a[4]='5';
       a[5]='6';
       a[6]='7';
       a[7]='8';
       a[8]='9';
       goto labell;
   }

   return 0;
}
