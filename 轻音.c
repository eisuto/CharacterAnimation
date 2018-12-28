    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <conio.h>
	#include <windows.h> 
	#include <unistd.h>
	#include <mmsystem.h>
	#pragma comment(lib,"winmm.lib")
	 
    void gotoxy(int x,int y)      
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}
int main(int argc, char *argv[])
{
	FILE *fp;
	int i;
	clock_t stime = 0, etime = 0;
	char name[250]="";
	printf("请窗口最大化后\n按任意键播放");
	getch();
	PlaySound("kon.wav", NULL, SND_FILENAME | SND_ASYNC);
	for(i=0;i<4400;i++)
	{
		stime = 0;
		gotoxy(0,0); 
		sprintf(name,"out\\A(%d).txt",i);
		if((fp = fopen(name,"r"))==NULL)
		{	
			printf("按任意键退出\n");
			gotoxy(0,0);
		}
		char buff[250];//缓冲 
		sleep(0.5);
		while (fgets(buff,250,fp))
		{
			printf("%s", buff);
		}
		Sleep(11);
					
	fclose(fp);
	}
} 








