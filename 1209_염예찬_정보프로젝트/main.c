#include <stdio.h> 
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define Tree_Bottom_Y 19 //��ֹ��� y��������� �ִ� ��ġ�� ġȯ�Ѵ�
#define Tree_Bottom_X 90 //��ֹ��� x��������� �ִ� ��ġ�� ġȯ�Ѵ�
#define Dino_Bottom_Y 12 //������ y��������� �ִ� ��ġ�� ġȯ�Ѵ�

int getKey(void) { // Ű�� �������� ���������� ��� Ű�� ���ȴ��� Ȯ���ϴ� �Լ��̴�
    int pressedkey = _getch();
    return pressedkey;
}

void SetConsole() { //�ܼ�â�� ũ�� �� �ܼ�â ��ܿ� �ߴ� ������Ʈ �̸� ����
    system("mode con:cols=100 lines=25");
    system("title 1209������ ����������Ʈ");
}

void Clear(void) { //system("cls")�� �Ź� ���� �����Ƽ� Clear()�̶�� ���ο� �Լ��� ���� ����Ѵ�
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


void gotoxy(int x, int y) //�ܼ�â���� Ư�� ��ġ�� ���� ���� �Լ��� �������
{
    COORD Cur;
    Cur.X = x;
    Cur.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void printDino(int dinoY) { //������ �ܼ�â���� ����ϴ� �Լ��̴�

    gotoxy(0, dinoY);

    static int flag = 1; //������ �ٸ��� ǥ���ϱ� ���� flag�� �����ϰ� 0�� 1�� �����ư��� ��쿡�� ������ ���� ����մϴ�

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

void printJumpingDino(int dinoY) { //������ �ܼ�â���� ����ϴ� �Լ��̴�

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

void printTreeType1(int treex) { //ù��° Ÿ���� �Լ��� ����ϴ� �Լ��Դϴ�
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

void printTreeType2(int treex) { //2��° Ÿ���� ��ֹ��� ����ϴ� �Լ��Դϴ�
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

void printTreeType3(int treex) { //3��° Ÿ���� ��ֹ��� ����ϴ� �Լ��Դϴ�
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

    CursorView(0); //ĳ���� �Ⱥ��̰� CursorView�Լ��� 0�� �־����
    srand(time(NULL)); //����� �� ���� ������ ���� ��������

    SetConsole();
    printf("\n\n\n\n\n\n\t\t\t\t------- z�� ���� �����ϼ��� -------\n\n\t\t\t\t\t   �����ϱ�: z");
    while (1) {
        if (_getch() == 'z') {
            break;
        }


        //�̽��Ϳ���
        

        
    }
    Clear();

START:  //������ ������ xŰ�� ������ �� �������� �ٽ� ���� �����


    int treex = Tree_Bottom_X; //��ֹ��� x��󿡼� ��ġ�� �����ϱ� ���� ���� �����ϴ�
    int dinoy = Dino_Bottom_Y; //��ֹ��� y��󿡼� ��ġ�� �����ϱ� ���� ���� �����̴�
    int treeTypeRNG = 1; //��ֹ��� ������ �������� ���ϴ� �Լ��̴�



    int isatBottom = 1; 
    int treeSpeed = 3; //������ �����̴� �ʱ� �ӵ��� �������ش�
    int score = 0;


    while (1) { //���� �÷��̾ ���Ҷ� ���� ������ �����Ű�� �ʱ� ���� ���� while���� ����Ѵ�

        printf("����: %d", score);

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

            printf("\n\n\n\n\n\n\t\t\t\t\t���� ����: %d", score);
            printf("\n\n\n\n\t\t\t\t     ����: z   �ٽ��ϱ� x");
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