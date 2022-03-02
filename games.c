#include <stdio.h>
#include <windows.h>
#include <string.h>
void loading();
void welcome();
void quiz();
void hangman();
void clue(int x);
void luckydraw();
void instruction_quiz();
void instruction_hangman();
void instruction_lucky_draw();
void game();
void score_board();
void play_again();
void play_again()
{
    system("color 80");
    int n;
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  %c  %c  %c  DO YOU WANT TO PLAY ANOTHER GAME? %c  %c  %c",206,206,206,206,206,206);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t YES -- 1\n\t\t\t\t\t\t\t\t\t NO -- 0\n\t\t\t\t\t\t\t\t ENTER YOUR CHOICE :");
    scanf("%d",&n);
    if(n==1)
        game();
    else if(n==0)
    {
        printf("\n\t\t\t\t\t\t\t\tTHANK YOU FOR PLAYING\n\t\t\t\t\tHAVE A NICE DAY !!! ");
        Sleep(3);
        exit(0);
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\tPlease Enter a valid choice!");
        Sleep(100);
        play_again();
    }

}
void welcome()
{
    system("color 8F");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  %c  %c  %c  WELCOME TO THE WORLD OF GAMES  %c  %c  %c",206,206,206,206,206,206);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t    %c  %c  %c  please wait while we load  %c  %c  %c",206,206,206,206,206,206);
    Sleep(2500);
}
void loading()
{
    system("cls");
    int i,a=219;
    system("color 8F");
    printf("\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tLOADING...\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t");
    for(i=0;i<30;++i)
    {
        printf("%c",a);
        Sleep(200);

    }

}
void instruction_lucky_draw()
{
    system("color 8F");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t %c%c%c%c%c%c%c%c%c%cWELCOME TO LUCKY DRAW%c%c%c%c%c%c%c%c%c%c",247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247);
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t* * * * INSTRUCTIONS * * * * ");
    printf("\n\t\t\t\t\t\t\t\t\t1.YOU HAV THREE CHANCES TO FIND THE LUCKY NUMBER ");
    printf("\n\t\t\t\t\t\t\t\t\t2.GUESS ANY NUMBER FROM 1 TO 10");
    printf("\n\t\t\t\t\t\t\t\t\t3.IF YOUR NUMBER IS SAME AS THE LUCKY NUMBER THEN YOU WILL GET POINTS\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\tFIRST ATTEMPT : 100 POINTS\n\t\t\t\t\t\t\t\t\tSECOND ATTEMPT : 50 POINTS \n\t\t\t\t\t\t\t\t\tTHIRD ATTEMPT : 25 POINTS\n\n\n");
    system("pause");
}
void luckydraw()
{
    system("cls");
    system("color 80");
    int a,b,d,pts=0;
    instruction_lucky_draw();
    system("cls");
    srand(time(0));
    a=rand()%10+1;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    for(d=3;d>=1;d--){
        printf("\n\t\t\t\t\t\t\t\t\tEnter Your guess : ");
        scanf("%d",&b);
        if (a==b)
        {
            printf("\n\t\t\t\t\t\t\t\t\tCONGRATULATIONS you got it right :)");
            sleep(3);
            if(d==3)
                pts=100;
            else if(d==2)
                pts=50;
            else if(d==1)
                pts=25;
            break;

        }
        else if(d>1)
        {
            printf("\n\n\t\t\t\t\t\t\t\t\tTRY AGAIN.You have %d chances left",d-1);
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tOOPS you lost :(");
            sleep(3);

        }

    }
            printf("\n\n\t\t\t\t\t\t\t\t\tThe correct number is %d",a);
            sleep(3);
            system("cls");
            char name[30];
            FILE *fil;
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tEnter your name : ");
    scanf("%s",&name);
    printf("\n\n\t\t\t\t\t\t\t\t\tyour score is : %d",pts);
    fil=fopen("lucky_draw.txt","a+");
    fprintf(fil,"%s\t%d\n",name,pts);
    fclose(fil);
    Sleep(2);
    play_again();
}
void instruction_quiz()
{
    system("color 8F");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t %c%c%c%c%c%c%c%c%c%cWELCOME TO QUIZ%c%c%c%c%c%c%c%c%c%c",247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247);
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t   INSTRUCTIONS");
    printf("\n\t\t\t\t\t\t\t\t\t\t1.There are 3 topics. Each topic has 5 questions. ");
    printf("\n\t\t\t\t\t\t\t\t\t\t2.Choose your desired topic.");
    printf("\n\t\t\t\t\t\t\t\t\t\t3.Choose the correct option to earn a point.\n\n\n");
    system("pause");
}


void quiz()
{
    system("cls");
    instruction_quiz();
    system("cls");
    struct quizs
    {
        int o;
        int x;
        char a;
        char name[50];
    }a2;
    a2.x=0;
    system("color 80");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t%c %c   WELCOME TO QUIZ   %c %c",219,219,219,219);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1.SPORTS\n\n\t\t\t\t\t\t\t\t\t\t\t2.SCIENCE\n\n\t\t\t\t\t\t\t\t\t\t\t3.GENERAL KNOWLEDGE\n\n\t\t\t\t\t\t\t\t\t\tEnter your option:");
    scanf("%d",&a2.o);
    system("cls");
    switch(a2.o)
    {
    case 1:
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1.Which nation had led the medal tally in the 2018 Asian Games?\n\t\t\t\t\t\t\t\t\t\tA.India\n\t\t\t\t\t\t\t\t\t\tB.Singapore\n\t\t\t\t\t\t\t\t\t\tC.China\n\t\t\t\t\t\t\t\t\t\tD.Japan\n\t\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='C'||a2.a=='c')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t2. Who is regarded as the most successful Indian test captain of Indian Cricket team?\n\t\t\t\t\t\t\t\t\t\tA.ViratKohli\n\t\t\t\t\t\t\t\t\t\tB.SunilGavaskar\n\t\t\t\t\t\t\t\t\t\tC.MSDhoni\n\t\t\t\t\t\t\t\t\t\tD.Sachin Tendulkar\n\t\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='C'||a2.a=='c')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t3.Who is the first Indian Woman to win a gold medal at the Commonwealth Games?\n\t\t\t\t\t\t\t\t\t\tA.AnjuBobbyGeorge\n\t\t\t\t\t\t\t\t\t\tB.KrishnaPunia\n\t\t\t\t\t\t\t\t\t\tC.SiniJose\n\t\t\t\t\t\t\t\t\t\tD. Mandeep Kaur\n\t\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='B'||a2.a=='b')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t4. Who is the highest wicket-taker in ODIs?\n\t\t\t\t\t\t\t\t\t\tA.HarbhajanSingh\n\t\t\t\t\t\t\t\t\t\tB.WasimAkram\n\t\t\t\t\t\t\t\t\t\tC.MuttiahMuralitharan\n\t\t\t\t\t\t\t\t\t\tD.Chaminda Vaas\n\t\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='C'||a2.a=='c')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t5.Neeraj Chopra won a gold medal at 2016 IAAF World U20 Championships. Which sport does he represent?\n\t\t\t\t\t\t\t\t\t\tA.Shotput\n\t\t\t\t\t\t\t\t\t\tB.JavelinThrow\n\t\t\t\t\t\t\t\t\t\tC.Longjump\n\t\t\t\t\t\t\t\t\t\tD.High jump\n\t\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='B'||a2.a=='b')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        break;
    case 2:
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1.What is the most abundant gas in the Earth’s atmosphere?\n\t\t\t\t\t\t\t\t\t\tA.Oxygen\n\t\t\t\t\t\t\t\t\t\tB.Helium\n\t\t\t\t\t\t\t\t\t\tC.Nitrogen\n\t\t\t\t\t\t\t\t\t\tD.Hydrogen\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='C'||a2.a=='c')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t2.What is the biggest planet in our solar system?\n\t\t\t\t\t\t\t\t\t\tA.Neptune\n\t\t\t\t\t\t\t\t\t\tB.Jupiter\n\t\t\t\t\t\t\t\t\t\tC.Earth\n\t\t\t\t\t\t\t\t\t\tD.Mars\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='B'||a2.a=='b')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t3.At what temperature are Celsius and Fahrenheit equal?\n\t\t\t\t\t\t\t\t\t\tA.-30\n\t\t\t\t\t\t\t\t\t\tB.-40\n\t\t\t\t\t\t\t\t\t\tC.-42\n\t\t\t\t\t\t\t\t\t\tD. -45\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='B'||a2.a=='b')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t4.On the periodic table, what symbol stands for silver?\n\t\t\t\t\t\t\t\t\t\tA.Ag\n\t\t\t\t\t\t\t\t\t\tB.Au\n\t\t\t\t\t\t\t\t\t\tC.Pb\n\t\t\t\t\t\t\t\t\t\tD.He\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='A'||a2.a=='a')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t5.How many pairs of ribs are there in a human body?\n\t\t\t\t\t\t\t\t\t\tA.10\n\t\t\t\t\t\t\t\t\t\tB.12\n\t\t\t\t\t\t\t\t\t\tC.14\n\t\t\t\t\t\t\t\t\t\tD.16\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='B'||a2.a=='b')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        break;
    case 3:
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1.World tourism day is celebrated on\n\t\t\t\t\t\t\t\t\t\tA.September12\n\t\t\t\t\t\t\t\t\t\tB.September25\n\t\t\t\t\t\t\t\t\t\tC.September27\n\t\t\t\t\t\t\t\t\t\tD.September29\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='C'||a2.a=='c')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t2.When is the international yoga day celebrated?\n\t\t\t\t\t\t\t\t\t\tA.June 21\n\t\t\t\t\t\t\t\t\t\tB.March 21\n\t\t\t\t\t\t\t\t\t\tC.April 22\n\t\t\t\t\t\t\t\t\t\tD.May 31\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='A'||a2.a=='a')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
         printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t3.Mother Teresa won the Nobel Prize for Peace in?\n\t\t\t\t\t\t\t\t\t\tA.1991\n\t\t\t\t\t\t\t\t\t\tB.1979\n\t\t\t\t\t\t\t\t\t\tC.1988\n\t\t\t\t\t\t\t\t\t\tD.1954\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='B'||a2.a=='b')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t4.Mahabaleshwar is located in?\n\t\t\t\t\t\t\t\t\t\tA.Maharashtra\n\t\t\t\t\t\t\t\t\t\tB.Rajasthan\n\t\t\t\t\t\t\t\t\t\tC.Madhya Pradesh\n\t\t\t\t\t\t\t\t\t\tD.Himachal Pradesh\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='A'||a2.a=='a')
        {
            a2.x=a2.x+1;
        }
else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t5.Marco Polo?\n\t\t\t\t\t\t\t\t\t\tA.discovered Greenland\n\t\t\t\t\t\t\t\t\t\tB.travelled through China, India and other parts of Asia\n\t\t\t\t\t\t\t\t\t\tC.travelled round the cape of Good Hope\n\t\t\t\t\t\t\t\t\t\tD.discovered Canadat\n\t\t\t\t\t\t\t\t\tEnter your option: ");
        scanf(" %c",&a2.a);
        if(a2.a=='B'||a2.a=='b')
        {
            a2.x=a2.x+1;
        }
        else if (a2.a=='a'||a2.a=='A'||a2.a=='B'||a2.a=='b'||a2.a=='C'||a2.a=='c'||a2.a=='D'||a2.a=='d')        {
            printf("");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tYou entered an invalid option!\n\t\t\t\t\t\t\t\t\tYou lose a point!");
            sleep(2);
        }
        system("cls");
        break;
    default:
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tPlease give a Valid choice!");
        sleep(3);
        quiz();


    }
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tEnter your name : ");
    scanf("%s",&a2.name);
    printf("\n\t\t\t\t\t\t\t\t\tYOUR SCORE  : %d",a2.x);
    FILE *fp;
    fp=fopen("quiz_score.txt","a+");
    fprintf(fp,"%s\t%d\n",a2.name,a2.x);

    fclose(fp);
    sleep(2);
    play_again();


}
void clue(int x)
{
    system("color 8F");
    switch(x)
    {
        case 1 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tTEAM GAME USING HOOPS AND POPULAR IN U.S\n\t\t\t\t\t\t\t\t\tTHE 'B' IN NBA\n\n ");
                break;
        case 2 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tNEIGHBOR OF ITALY\n\t\t\t\t\t\t\t\t\tPEOPLE LOVE PASTRIES\n\n ");
                break;
        case 3 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPOPULAR NEW YORK BASED SHOW WITH 6 MAIN CHARACTERS\n\n ");
                break;
        case 4 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tTHE MORE OF THIS THERE ,THE LESS YOU SEE.\n\t\t\t\t\t\t\t\t\tWHAT IS IT?\n\n");
                break;
        case 5 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tTHE GREEN COLOR SEEN IN FIREWORKS IS DUE TO THE CHLORIDE SALTS OF \n\n");
                break;
        case 6 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tMAP MARK\n\t\t\t\t\t\t\t\t\tLOCATES A POINT \n\n");
                break;
        case 7 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tTOXIC GREEN GAS\n\t\t\t\t\t\t\t\t\tTHE SECOND LIGHTEST OF HALOGENS\n\n");
                break;
        case 8 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSLUICING IT OUT USING ONE'S TONGUE\n\n");
                break;
        case 9 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tHIGHEST GROSSING MOVIE EVER UNTIL AVATAR BEAT IT\n\n");
                break;
        case 10 : printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tEXCUTIONER / KILLER GAME\n\n");
                break;

    }
}
void instruction_hangman()
{
    system("cls");
    system("color 8F");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t %c%c%c%c%c%c%c%c%c%cWELCOME TO HANGMAN%c%c%c%c%c%c%c%c%c%c",247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247);
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t INSTRUCTIONS");
    printf("\n\t\t\t\t\t\t\t\t\t1.There are 10 questions. ");
    printf("\n\t\t\t\t\t\t\t\t\t2.Choose the right alphabets to guess the word.");
    printf("\n\t\t\t\t\t\t\t\t\t3.For every wrong alphabet, you lose points.");
    printf("\n\t\t\t\t\t\t\t\t\t4. Guess the word correctly using hints given");
    printf("\n\t\t\t\t\t\t\t\t\t5. The word will only be revealed if you guess all the aplhabets correctly.\n\n\n");
    system("pause");

}
void hangman()
{
    system("color 80");
    instruction_hangman();
    system("cls");
    FILE *fp;
    char guess;
    struct hangmans
    {
        char game[30];
        char word[30];
        char player_name[30];
        int num;
        int len;
        int i;
        int j;
        int score;
        int fake;

    };
    struct hangmans a1;
    a1.score=100;
    fp = fopen("hangman.txt","r");
    for(int count=1;count<=10;++count){
            system("cls");
    while(EOF)
    {
        fscanf(fp,"%d%s",&a1.num,&a1.game);
        if(count==a1.num){
        strcpy(a1.word,a1.game);
        break;
        }
    }
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t%c  %c  CLUE  %c  %c",219,219,219,219);
    clue(count);
    a1.len=strlen(a1.word);
    char dummy[a1.len];
    int arr[a1.len];
    for(a1.i=0;a1.i<a1.len;++a1.i){
        dummy[a1.i]='*';
        arr[a1.i]=0;
    }
    dummy[a1.i]='\0';
    int gameover=0;
    while(!gameover)
    {
        a1.fake=0;
        printf("\n\n\t\t\t\t\t\t\t\t\tENTER A LETTER : \n\t\t\t\t\t\t\t\t\t");
        scanf(" %c",&guess);
        for(a1.j=0;a1.j<a1.len;++a1.j)
        {
            if(guess==a1.word[a1.j])
            {
            dummy[a1.j]=guess;
            arr[a1.j]=1;
            a1.fake=1;

            }
        }
        if(a1.fake==0)
            a1.score-=1;
        printf("\t\t\t\t\t\t\t\t\t %s ",dummy);
        for(int k=0;k<a1.len;++k)
        {
            if(!arr[k])
            {
                gameover=0;
                break;
            }
                else
                gameover=1;
        }
    }
    printf("\n\n\t\t\t\t\t\t\t\t\t YOU FOUND THE WORD !!!");
    sleep(2);

}
fclose(fp);
system("cls");
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tENTER YOUR NAME : ");
    scanf("%s",&a1.player_name);
    printf("\n\t\t\t\t\t\t\t\t\tYOUR SCORE: %d \n\n\n ",a1.score);
    FILE *fp1;
    fp1=fopen("hangman_score.txt","a+");
    fprintf(fp1," %s\t%d\n",a1.player_name,a1.score);
    fclose(fp1);
    sleep(2);
    play_again();
}
void score_board()
{
    system("color 80");
    system("cls");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t%c  %c SCORE BOARD %c  %c ",219,219,219,219);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tQUIZ SCORE ");
    FILE *f1;
    char ch;
    f1=fopen("quiz_score.txt","r");
    while((ch=fgetc(f1))!=EOF)
        printf("%c",ch);
    fclose(f1);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tHANGMAN SCORE ");
    FILE *f2;
    char ch1;
    f2=fopen("hangman_score.txt","r");
    while((ch1=fgetc(f2))!=EOF)
        printf("%c",ch1);
    fclose(f2);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tLUCKY DRAW SCORE ");
    FILE *f3;
    char ch2;
    f3=fopen("lucky_draw.txt","r");
    while((ch2=fgetc(f3))!=EOF)
        printf("%c",ch2);
    fclose(f3);
    system("pause");
   play_again();

}
void game()
{
    system("cls");
    system("color 80");
    int choice;
    printf("\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t%c  %c  CHOOSE A GAME  %c  %c ",219,219,219,219);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.QUIZ\n\t\t\t\t\t\t\t\t\t\t\t\t2.HANGMAN\n\t\t\t\t\t\t\t\t\t\t\t\t3.LUCKY DRAW");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4.SCORE BOARD");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t0.Exit");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t %c %c ENTER YOUR CHOICE %c %c \n\t\t\t\t\t\t\t\t\t\t\t\t ",219,219,219,219);
    scanf("%d",&choice);
    switch(choice){
    case 1 : quiz();
             break;
    case 2 : hangman();
             break;
    case 3 : luckydraw();
             break;
    case 4 :  score_board();
             break;
    case 0 :
        printf("\n\t\t\t\t\t\t\t\t\t\t\tThank you for playing!");
        exit(0);
    default:
        printf("\n\t\t\t\t\t\t\t\t\t\t\tPlease give a Valid choice!");
        Sleep(1000);
        game();
    }
}
int main()
{

    welcome();
    loading();
    system("cls");
    game();
    return 0;
}


