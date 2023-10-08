#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

enum suit
{
    Hearts,
    Diamonds,
    Clubs,
    Spades
};
typedef enum suit Suit;

enum rank
{
    Ace = 1,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};
typedef enum rank Rank;

struct card
{
    Rank rank;
    Suit suit;
};
typedef struct card Card;

void output_card(Card card);

int main() {
    Card card;
    Card another_card;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < 9; i++) {
        card.rank = (rand() % 13) + 1;
        card.suit = (rand() % 4) + 1;
        output_card(card);
    }
    another_card.rank = Queen;
    another_card.suit = Diamonds;

    printf("\n");

    return 0;
}

void output_card(Card card) {
    switch (card.rank) {
        case Ace:
            printf("A");
            break;
        case Jack:
            printf("J");
            break;
        case Queen:
            printf("Q");
            break;
        case King:
            printf("K");
            break;
        case Ten:
            printf("T");
            break;
        default:
            printf("%d", card.rank);
        }

    printf("%c", card.suit + 2);
    printf("\n");
}
