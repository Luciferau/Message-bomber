
/*#include<stdio.h>
#include<Windows.h>
#include <mmsystem.h>
#pragma comment (lib,"winmm.lib")

int main() 
{
    
    int n;
    char name[100];
    //mciSendString("play res/song.mp3 repeat", 0, 0, 0);
    printf("Please enter the object you want to bomb:\n");
    scanf("%s", name);
    
    printf("Please enter the number of times you want to bomb:\n");
    scanf("%d", &n);
    HWND H = FindWindow(0,name);//Find the chat window
    while (n-- > 0) 
{
        SendMessage(H, WM_PASTE, 0, 0);//Paste the content
        SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);//Press enter to send
    }
    return 0;
}*/

#include<stdio.h>
#include<windows.h>


int main() {
    int i;
    char name[100];
    printf("目标：");
    scanf_s("%s", &name, 40);
    printf("次数：");
    scanf_s("%d", &i);
    HWND H = FindWindow(0, name);	//寻找对话框 
    while (i-- > 0) {
        SendMessage(H, WM_PASTE, 0, 0);	//粘贴 
        SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);//回车 
    }
    main();

}
