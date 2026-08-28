#include "iostream"
using namespace std;

class MediaFile {
    protected:
    string filePath;
    public :
    MediaFile(string p) : filePath(p) {}
};

class AudioTrack : virtual public MediaFile {
    public:
    AudioTrack(string p) : MediaFile(p) {}
    void playAudio() {
        cout << "Playing audio track..." << endl;
    }
};

class VideoTrack : virtual public MediaFile {
    public:
    VideoTrack(string p) : MediaFile(p) {}
    void playVideo() {
        cout << "Playing video track..." << endl;
    }
};

class Movie : public AudioTrack, public VideoTrack {
    public :
    Movie(string p) : MediaFile(p) , AudioTrack(p) , VideoTrack(p) {}
    void play() {
        AudioTrack::playAudio();
        VideoTrack::playVideo();
    }
};

int main() {
    Movie myMovie("C:/movies/epic.mp4");
    myMovie.play();
}