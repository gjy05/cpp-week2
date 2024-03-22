#include <iostream>

using namespace std;

void check(int *strike_count, int *ball_count, int guess[3], int answer[3]);
void initialize_seed(void);
int rand_0to9(void);

int main(void)
{
    int answer[3];
    initialize_seed();
    for (int i = 0, n; i < 3; i++)
    {
        n = rand_0to9();
        switch (i)
        {
        case 0:
            answer[0] = n;
            break;
        case 1:
            if (n == answer[0])
            {
                i--;
                break;
            } else
            {
                answer[1] = n;
                break;
            }
        case 2:
            if (n == answer[0] || n == answer[1])
            {
                i--;
                break;
            } else
            {
                answer[2] = n;
                break;
            }
        default:
            break;
        }
    }

    int guess[3];
    int strike_count, ball_count, chance_count = 5;
    while (true)
    {
        cout << chance_count << " chances left." << endl;
        cout << "Enter a guess: ";
        for (int i = 0; i < 3; i++)
        {
            scanf("%1d", &guess[i]);
        }

        strike_count = 0;
        ball_count = 0;

        check(&strike_count, &ball_count, guess, answer);
        chance_count--;

        if (3 <= strike_count)
        {
            cout << "You win!" << endl;
            break;
        }
        if (chance_count <= 0)
        {
            cout << "You lose!" << endl;
            break;
        }

        cout << "Strikes: " << strike_count << ", Balls: " << ball_count << endl;
    }

    return 0;
}
