    /*
    Design an abstract base class Media with a pure virtual function play(). Derive two
    classes Audio and Video from Media. Implement the play() function in each derived
    class to play an audio and a video file.
    */

    #include <iostream>

    using namespace std;

    class Media{
    public:
        virtual void play() = 0;
    };

    class Audio: public Media{
    public:
        void play(){
            cout << "Playing audio..." << endl;
        }
    };

    class Video: public Media{
    public:
        void play(){
            cout << "Playing video..." << endl;
        }
    };

    int main(){
        Media *m;
        Audio a;
        Video v;
        m = &a;
        m->play();
        m = &v;
        m->play();
        return 0;
    }