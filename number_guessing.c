//Playing with numbers is fun. But don't let them play with you (yet)!                  //
//                                                                                      //
//If age is just a number, letting it grow without taking any measures will haunt you.  //
//But while taking measures, playing a little bit with numbers won't cost you much!     //
//                                                                                      //
//number_guessing.c will let you play with numbers and will almost never allow them to  //
//play you! (But who knows?)                                                            //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    const int MIN = 1;   //Constant values are truth!//
    const int MAX = 99;  //Constant values are truth!//
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));     //allows time to play with destiny//
    
    answer = (rand() % MAX) + MIN;
   
    do
    {
        printf("Your guess: ");
        scanf("%d", &guess);
        if (guess < answer)
        {
        printf("Too Low!\n");
        }
        else if (guess > answer)
        {
        printf("Too High!\n");
        }
        else
        {
        printf("Correct!\n");
        }
        guesses++;
    } while (guess != answer);

    printf ("Answer: %d\n", answer);
    printf ("Guesses: %d\n", guesses);

    return 0;
}
