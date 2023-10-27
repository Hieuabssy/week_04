#include <iostream>
#include <ctime>
#include<Windows.h>
#include<conio.h>
#include<mmsystem.h>
using namespace std;


void GotoXY(int pX, int pY)
{
    COORD coord;
    coord.X = pX;
    coord.Y = pY;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main() {
    time_t now;
    struct tm timeinfo;

    time(&now);
    localtime_s(&timeinfo, &now);

    int hour = timeinfo.tm_hour;
    int minute = timeinfo.tm_min;
    int  second = timeinfo.tm_sec;
    int count = 0;
    int ss;
    cout << "Hay nhap so giay: "; cin >> ss;
    cout << "<-----------Bam Esc de thoat----------->" << endl;
    while (1) {
        
        second += 1;
        count++;
        if (second == 60) {
           
            second = 00;
            minute++;
        }
      
        GotoXY(0, 2);
        if (count == ss + 1) break;
        if (hour <= 9 and hour >= 0) cout << "0";
        cout << hour << ":";
        if (minute <= 9 and minute >= 0) cout << "0";
        cout << minute << ":";
        if (second >= 0 and second <= 9) cout << "0";
        cout << second << endl;
       
        
        if (_kbhit()) {
            char COMMAND = _getch();
            if (COMMAND == 27) break;
            
        }
        if (second != 0) Sleep(1000);
        else Sleep(500);
        if (second == 0) {
            PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME);
        }
    }
 
    return 0;
}
