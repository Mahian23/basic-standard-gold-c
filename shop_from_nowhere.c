//Imagine going for a walk at night and a stranger suddenly approaches you from behind, saying nhe has some magical books.//
//In this world full of humane machines, some books written by yours trully is a palate cleanser, right?                  //

//This code uses the goto function (That I recently learned how to implant risk-free) to help The Man From Nowhere persona//
//come to life. (Though he only profits one cent per book, making his new machinic life quite a bit hard)                 //

//# The Man From Nowhere: Book Shop                                                                                       //
//A surreal C-terminal adventure where you buy philosophical books from a machine-man.

//### How to Play                                                                                                         //
//1. Compile: `gcc shop_from_nowhere.c -o shop`                                                                           //
//2. Run: `./shop`                                                                                                        //
//3. Bring at least $15 if you want the good stuff.                                                                       //

//### Tech Used                                                                                                           //
//- **Language:** C                                                                                                       //
//- **Logic:** Modulo arithmetic for change calculation.                                                                  //
//- **Experimental:** Risk-free `goto` implementation for character persistence.                                          //

#include <stdio.h>

    int count_jacksons(int dollars);
    int count_hamiltons(int dollars);
    int count_lincolns(int dollars);
    int count_washingtons(int dollars);

int main (void)
{
    char answer;
    int answers, due = 0, dollars;
    printf("Man From Nowhere: Shhh! Don't tell anyone!\n"
            "I stumbled upon some magical books!\n"
            "They say you can gain weird philosophical\n"
            "powers using them!\n"
            "Wanna Try? (Y or N)\n");
    scanf(" %c", &answer);

    if (answer == 'y' || answer == 'Y' )
    {printf("Man From Nowhere: What a good choice mate!\n");}
    else if (answer == 'n' || answer == 'N' )
    {printf("Man From Nowhere: It's your loss human!\n"
            "I will just sell these to some rubber monkey.\n");
    return 0;}
    else
    {printf("I guess you indeed want to buy!\n");}
    goto shop;

    shop:
    do
    {
    printf("1. We Left Him There : 15$\n"
           "2. My Last Human Days:  8$\n"
           "3. Cog Wheel         :  7$\n");
    scanf(" %d", &answers);
    }while(answers > 3 || answers < 1);
    switch (answers)
    {
    case 1:
    due += 15;
    break;
    case 2:
    due += 8;
    break;
    case 3:
    due += 7;
    break;
    }
    printf("You can buy more books to gain the power of advanced philosophy!\n"
           "Wanna buy some more? (Y or N)\n");
           scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y' )
    {printf("Man From Nowhere: What a good choice mate!\n");
        goto shop;}
    else if (answer == 'n' || answer == 'N' )
    {printf("Man From Nowhere: It's your loss human!\n"
            "I will just sell these to some rubber monkey.\n");}
    else
    {printf("Man From Nowhere: I guess you indeed want to buy!\n");
    goto shop;}
    printf("Man From Nowhere: That will be $%d\n",due);
    do
    {
    printf("Enter a dollar amount: ");
    scanf(" %d", &dollars);
    } while (dollars < due);
    if (dollars > 100)
    {
    printf("Man From Nowhere: Too much cash! I will just take the $100.\n");
    dollars = 100;
    }
    dollars -= due;
    int jacksons = count_jacksons(dollars);
    dollars %= 20;
    int hamiltons = count_hamiltons(dollars);
    dollars %= 10;
    int lincolns = count_lincolns(dollars);
    dollars %= 5;
    int washingtons = count_washingtons(dollars);
    dollars %= 1;
    printf("Total bills: %d\n", jacksons + hamiltons + lincolns + washingtons);
    printf("$20 bills: %d\n$10 bills: %d\n$ 5 bills: %d\n$ 1 bills: %d\n", jacksons, hamiltons, lincolns, washingtons);
    printf("Hope you can become the philosophy magician!");
    return 0;
}

    int count_jacksons(int dollars)    {return dollars / 20;}
    int count_hamiltons(int dollars)   {return dollars / 10;}
    int count_lincolns(int dollars)    {return dollars / 5; }
    int count_washingtons(int dollars) {return dollars / 1; }
