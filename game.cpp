#include <iostream>

using namespace std;

void check(int *strike_count, int *ball_count, int answer[3], int guess[3])
{
    for (int i = 0; i < 3; i++)
    {
        if (answer[i] == guess[i])
        {
            ++*strike_count;
        }
        else
        {
            for (int j = 0; j < 3; j++)
            {
                if (answer[i] == guess[j])
                {
                    ++*ball_count;
                    break;
                }
            }
        }
    }
}
