#include <iostream>
using namespace std;

class Netflix {
private:
    // Internal details (hidden from the user)
    void connectToServer() {
        cout << "Connecting to Netflix servers..." << endl;
    }

    void loadMovieData() {
        cout << "Loading movie data and buffering..." << endl;
    }

    void decodeStream() {
        cout << "Decoding the video stream..." << endl;
    }

public:
    // Only the essential feature is visible to the user
    void playMovie(string movieName) {
        cout << "User selected: " << movieName << endl;
        connectToServer();     // internal work (hidden)
        loadMovieData();       // internal work (hidden)
        decodeStream();        // internal work (hidden)
        cout << "Now playing: " << movieName << " 🎬" << endl;
    }
};

int main() {
    Netflix user1;
    user1.playMovie("Money Heist");
    return 0;
}
