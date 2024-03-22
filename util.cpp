#include <cstdlib>
#include <ctime>

void initialize_seed(void)
{
    srand((unsigned int)time(NULL));
}

int rand_0to9(void)
{
    return rand() % 10;
}
