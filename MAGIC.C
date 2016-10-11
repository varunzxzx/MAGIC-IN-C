/*####################################################
  #                           		             #
  #            	 	 MAGIC IN C                  #
  #                	  by VARUN                   #
  #						     #
  #    THIS PROGRAM IS FOR EDUCATIONAL PURPOSE ONLY  #
  #		  NOT TO MEANT FOR SALE		     #
  #		___________________________	     #
  #	     Uploaded on github.com/varunzxzx        #
  ####################################################*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void magic();
void anim();
void anim1();
int trick();
void print();
void print1();
void show();
void exitt();
char *p[10];
char *q[10];
int main()
{
	int n;
	clrscr();
	printf("\n\n");
	printf("\n                -------------- MAgIC TRiCK iN C ---------------");
	printf("\n\n");
	printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ");
	printf("\nX                                                                           X");
	printf("\nX       THIS PROGRAM USES BLACK MAGIC AS A SOURCE TO READ YOUR MIND.        X");
	printf("\nX                                                                           X");
	printf("\nX           THE PROGRAMMER IS NOT RESPONSIBLE FOR ANY HARM.                 X");
	printf("\nX                                                                           X");
	printf("\nX      HEART PATIENT AND CHILDREN BELOW 7 YRS SHOULD EXIT THE PROGRAM..     X");
	printf("\nX                                                                           X");
	printf("\nX                          1->    ENTER					    X");
	printf("\nX                                                                           X");
	printf("\nX                          2->    EXIT                                      X");
	printf("\nX                                                                           X");
	printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
	printf("\n\n\n    Choose an option: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1: magic();
		break;
		default: exitt();
	}
	return 0;
}
void magic()
{
	int ran,ch;
	anim();
	clrscr();
	printf("\n\n\n");
	printf("\n                -------------- MAgIC TRiCK iN C ---------------");
	printf("\n\n\n\n");
	printf("\n                                Pick a number");
	printf("\n");
	printf("\n                          1  2  3  4  5  6  7  8  9");
	printf("\n\n");
	printf("\n Press any key if picked...");
	getch();
	clrscr();
	printf("\n\n\n");
	printf("\n                -------------- MAgIC TRiCK iN C ---------------");
	printf("\n\n\n\n");
	printf("\n                       Multiply your picked number with 2");
	printf("\n\n");
	printf("\nPress any key if done...");
	getch();
	clrscr();
	printf("\n\n\n");
	printf("\n                -------------- MAgIC TRiCK iN C ---------------");
	printf("\n\n\n\n");
	ran=trick();
	printf("\n                      Add %d in your resultant number",ran);
	printf("\n\n");
	printf("\nPress any key if done...");
	getch();
	clrscr();
	printf("\n\n\n");
	printf("\n                -------------- MAgIC TRiCK iN C ---------------");
	printf("\n\n\n\n");
	printf("\n                      Divide the resultant number by 2");
	printf("\n\n");
	printf("\n Press any key if done...");
	getch();
	clrscr();
	printf("\n\n\n");
	printf("\n                -------------- MAgIC TRiCK iN C ---------------");
	printf("\n\n\n\n");
	printf("\n      Subtract the resultant number from the number you have picked first.");
	printf("\n\n");
	printf("\n Press any key if done...");
	getch();
	anim1();
	clrscr();
	printf("\n\n\n\n\n\n");
	printf("\n                             YOUR ");
	delay(700);
	printf("RESULTANT ");
	delay(700);
	printf("NUMBER ");
	delay(700);
	printf("IS: ");
	delay(2000);
	printf("\n\n");
	show(ran/2);
	printf("\n\n\n");
	printf("\nPress 1 ->  Start Again");
	printf("\n\nPress 2 ->  Exit         ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: magic();
		break;
		default: exitt();
	}
}
int trick()
{
	int a=9;
	do
	{
		randomize();
		a=random(50);
	}while(a<10);
	return a*2;
}
void anim1()
{
	int i;
	clrscr();
	for(i=1;i<5;i++)
	{
		printf("\n\n\n\n");
		printf("\n                            LET THE MAGIC BEGAN");
		delay(300);
		clrscr();
		delay(350);
	}
	for(i=1;i<5;i++)
	{
		printf("\n\n\n\n\n\n\n");
		printf("\n                            ANALYSING YOUR MIND");
		delay(300);
		clrscr();
		delay(350);
	}
	for(i=1;i<5;i++)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n                                ANSWER FOUND!!");
		delay(300);
		clrscr();
		delay(350);
	}
	clrscr();
	printf("\n\n\n\n\n");
	printf("\n                    Press any key to reveal the answer...");
	getch();
}
void anim()
{
	int i=1;
	char c='*';
	clrscr();
	for(i=1;i<5;i++)
	{
		printf("\n\n\n");
		printf("\n\n\n\n                   %c           STAY FOCUSED!!!              %c",c,c);
		delay(300);
		clrscr();
		delay(200);
	}
}
void show(int a)
{
	int b,count=0;
	b=a;
	if(a>=10)
	{
	while(count!=1)
	{
		a=a/10;
		print(a);
		count++;
	}
	count=0;
	while(count!=1)
	{
		b=b%10;
		print1(b);
		count++;
	}
	}
	else
	print(a);
}
void print(int ch)
{
	int x;
	char *a[]={
			"  #  ",
			" ##  ",
			"# #  ",
			"  #  ",
			"  #  ",
			"  #  ",
			"  #  ",
			"  #  ",
			"#####"
		     };
	char *b[]={
			"#####",
			"    #",
			"    #",
			"    #",
			"#####",
			"#    ",
			"#    ",
			"#    ",
			"#####"
		  };
	char *c[]={
			"#####",
			"    #",
			"    #",
			"    #",
			"#####",
			"    #",
			"    #",
			"    #",
			"#####"
		  };
	char *d[]={
			"#    ",
			"#    ",
			"#    ",
			"#    ",
			"#  # ",
			"#####",
			"   # ",
			"   # ",
			"   # "
		  };
	char *e[]={
			"#####",
			"#    ",
			"#    ",
			"#    ",
			"#####",
			"    #",
			"    #",
			"    #",
			"#####"
		  };
	char *f[]={
			"###  ",
			"#    ",
			"#    ",
			"#    ",
			"#####",
			"#   #",
			"#   #",
			"#   #",
			"#####"
		   };
	char *g[]={
			"######",
			"     #",
			"     #",
			"     #",
			"     #",
			"     #",
			"     #",
			"     #",
			"     #"
		   };
	char *h[]={
			"######",
			"#    #",
			"#    #",
			"#    #",
			"######",
			"#    #",
			"#    #",
			"#    #",
			"######"
		   };
	char *i[]={
			"######",
			"#    #",
			"#    #",
			"#    #",
			"######",
			"     #",
			"     #",
			"     #",
			"     #"
		   };
	char *j[]={
			"######",
			"#    #",
			"#    #",
			"#    #",
			"#    #",
			"#    #",
			"#    #",
			"#    #",
			"######"
		   };
	switch(ch)
	{
		case 1:
		for(x=0;x<9;x++)
		{
			p[x]=a[x];
		}
		break;
		case 2:
		for(x=0;x<9;x++)
		{
			p[x]=b[x];
		}
		break;
		case 3:
		for(x=0;x<9;x++)
		{
			p[x]=c[x];
		}
		break;
		case 4:
		for(x=0;x<9;x++)
		{
			p[x]=d[x];
		}
		break;
		case 5:
		for(x=0;x<9;x++)
		{
			p[x]=e[x];
		}
		break;
		case 6:
		for(x=0;x<9;x++)
		{
			p[x]=f[x];
		}
		break;
		case 7:
		for(x=0;x<9;x++)
		{

			p[x]=g[x];
		}
		break;
		case 8:
		for(x=0;x<9;x++)
		{
			p[x]=h[x];
		}
		break;
		case 9:
		for(x=0;x<9;x++)
		{
			p[x]=i[x];
		}
		break;
		default:
		for(x=0;x<9;x++)
		{
			p[x]=j[x];
		}
		break;
	}
}
void print1(int ch)
{
	int x;
	char *a[]={
			"  #  ",
			" ##  ",
			"# #  ",
			"  #  ",
			"  #  ",
			"  #  ",
			"  #  ",
			"  #  ",
			"#####"
		     };
	char *b[]={
			"#####",
			"    #",
			"    #",
			"    #",
			"#####",
			"#    ",
			"#    ",
			"#    ",
			"#####"
		  };
	char *c[]={
			"#####",
			"    #",
			"    #",
			"    #",
			"#####",
			"    #",
			"    #",
			"    #",
			"#####"
		  };
	char *d[]={
			"#    ",
			"#    ",
			"#    ",
			"#    ",
			"#  # ",
			"#####",
			"   # ",
			"   # ",
			"   # "
		  };
	char *e[]={
			"#####",
			"#    ",
			"#    ",
			"#    ",
			"#####",
			"    #",
			"    #",
			"    #",
			"#####"
		  };
	char *f[]={
			"###  ",
			"#    ",
			"#    ",
			"#    ",
			"#####",
			"#   #",
			"#   #",
			"#   #",
			"#####"
		   };
	char *g[]={
			"######",
			"     #",
			"     #",
			"     #",
			"     #",
			"     #",
			"     #",
			"     #",
			"     #"
		   };
	char *h[]={
			"######",
			"#    #",
			"#    #",
			"#    #",
			"######",
			"#    #",
			"#    #",
			"#    #",
			"######"
		   };
	char *i[]={
			"######",
			"#    #",
			"#    #",
			"#    #",
			"######",
			"     #",
			"     #",
			"     #",
			"     #"
		   };
	char *j[]={
			"######",
			"#    #",
			"#    #",
			"#    #",
			"#    #",
			"#    #",
			"#    #",
			"#    #",
			"######"
		   };
	switch(ch)
	{
		case 1:
		for(x=0;x<9;x++)
		{
			q[x]=a[x];
		}
		break;
		case 2:
		for(x=0;x<9;x++)
		{
			q[x]=b[x];
		}
		break;
		case 3:
		for(x=0;x<9;x++)
		{
			q[x]=c[x];
		}
		break;
		case 4:
		for(x=0;x<9;x++)
		{
			q[x]=d[x];
		}
		break;
		case 5:
		for(x=0;x<9;x++)
		{
			q[x]=e[x];
		}
		break;
		case 6:
		for(x=0;x<9;x++)
		{
			q[x]=f[x];
		}
		break;
		case 7:
		for(x=0;x<9;x++)
		{

			q[x]=g[x];
		}
		break;
		case 8:
		for(x=0;x<9;x++)
		{
			q[x]=h[x];
		}
		break;
		case 9:
		for(x=0;x<9;x++)
		{
			q[x]=i[x];
		}
		break;
		default:
		for(x=0;x<9;x++)
		{
			q[x]=j[x];
		}
		break;
	}
	for(x=0;x<9;x++)
	{
		printf("\n                               %s       %s",p[x],q[x]);
		delay(150);
	}

}
void exitt()
{
	clrscr();
	printf("\n\n\n\n");
	printf("\n                                     Keep Visiting");
	printf("\n");
	printf("\n                             http://noobsvilla.blogspot.com");
	delay(1000);
	printf("\n\n\n");
	printf("\n                                     Exiting...");
	delay(350);
	exit (0);
}
