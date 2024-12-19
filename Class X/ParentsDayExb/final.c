#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void intro();
int main()
{
   
   int manchoice, machinechoice;
   char playagain;
   srand(time(0));
   do
   {
      system("clear");
      intro();
      printf("\t\t\tChoose your choice= \n");
      printf("\t\t\t1. ROCK\n");
      printf("\t\t\t2. PAPER\n");
      printf("\t\t\t3. SCISSOR\n");
      printf("\t\t\tEnter your choice: ");
      scanf("%d", &manchoice);

      if (manchoice < 1 || manchoice > 3)
      {
         printf("\n\n\t\t*****INVALID INPUT*****\n please enter among 1,2 or 3\n");
         continue;
      }
      machinechoice = rand() % 3 + 1;
      if (machinechoice == 1)
      {
         printf("\n\n\t\t\tMachine choose = ROCK\n");
      }
      else if (machinechoice == 2)
         printf("\n\n\t\t\tMachine choose = PAPER\n");
      else
         printf("\n\n\t\t\tMachine choose = SCISSOR\n");
      if (machinechoice == manchoice)
         printf("\n\n\t\t\tYou choose the choice of machine i.e. IT'S TIE!!!");
      else if ((manchoice == 1 && machinechoice == 3) || (manchoice == 2 && machinechoice == 1) || (manchoice == 3 && machinechoice == 2))
         printf("\n\n\t\t\tCONGRATULATIONS!!!! YOU WIN......\n");
      else
         printf("\n\n\t\t\tOPPS.... YOU LOOSE...... COMPUTER WINS!!!\n");
      printf("\n\n\t\t\t DO YOU WANT TO PLAY AGAIN\?\?\? (Y OR N\?\?)::");
      scanf(" %c", &playagain);
   } while (playagain == 'y' || playagain == 'Y');

   printf("\n\n\t\tThanks for Playing!!!! SEE YOU AGAIN!! STAY SAFE!!!!");
   return 0;
}

void intro()
{
   printf("\t\t\t\t\t******************WELCOME PLAYERS************************\n");
   printf("\n");
   printf("\t\t\tRRRRR  OOOOO CCCCC K    K     PPPPPP      A     PPPPP  EEEEE RRRRR      SSSSS CCCCC IIIIII SSSSS SSSSS OOOOO RRRRR   \n");
   printf("\t\t\tR   R  O   O C     K   K      P    P     A A    P    P E     R   R      S     C       I    S     S     O   O R   R \n");
   printf("\t\t\tR R    O   O C     K  K       PPPPPP    AAAAA   PPPPP  EEEEE R  R       SSSSS C       I    SSSSS SSSSS O   O R  R\n");
   printf("\t\t\tR   R  O   O C     K   K      P        A     A  P      E     R   R          S C       I        S     S O   O R   R   \n");
   printf("\t\t\tR    R OOOOO CCCCC K     K  , P       A       A P      EEEEE R     R ,  SSSSS CCCCC IIIIII SSSSS SSSSS OOOOO R     R \n");
   printf("\n");

   printf("\n");
   printf("\t\t\t***Rules of the game***\n");
   printf("\t\t\t==================================================================\n");
   printf("\t\t\t|1.*ROCK crosses the SCISSOR*                                    |\n");
   printf("\t\t\t|2.*SCISSOR cuts the PAPER*                                      |\n");
   printf("\t\t\t|3.*PAPER covers the ROCK                                        |\n");
   printf("\t\t\t==================================================================\n");
}