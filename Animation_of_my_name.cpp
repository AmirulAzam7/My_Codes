///AMIRUL AZAM

#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}

int main()
{
    int open=5000;
    //Sleep(open);
    int i,time=100;
    int len=10;
    int temp;

    ///A-open
    int x1=5,y1=5;
    for(i=0;i<len;i++)
       {
        	gotoxy( x1+1+i,y1+9-i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<len;i++)
       {
        	gotoxy( x1+10+i,y1+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<len;i++)
       {
        	gotoxy( x1+6+i,y1+5 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
        	gotoxy( x1+6+i,y1+6 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
       }
    //A-close
    ///M-open
    int x2=29,y2=5;
    for(i=len-1;i>=0;i--)
       {
        	gotoxy( x2,y2+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<5;i++)
       {
        	gotoxy( x2+2+i,y2+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<5;i++)
       {
        	gotoxy( x2+6+1+i,y2+4-i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<len;i++)
       {
           gotoxy( x2+13,y2+i );
           cout<< "***";
           fflush(stdout);
           Sleep(time);
       }
       //M-close

    ///I-open
    int x3=47,y3=5;
    for(i=0;i<len;i++)
       {
        	gotoxy( x3+4,y3+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);

       }
    for(i=0;i<11;i++)
       {
        	gotoxy( x3+i,y3 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
        	gotoxy( x3+i,y3+1 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<11;i++)
       {
        	gotoxy( x3+i,y3+8 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
        	gotoxy( x3+i,y3+9 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
       }

       //I-close

       ///R-open
       int x4=60,y4=5;

       //for(i=0;i<len;i++)
       for(i=len-1;i>=0;i--)
       {
        	gotoxy( x4,y4+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
       for(i=3;i<len;i++)
       {
        	gotoxy( x4+i,y4 );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
        	gotoxy( x4+i,y4+1 );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
        for(i=0;i<5;i++)
       {
        	gotoxy( x4+9,y4+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
       for(i=len-1;i>=0;i--)
       {
        	gotoxy( x4+i,y4+4 );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
        	gotoxy( x4+i,y4+5 );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
       for(i=0;i<6;i++)
       {
        	gotoxy( x4+3+i,y4+4+i );
        	cout<< "****";
        	fflush(stdout);
        	Sleep(time);
       }
       //r-close
       ///U-open
       int x5=74,y5=5;

        for(i=0;i<len;i++)
       {
        	gotoxy( x5,y5+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }

        for(i=0;i<len;i++)
       {
        	gotoxy( x5+i,y5+8 );
        	cout<< "***";
        	fflush(stdout);
        	gotoxy( x5+i,y5+8+1 );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }

       for(i=len-1;i>=0;i--)
       {
        	gotoxy( x5+10,y5+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
       //U-close

       ///L-open

       int x6=89,y6=5;

       for(i=0;i<len;i++)
       {
           gotoxy( x6,y6+i );
           cout<< "***";
           fflush(stdout);
           Sleep(time);
       }
       for(i=0;i<len;i++)
       {
           gotoxy( x6+i,y6+8 );
           cout<< "***";
           fflush(stdout);
           Sleep(time);
           gotoxy( x6+i,y6+9 );
           cout<< "***";
           fflush(stdout);
           Sleep(time);
       }
       //L-close
       ///A-open
    int x7=107,y7=5;
    for(i=0;i<len;i++)
       {
        	gotoxy( x7+1+i,y7+9-i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<len;i++)
       {
        	gotoxy( x7+10+i,y7+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<len;i++)
       {
        	gotoxy( x7+6+i,y7+5 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
        	gotoxy( x7+6+i,y7+6 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
       }
    //A-close

    ///Z-open
    int x8=130,y8=5;
    for(i=0;i<len;i++)
       {
           gotoxy( x8+i,y8 );
           cout<< "***";
           fflush(stdout);
           Sleep(time);
           gotoxy( x8+i,y8+1 );
           cout<< "***";
           fflush(stdout);
           Sleep(time);
       }
    for(i=0;i<10;i++)
       {
        	gotoxy( x8+10+1-i,y8+i );
        	cout<< "****";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<len+2;i++)
       {
           gotoxy( x8+3+i,y8+8 );
           cout<< "***";
           fflush(stdout);
           Sleep(time);
           gotoxy( x8+3+i,y8+9 );
           cout<< "***";
           fflush(stdout);
           Sleep(time);
       }
    ///Z-close

    ///A-open
    int x9=148,y9=5;
    for(i=0;i<len;i++)
       {
        	gotoxy( x9+1+i,y9+9-i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<len;i++)
       {
        	gotoxy( x9+10+i,y9+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<len;i++)
       {
        	gotoxy( x9+6+i,y9+5 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
        	gotoxy( x9+6+i,y9+6 );
        	cout<< "*";
        	fflush(stdout);
        	Sleep(time);
       }
    //A-close

    ///M-open
    int x10=172,y10=5;
    for(i=len-1;i>=0;i--)
       {
        	gotoxy( x10,y10+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<5;i++)
       {
        	gotoxy( x10+2+i,y10+i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<5;i++)
       {
        	gotoxy( x10+6+1+i,y10+4-i );
        	cout<< "***";
        	fflush(stdout);
        	Sleep(time);
       }
    for(i=0;i<len;i++)
       {
           gotoxy( x10+13,y10+i );
           cout<< "***";
           fflush(stdout);
           Sleep(time);
       }
       //M-close







    getchar();
  return 0;
}


