#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
void menu();
char name[20];
void ques()
{
int gdriver = DETECT,gmode;
initgraph(&gdriver, &gmode, "C:/TC/BGI");
sound(2000);
setcolor(1);
setlinestyle(2,1,1);
rectangle(55,12,570,80);
setcolor(6);
setlinestyle(0,1,1);
rectangle(65,150,260,200);
rectangle(65,275,260,325);
rectangle(350,150,545,200);
rectangle(350,275,545,325);
settextstyle(2,0,6);
setcolor(12);
setfillstyle(8,4);
}
void mid()
{
for(int i=1;i<38;i++)
{
clrscr();
gotoxy(i,12);
textcolor(i);
cout<<name<<"!!, ready for next question";
sound(i*100+2000);
delay(150);
}
nosound();
getch();
}
void end()
{
sound(2500);
for(int i=5;i<60;i++)
{
clrscr();
gotoxy(i,12);
textcolor(i);
cout<<"You are the Winner!!!!!";
delay(50);
}
getch();
nosound();
menu();
}
void Q30()
{
ques();
char a;
outtextxy(80,30,"Ques 30. CHARLIE was Apple's internal ");
outtextxy(155,30," code name for what ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Iphone 3G S");
outtextxy(80,290,"C. Iphone 4");
outtextxy(365,165,"B. Iphone 4S");
outtextxy(365,290,"D. Iphone 3G");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'A':case'a':outtextxy(80,380,"Your answer is correct");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();end();
case'B':case'b':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q30();
}}
void Q29()
{
ques();
char a;
outtextxy(80,15,"Ques 29.Who were Microsoft originally hired by");
outtextxy(155,30,"to develop an operating system?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Apple");
outtextxy(80,290,"C. Cisco");
outtextxy(365,165,"B. AMD ");
outtextxy(365,290,"D. IBM");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'D':case'd':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(75,280,6);getch();closegraph();mid();Q30();
case'B':case'b':case'C':case'c':case'a':case'A':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(75,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q29();
}}
void Q28()
{
ques();
char a;
outtextxy(80,30,"Ques 28. 1 HACKER WAY is the address of  the ");
outtextxy(155,45,"headquarters of which famous tech company ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Oracle ");
outtextxy(80,290,"C. Microsoft");
outtextxy(365,165,"B. Facebook ");
outtextxy(365,290,"D. Dell");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'B':case'b':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q29();
case'A':case'a':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q28();
}}
void Q27()
{
ques();
char a;
outtextxy(80,15,"Ques 27. Computer RAM is typhically sold in");
outtextxy(155,30,"multiples of 64 megabytes , so which of the");
outtextxy(155,45,"following would not be available");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. 512 MB");
outtextxy(80,290,"C. 128 MB");
outtextxy(365,165,"B. 944 MB ");
outtextxy(365,290,"D. 256 MB");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'B':case'b':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q28();
case'A':case'a':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q27();
}}
void Q26()
{
ques();
char a;
outtextxy(80,30,"Ques 26. Adobe created the PDF. The PD is for");
outtextxy(155,45,"portable document. What is the F for ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Format");
outtextxy(80,290,"C. Folder");
outtextxy(365,165,"B. First");
outtextxy(365,290,"D. File");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'A':case'a':outtextxy(80,380,"Your answer is correct");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q27();
case'B':case'b':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q26();
}}
void Q25()
{
ques();
char a;
outtextxy(80,30,"Ques 25. Which product are typhically offered");
outtextxy(155,45,"at Kayak.com?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. River maps");
outtextxy(80,290,"C. travel prices");
outtextxy(365,165,"B. Free wifi locations");
outtextxy(365,290,"D. Cellphones");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'C':case'c':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();mid();Q26();
case'B':case'b':case'a':case'A':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q25();
}}
void Q24()
{
ques();
char a;
outtextxy(80,30,"Ques 24. Which technology company has products such as  ");
outtextxy(155,45,"Adwords and Adsense ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Apple");
outtextxy(80,290,"C. Microsoft");
outtextxy(365,165,"B. Google");
outtextxy(365,290,"D. Dell");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'B':case'b':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q25();
case'A':case'a':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q24();
}}
void Q23()
{
ques();
char a;
outtextxy(80,30,"Ques 23. Which former Google executive was hired by  ");
outtextxy(155,45,"Yahoo as its CEO ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Larry Page");
outtextxy(80,290,"C. Vic Gundotra");
outtextxy(365,165,"B. Marissa Mayer");
outtextxy(365,290,"D. Eric Schmidt");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'B':case'b':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q24();
case'A':case'a':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q23();
}}
void Q22()
{
ques();
char a;
outtextxy(80,30,"Ques 22. Which of the following is a low level");
outtextxy(155,45," programming language? ");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. C");
outtextxy(80,290,"C. XHTML");
outtextxy(365,165,"B. Assembly");
outtextxy(365,290,"D. Python");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'b':case'B':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q23();
case'a':case'A':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q22();
}}
void Q21()
{
ques();
char a;
outtextxy(80,15,"Ques 21. Which below file extension is not ");
outtextxy(155,30," a type of compressed file?");
setcolor(13);settextstyle(2,0,6);
outtextxy(80,165,"A. .bin");
outtextxy(80,290,"C. .tar");
outtextxy(365,165,"B. .rar");
outtextxy(365,290,"D. .z");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'C':case'c':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();mid();Q22();
case'B':case'b':case'a':case'A':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");Q21();closegraph();getch();
}}
void l3()
{
int gdriver = DETECT,gmode;

   initgraph(&gdriver, &gmode, "C:/TC/BGI");
   sound(2000);
   setcolor(1);
   setlinestyle(2,1,1);
   rectangle(150,120,450,300);
   setcolor(6);
   settextstyle(3,0,3);
   outtextxy(250,130,"LEVEL 3");
   delay(2000);
   settextstyle(3,0,1);
   setcolor(5);
   outtextxy(200,170,"DIFFICULTY LEVEL : DIFFICULT");
   settextstyle(2,0,6);
   setcolor(2);
   outtextxy(160,250,"PRESS ENTER TO CONTINUE");
   nosound();
   getch();
   closegraph();
   Q21();
}
void Q20()
{
ques();
char a;
outtextxy(80,30,"Ques 20. HTML is a ------------- ");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Software");
outtextxy(80,290,"C. Language");
outtextxy(365,165,"B. package");
outtextxy(365,290,"D. file");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'C':case'c':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();l3();
case'B':case'b':case'A':case'a':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q20();
}}
void Q19()
{
ques();
char a;
outtextxy(80,30,"Ques 19. The Apple iPhone was first released in ");
outtextxy(155,45,"which year?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. 2005");
outtextxy(80,290,"C. 2007");
outtextxy(365,165,"B. 2009");
outtextxy(365,290,"D. 2011");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'C':case'c':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();mid();Q20();
case'B':case'b':case'A':case'a':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q19();
}}
void Q18()
{
ques();
char a;
outtextxy(80,30,"Ques 18. Which of the following is not a social ");
outtextxy(155,45,"media application?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Flickr");
outtextxy(80,290,"C. My Space");
outtextxy(365,165,"B. LinkedIn");
outtextxy(365,290,"D. Instagram");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'A':case'a':outtextxy(80,380,"Your answer is correct");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q19();
case'B':case'b':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q18();
}}
void Q17()
{
ques();
char a;
outtextxy(80,30,"Ques 17. What is YouTube slogan?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Just Video It");
outtextxy(80,290,"C. Broadcast urself");
outtextxy(365,165,"B. Think Different");
outtextxy(365,290,"D. Anytime Video");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'c':case'C':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();mid();Q18();
case'B':case'b':case'A':case'a':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");Q17();closegraph();getch();
}}
void Q16()
{
ques();
char a;
outtextxy(80,30,"Ques 16. Facebook started a project named:");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. ALS challenge");
outtextxy(80,290,"C. Structure sensor");
outtextxy(365,165,"B. Digital India");
outtextxy(365,290,"D. Internet.org");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'D':case'd':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(75,280,6);getch();closegraph();mid();Q17();
case'B':case'b':case'C':case'c':case'A':case'a':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(75,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q16();
}}
void Q15()
{
ques();
char a;
outtextxy(80,30,"Ques 15. In the summer of 2004 ,Peter Thiel made");
outtextxy(155,45,"a $500000 investment in which social network ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Pinterest");
outtextxy(80,290,"C. Linkedin");
outtextxy(365,165,"B. Myspace");
outtextxy(365,290,"D. Facebook");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'D':case'd':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(75,280,6);getch();closegraph();mid();Q16();
case'B':case'b':case'C':case'c':case'A':case'a':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(75,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q15();
}}
void Q14()
{
ques();
char a;
outtextxy(80,30,"Ques 14.What is character limit for writing on");
outtextxy(155,45,"twitter ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. 200");
outtextxy(80,290,"C. 140");
outtextxy(365,165,"B. 150");
outtextxy(365,290,"D. 142");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'C':case'c':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);;getch();closegraph();mid();Q15();
case'B':case'b':case'A':case'a':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q14();
}
}
void Q13()
{
ques();
char a;
outtextxy(80,30,"Ques 13. What is the development language for Apple");
outtextxy(155,45,"iphone apps?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Objective C");
outtextxy(80,290,"C. JAVA");
outtextxy(365,165,"B. C SHARP");
outtextxy(365,290,"D. BASIC");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'A':case'a':outtextxy(80,380,"Your answer is correct");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q14();
case'B':case'b':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q13();
}}
void Q12()
{
ques();
char a;
outtextxy(80,30,"Ques 12. Which computer brand got its name from a ");
outtextxy(155,45,"mythological creature?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Acer");
outtextxy(80,290,"C. Asus");
outtextxy(365,165,"B. Dell");
outtextxy(365,290,"D. Lenovo");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'c':case'C':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();mid();Q13();
case'B':case'b':case'A':case'a':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);menu();closegraph();getch();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q12();
}}
void Q11()
{
ques();
char a;
outtextxy(80,30,"Ques 11. Who founded the Linux Kernal?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Linux Torvalds");
outtextxy(80,290,"C. Bill gates");
outtextxy(365,165,"B. John Linux");
outtextxy(365,290,"D. Dieter UNIX");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'A':case'a':outtextxy(80,380,"Your answer is correct");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q12();
case'B':case'b':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q11();
}}
void l2()
{  int gdriver = DETECT,gmode;
   initgraph(&gdriver, &gmode,"C:/TC/BGI");
   sound(2000);
   setcolor(1);
   setlinestyle(2,1,1);
   rectangle(150,120,450,300);
   setcolor(6);
   settextstyle(3,0,3);
   outtextxy(250,130,"LEVEL 2");
   delay(2000);
   settextstyle(3,0,1);
   setcolor(5);
   outtextxy(170,170,"DIFFICULTY LEVEL : MODERATE");
   settextstyle(2,0,6);
   setcolor(2);
   outtextxy(160,250,"PRESS ENTER TO CONTINUE");
   nosound();
   getch();
   closegraph();
   Q11();
}
void Q10()
{
ques();
char a;
outtextxy(80,30,"Ques 10. Which operating system is NOT based on");
outtextxy(155,45," DOS ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Windows me");
outtextxy(80,290,"C. Windows xp");
outtextxy(365,165,"B. Windows 98");
outtextxy(365,290,"D. Windows 3.11");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'C':case'c':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();l2();
case'B':case'b':case'A':case'a':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q10();
}
}
void Q9()
{
ques();
char a;
outtextxy(80,30,"Ques 9. Which network protocol is used to send");
outtextxy(155,45," e-mail ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. FTP");
outtextxy(80,290,"C. SMPT");
outtextxy(365,165,"B. POP3");
outtextxy(365,290,"D. SSH");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'c':case'C':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();mid();Q10();
case'B':case'b':case'A':case'a':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q9();
}}
void Q8()
{
ques();
char a;
outtextxy(80,30,"Ques 8. Which of these is a not a computer");
outtextxy(155,45," manufacturer ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Sun");
outtextxy(80,290,"C. Microsoft");
outtextxy(365,165,"B. IBM");
outtextxy(365,290,"D. Apple");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'C':case'c':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();mid();Q9();
case'a':case'A':case'B':case'b':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q8();
}}
void Q7()
{
ques();
char a;
outtextxy(80,30,"Ques 7. Approximately how many bytes make one");
outtextxy(155,45,"Megabyte ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. One Million");
outtextxy(80,290,"C. Ten Thousand");
outtextxy(365,165,"B. One hundred");
outtextxy(365,290,"D. One Thousand");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'A':case'a':outtextxy(80,380,"Your answer is correct");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q8();
case'B':case'b':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q7();
}}
void Q6()
{
ques();
char a;
outtextxy(80,30,"Ques 6. Which video game place in the year 2277 ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. fallout 3");
outtextxy(80,290,"C. call of duty 3 ");
outtextxy(365,165,"B. mass effect 3 ");
outtextxy(365,290,"D. mass effect 2");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'A':case'a':outtextxy(80,380,"Your answer is correct");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q7();
case'B':case'b':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(355,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q6();
}}
void Q5()
{
ques();
char a;
outtextxy(80,30,"Ques 5.who bought minecraft for $2.5 billons? ");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. HCL");
outtextxy(80,290,"C. Facebook");
outtextxy(365,165,"B. Microsoft");
outtextxy(365,290,"D. Sony");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'B':case'b':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q6();
case'A':case'a':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q5();
}}
void Q4()
{
ques();
char a;
outtextxy(80,30,"Ques 4. What is the size of the nexus 5 ");
outtextxy(155,45,"screen in inches?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. 5.5");
outtextxy(80,290,"C. 5.0");
outtextxy(365,165,"B. 4.0");
outtextxy(365,290,"D. 4.95");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'D':case'd':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(75,280,6);getch();closegraph();mid();Q5();
case'B':case'b':case'C':case'c':case'A':case'a':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(75,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q4();
}}
void Q3()
{
ques();
char a;
outtextxy(80,30,"Ques 3. In which city WATCH DOG take place in ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. New York");
outtextxy(80,290,"C. Paris");
outtextxy(365,165,"B. Chicago ");
outtextxy(365,290,"D. London");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'B':case'b':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q4();
case'A':case'a':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q3();
}}
void Q2()
{
ques();
char a;
outtextxy(80,30,"Ques 2. Which app is considered to be the most");
outtextxy(155,45,"downloaded game in android ?");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. Flappy Birds");
outtextxy(80,290,"C. Angry Birds");
outtextxy(365,165,"B. Hungry Pigs");
outtextxy(365,290,"D. NFS Most Wanted");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'c':case'C':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();mid();Q3();
case'B':case'b':case'A':case'a':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(355,165,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q2();
}}
void Q1()
{
ques();
char a;
outtextxy(80,30,"Ques 1. Which company's name means Three Stars ");
outtextxy(155,45," when translated into English");
setcolor(13);
settextstyle(2,0,6);
outtextxy(80,165,"A. LG");
outtextxy(80,290,"C. Sony");
outtextxy(365,165,"B. Samsung");
outtextxy(365,290,"D. Sega");
outtextxy(80,348,"Ans .");
gotoxy(18,23);
cin>>a;
delay(1000);
nosound();
setcolor(9);
switch(a)
{
case'B':case'b':outtextxy(80,380,"Your answer is correct");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();mid();Q2();
case'A':case'a':case'C':case'c':case'D':case'd':outtextxy(80,380,"Sorry,your answer is incorrect");floodfill(75,165,6);floodfill(75,280,6);floodfill(355,280,6);getch();closegraph();menu();
default:outtextxy(80,380,"Oh!! You have entered a invalid option , try again");getch();closegraph();Q1();
}}
void l1()
{
   int gdriver = DETECT,gmode;
   initgraph(&gdriver, &gmode, "C:/TC/BGI");
   sound(2000);
   setcolor(1);
   setlinestyle(2,1,1);
   rectangle(150,120,450,300);
   setcolor(6);
   settextstyle(3,0,3);
   outtextxy(250,130,"LEVEL 1");
   delay(2000);
   settextstyle(3,0,1);
   setcolor(5);
   outtextxy(200,170,"DIFFICULTY LEVEL : EASY");
   settextstyle(2,0,6);
   setcolor(2);
   outtextxy(160,250,"PRESS ENTER TO CONTINUE");
   nosound();
   getch();
   closegraph();
   Q1();
}
void getname()
{
clrscr();
delay(1000);
for(int i=0;i<10;i++)
{
clrscr();
gotoxy(25,i);
sound(500+i*100 );
textcolor(i+128);
cprintf("Hi! Friend ");
delay(100);
}
textcolor(4);
sound(800);
gotoxy(20,11);
cprintf("Enter your name : ");
gets(name);
nosound();
l1();
}
void menu()
{
clrscr();
char ans;
int gdriver = DETECT,gmode;
initgraph(&gdriver, &gmode, "C:/TC/BGI");
sound(1000);
setcolor(4);
setlinestyle(1,1,1);
rectangle(100,20,500,450);
setcolor(6);
settextstyle(5,0,5);
outtextxy(235,50,"MENU");
delay(1000);
settextstyle(3,0,3);
setcolor(5);
outtextxy(150,200,"1. PRESS 'P' FOR PLAY");
setcolor(1);
outtextxy(150,250,"2. PRESS 'Q' FOR QUIT");
gotoxy(20,20);
cin>>ans;
nosound();
closegraph();
if (ans=='p'||ans=='P')getname();
else
goto end;
end:
}
void p2()
{
clrscr();
gotoxy(1,6);
for(int i=0;i<16;i++)
{
for(int j=0;j<80;j++)
{
delay(2);
sound(j+1500+i);
textcolor(j);
if(i>3&&i<12&&j>10&&j<70)
cout<<' ';
else
cprintf("^");
}
}
textcolor(156);
gotoxy(23,10);
cprintf("DEVELOPED BY :");  gotoxy(23,14); cprintf("INSTITUTION :");
gotoxy(28,11);
textcolor(4);
cprintf("Jasneet Singh");
gotoxy(28,15);
cprintf("Bharati Vidyapeeth");
textcolor(1);
gotoxy(28,12);
cprintf("Gagan chugh");
gotoxy(28,16);
cprintf("New Delhi");
nosound();
getch();
menu();
}
void p1()
{
clrscr();
for(int i=0;i<24;i++)
{
for(int j=0;j<80;j++)
{
delay(1);
textcolor(j);
sound(700+j*10);
if(i>9&&i<15&&j>10&&j<70)
cout<<' ';
else
cprintf("-");
delay(2);
}
}
textcolor(142);
gotoxy(31,11);
cprintf("WELCOME TO");
gotoxy(28,13);
cprintf("INFORMATION TECHNOLOGY QUIZ");
gotoxy(40,15);
textcolor(1);
cprintf("Programming Langauge : C++");
nosound();
getch();
p2();
}
void main()
{
p1();
}

















