#include <iostream>

using namespace std;

void check(int *strike_count, int *ball_count, int guess[3], int answer[3]);
void initialize_seed(void);
int rand_0to9(void);

int main(void)
{
    int answer[3];
    initialize_seed();
    for (int i = 0; i < 3; i++)
    {
        answer[i] = rand_0to9();
    }
    cout << "Answer is " << answer[0] << answer[1] << answer[2] << endl;

    int guess[3];
    int strike_count, ball_count;
    while (true)
    {
        cout << "Enter a guess: ";
        for (int i = 0; i < 3; i++)
        {
            scanf("%1d", &guess[i]);
        }

        strike_count = 0;
        ball_count = 0;

        check(&strike_count, &ball_count, guess, answer);

        if (3 <= strike_count)
        {
            cout << "You win!" << endl;
            break;
        }
        cout << "Strikes: " << strike_count << ", Balls: " << ball_count << endl;
    }

    return 0;
}
