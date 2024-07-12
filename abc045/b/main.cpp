#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

char card_game(string a_cards, string b_cards, string c_cards) {
    queue<char> a_deck, b_deck, c_deck;
    for (char card : a_cards) {
        a_deck.push(card);
    }
    for (char card : b_cards) {
        b_deck.push(card);
    }
    for (char card : c_cards) {
        c_deck.push(card);
    }
    char current_player = 'a';
    while (true) {
        if (current_player == 'a') {
            if (a_deck.empty()) {
                return 'A';
            }
            current_player = a_deck.front();
            a_deck.pop();
        } else if (current_player == 'b') {
            if (b_deck.empty()) {
                return 'B';
            }
            current_player = b_deck.front();
            b_deck.pop();
        } else if (current_player == 'c') {
            if (c_deck.empty()) {
                return 'C';
            }
            current_player = c_deck.front();
            c_deck.pop();
        }
    }
}

int main() {
  string Sa,Sb,Sc;
  cin >> Sa >> Sb >> Sc;
  char winner = card_game(Sa, Sb, Sc);
  cout << winner << endl;
  return 0;
}
