#include <iostream>
using namespace std;

int main() {
    int score;
    double totalStars = 0;
    int numSongs = 0;

    while (true) {
        cout << "Enter rating for top song(1-4): ";
        cin >> score;
        if (score < 0) {
            break;
        }
        if (score < 0 || score > 4) {
            cout << "do you know what '1-4' means?" << endl;
            continue;
        }
        totalStars += score;
        numSongs++;
    }

    if (numSongs > 0) {
        cout << "Average Star Value: " << (totalStars / numSongs) << endl;
    } else {
        cout << "You disn't give me any ratings you dumbass" << endl;
    }

    return 0;
}