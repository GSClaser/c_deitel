#include <stdio.h>

struct bitCard
{
	unsigned face : 4;
	unsigned suit : 2;
	unsigned color : 1;
};

typedef struct bitCard Card;

void fillDeck(Card* const wDeck);
void deal(const Card * const wDeck);

int main()
{
	Card deck[52];
	fillDeck(deck);
	deal(deck);
	return 0;
}

void fillDeck(Card* const wDeck)
{
	int i;
	for(i=0;i<=51;i++)
	{
		wDeck[i].face = i%13;
		wDeck[i].suit = i/13;
		wDeck[i].color = i/26;
	}
	
}


void deal(const Card * const wDeck)
{
	int k1;
	int k2;

	for(k1=0,k2=k1+26;k1<=25;k1++,k2++)
	{
		printf("Card:%3d Suit:%2d Color:%2d ",
				wDeck[k1].face,wDeck[k1].suit,wDeck[k1].color);
		
		printf("Card:%3d Suit:%2d Color:%2d\n",
				wDeck[k2].face,wDeck[k2].suit,wDeck[k2].color);
	}
}
