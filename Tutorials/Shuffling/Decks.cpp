#include <iostream>
#include <string>

int main()
{
    std ::string rank[]{"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    std ::string suit[]{"C", "D", "S", "H"}; // Club, Diamond, Spade, Heart
    std ::string deck[52];

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 13; i++)
        {
            deck[i + 13 * j] = rank[i] + suit[j];
        }
    }

    for (int i = 0; i < 52; i++)
    {
        std ::cout << deck[i] << " ";
    }
    std ::cout << std ::endl;
}