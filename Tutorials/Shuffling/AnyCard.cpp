#include <iostream>
#include <string>

int main()
{
    std ::string rank[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    std ::string suit[4] = {"C", "D", "S", "H"}; // Club, Diamond, Spade, Heart
    std ::string deck[52];

    for (int i = 0; i < 13; i++)
        for (int j = 0; j < 4; j++)
            deck[4 * i + j] = rank[i] + suit[j];

    int N;
    std ::cin >> N;
    for (int i = 0; i < N; i++)
    {
        double u = rand() / ((double)RAND_MAX + 1);
        std ::cout << deck[(int)(u * 52)] << " ";
    }
    std ::cout << std ::endl;
}