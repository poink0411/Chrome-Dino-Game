#include <stdio.h> 
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define Tree_Bottom_Y 19 //장애물의 y축방향으로 최대 위치를 치환한다
#define Tree_Bottom_X 90 //장애물의 x축방향으로 최대 위치를 치환한다
#define Dino_Bottom_Y 12 //공룡의 y축방향으로 최대 위치를 치환한다

int getKey(void) { // 키가 눌렸음을 감지했을때 어느 키가 눌렸는지 확인하는 함수이다
    int pressedkey = _getch();
    return pressedkey;
}

void SetConsole() { //콘솔창의 크기 및 콘솔창 상단에 뜨는 프로젝트 이름 설정
    system("mode con:cols=100 lines=25");
    system("title 1209염예찬 정보프로젝트");
}

void Clear(void) { //system("cls")를 매번 쓰기 귀찮아서 Clear()이라는 새로운 함수를 만들어서 사용한다
    system("cls");
}

void CursorView(char show) { 
    HANDLE hConsole;
    CONSOLE_CURSOR_INFO ConsoleCursor;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;

    SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}


void gotoxy(int x, int y) //콘솔창에서 특정 위치로 가기 위해 함수를 만들었다
{
    COORD Cur;
    Cur.X = x;
    Cur.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void printDino(int dinoY) { //공룡을 콘솔창에서 출력하는 함수이다

    gotoxy(0, dinoY);

    static int flag = 1; //공룡의 다리를 표현하기 위해 flag를 정의하고 0과 1을 번갈아가는 경우에서 공룡의 발을 출력합니다

    printf("        $$$$$$$ \n");
    printf("       $$ $$$$$$\n");
    printf("       $$$$$$$$$\n");
    printf("$      $$$      \n");
    printf("$$     $$$$$$$  \n");
    printf("$$$   $$$$$     \n");
    printf(" $$  $$$$$$$$$$ \n");
    printf(" $$$$$$$$$$$    \n");
    printf("  $$$$$$$$$$    \n");
    printf("    $$$$$$$$    \n");
    printf("     $$$$$$     \n");
    if (flag)
    {
        printf("     $    $$$    \n");
        printf("     $$          ");
        flag = 0;
    }
    else
    {
        printf("     $$$  $     \n");
        printf("          $$    ");
        flag = 1;
    }

}

void printJumpingDino(int dinoY) { //공룡을 콘솔창에서 출력하는 함수이다

    gotoxy(0, dinoY);

    printf("        $$$$$$$ \n");
    printf("       $$ $$$$$$\n");
    printf("       $$$$$$$$$\n");
    printf("$      $$$      \n");
    printf("$$     $$$$$$$  \n");
    printf("$$$   $$$$$     \n");
    printf(" $$  $$$$$$$$$$ \n");
    printf(" $$$$$$$$$$$    \n");
    printf("  $$$$$$$$$$    \n");
    printf("    $$$$$$$$    \n");
    printf("     $$$$$$     \n");
    printf("     $    $$$    \n");
    printf("     $$          ");
}

void printTreeType1(int treex) { //첫번째 타입의 함수를 출력하는 함수입니다
    gotoxy(treex, Tree_Bottom_Y);
    printf("    $$$$");
    gotoxy(treex, Tree_Bottom_Y + 1);
    printf("$$$  $$");
    gotoxy(treex, Tree_Bottom_Y + 2);
    printf(" $   $$  $$$");
    gotoxy(treex, Tree_Bottom_Y + 3);
    printf(" $   $$   $");
    gotoxy(treex, Tree_Bottom_Y + 4);
    printf(" $   $$   $");
    gotoxy(treex, Tree_Bottom_Y + 5);
    printf(" $   $$   $");
}

void printTreeType2(int treex) { //2번째 타입의 장애물을 출력하는 함수입니다
    gotoxy(treex, Tree_Bottom_Y);
    printf("$$$$");
    gotoxy(treex, Tree_Bottom_Y + 1);
    printf(" $$");
    gotoxy(treex, Tree_Bottom_Y + 2);
    printf(" $$");
    gotoxy(treex, Tree_Bottom_Y + 3);
    printf(" $$");
    gotoxy(treex, Tree_Bottom_Y + 4);
    printf(" $$");
    gotoxy(treex, Tree_Bottom_Y + 5);
    printf(" $$");
}

void printTreeType3(int treex) { //3번째 타입의 장애물을 출력하는 함수입니다
    gotoxy(treex, Tree_Bottom_Y);
    printf("  $$$$$");
    gotoxy(treex, Tree_Bottom_Y + 1);
    printf("  $$$$$");
    gotoxy(treex, Tree_Bottom_Y + 2);
    printf("  $$$$$$");
    gotoxy(treex, Tree_Bottom_Y + 3);
    printf(" $$$$$$$");
    gotoxy(treex, Tree_Bottom_Y + 4);
    printf("$$$$$$$$");
    gotoxy(treex, Tree_Bottom_Y + 5);
    printf("$$$$$$$$");
}


int main(void) {

    CursorView(0); //캐럿이 안보이게 CursorView함수에 0을 넣어줬다
    srand(time(NULL)); //제대로 된 난수 생성을 위해 만들어줬다

    SetConsole();
    printf("\n\n\n\n\n\n\t\t\t\t------- z를 눌러 시작하세요 -------\n\n\t\t\t\t\t   점프하기: z");
    while (1) {
        if (_getch() == 'z') {
            break;
        }


        //이스터에그
        

        
    }
    Clear();

START:  //게임이 끝나고 x키를 눌렀을 때 이쪽으로 다시 오게 만든다


    int treex = Tree_Bottom_X; //장애물의 x축상에서 위치를 추적하기 위해 만든 변수니다
    int dinoy = Dino_Bottom_Y; //장애물의 y축상에서 위치를 추적하기 위해 만든 변수이다
    int treeTypeRNG = 1; //장애물의 종류를 랜덤으로 정하는 함수이다



    int isatBottom = 1; 
    int treeSpeed = 3; //나무가 움직이는 초기 속도를 지정해준다
    int score = 0;


    while (1) { //게임 플레이어가 원할때 까지 게임을 종료시키지 않기 위해 무한 while문을 사용한다

        printf("점수: %d", score);

        if (_kbhit()) {
            if (getKey() == 'z') {
                isatBottom = 0;
                score++;
                if (score % 5 == 0) {
                    treeSpeed += 1;
                }
            }
        }

        if (dinoy <= 12 && treex <= treeSpeed) {
            system("cls");

            printf("\n\n\n\n\n\n\t\t\t\t\t최종 점수: %d", score);
            printf("\n\n\n\n\t\t\t\t     종료: z   다시하기 x");
            while (1) {
                if (_getch() == 'z') {
                    return 0;
                }
                else if (_getch() == 'x') {
                    goto START;
                }
            }
            break;


        }

        if (isatBottom == 1) {
            printDino(dinoy);

            if (treeTypeRNG == 1) {
                printTreeType1(treex);
            }
            else if (treeTypeRNG == 2) {
                printTreeType2(treex);
            }
            else if (treeTypeRNG == 3) {
                printTreeType3(treex);
            }

            treex -= treeSpeed;
            if (treex <= 0) {
                treex = Tree_Bottom_X;
                treeTypeRNG = rand() % 3 + 1;
                Sleep(treeSpeed * 10 + 10);
            }

            Sleep(80);
            Clear();
        }


        else if (isatBottom == 0) {
            for (int i = 1; i <= 6; i++) {
                printJumpingDino(dinoy - i);

                if (treeTypeRNG == 1) {
                    printTreeType1(treex);
                }
                else if (treeTypeRNG == 2) {
                    printTreeType2(treex);
                }
                else if (treeTypeRNG == 3) {
                    printTreeType3(treex);
                }

                treex -= treeSpeed;
                if (treex <= 0) {
                    treex = Tree_Bottom_X;
                    treeTypeRNG = rand() % 3 + 1;
                    Sleep(treeSpeed * 10 + 10);
                }

                Sleep(80);
                Clear();

            }
            for (int i = 5; i >= 1; i--) {
                printJumpingDino(dinoy - i);

                if (treeTypeRNG == 1) {
                    printTreeType1(treex);
                }
                else if (treeTypeRNG == 2) {
                    printTreeType2(treex);
                }
                else if (treeTypeRNG == 3) {
                    printTreeType3(treex);
                }

                treex -= treeSpeed;
                if (treex <= 0) {
                    treex = Tree_Bottom_X;
                    treeTypeRNG = rand() % 2 + 1;
                    Sleep(treeSpeed * 20 + 10);
                }

                Sleep(80);
                Clear();
            }

        }
        isatBottom = 1;
    }


}