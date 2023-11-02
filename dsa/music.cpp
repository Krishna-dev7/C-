#include <iostream>
#include <stack>
#include <string>

// Define a structure to represent a song
struct Song {
    std::string title;
    std::string artist;
    std::string file_path;

    Song(const std::string& t, const std::string& a, const std::string& path)
        : title(t), artist(a), file_path(path) {}
};

int main() {
    std::stack<Song> playlist;
    char choice;

    while (true) {
        std::cout << "\nSimple Music Player\n";
        std::cout << "1. Add a song to the playlist\n";
        std::cout << "2. Play the current song\n";
        std::cout << "3. Skip to the next song\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();  // Clear the newline character

        switch (choice) {
            case '1': {
                std::string title, artist, file_path;
                std::cout << "Enter song title: ";
                std::getline(std::cin, title);
                std::cout << "Enter artist: ";
                std::getline(std::cin, artist);
                std::cout << "Enter file path: ";
                std::getline(std::cin, file_path);

                // Create a Song object and push it onto the playlist stack
                Song song(title, artist, file_path);
                playlist.push(song);
                std::cout << "Added '" << title << "' to the playlist.\n";
                break;
            }
            case '2':
                if (!playlist.empty()) {
                    Song current_song = playlist.top();
                    std::cout << "Playing: " << current_song.title << " by " << current_song.artist << "\n";
                    // Add code here to play the audio file using a library like SDL.
                    // You'll need to handle audio playback separately.
                } else {
                    std::cout << "Playlist is empty. Add songs before playing.\n";
                }
                break;
            case '3':
                if (!playlist.empty()) {
                    std::cout << "Skipping to the next song.\n";
                    playlist.pop();
                } else {
                    std::cout << "Playlist is empty.\n";
                }
                break;
            case '4':
                std::cout << "Exiting the music player.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
