#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
class DeckOfCards
{
public:
	DeckOfCards();
	void shuffle();
	void deal();
private:
	int deck[4][13];
};
DeckOfCards::DeckOfCards()//初始化一副牌
{
	for (int row = 0; row <= 3; row++)
	{
		for (int column = 0; column <= 12; column++)
		{
			deck[row][column] = 0;
		}
	}
	srand(time(0));
}
void DeckOfCards::shuffle()//洗牌
{
	int row, column;
	for (int card = 1; card <= 52; card++)
	{
		do
		{
			row = rand() % 4;
			column = rand() % 13;
		} while (deck[row][column] != 0);
		deck[row][column] = card;
	}
}
void DeckOfCards::deal()
{
	static const char *suit[4] = { "Heart", "Diamonds", "Clubs", "Spades" };
	static const char *face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
	for (int card = 1; card <= 52; card++)
	{
		for (int row = 0; row <= 3; row++)
		{
			for (int column = 0; column <= 12; column++)
			{
				if (deck[row][column] == card)
					cout << setw(5) << right << face[column] << " of " << setw(8) << left << suit[row] << (card % 2 == 0 ? "\n" : "\t");
			}
		}
	}
}
int main()
{
	DeckOfCards deckOfCards;
	deckOfCards.shuffle();
	deckOfCards.deal();
	system("pause");
	return 0;
}
