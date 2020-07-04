#ifndef LOFI_H
#define LOFI_H

#include <QMainWindow>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class lofi; }
QT_END_NAMESPACE

struct Station{
    QString name;
    QString url;
};

class lofi : public QMainWindow
{
    Q_OBJECT

public:

    void setStreams(){
        this->liveStation[0] = { "Lauft.fm" , "http://stream.laut.fm/lofi"};
        this->liveStation[1] = {"Planet Lofi","http://198.245.60.88:8080" };
        this->liveStation[2] = {"Chill Cafe","http://192.99.35.215:5078"};
        this->liveStation[3] = {"Stream Name","http://192.99.0.170:5038C"};
        this->liveStation[4] = {"No Copyright Stream","http://78.129.222.70:33297" };
    QString nurl5 = "Radio Seguidor - http://176.9.43.216:8236";
    QString nurl6 = "Chillsky - https://lfhh.radioca.st/stream";
    QString nurl7 = "The Augmented Ear - http://66.228.41.10:8000/http://thirtythree-45.com:8000";
    QString nurl8 = "Lofi Hip Hop Radio - https://stream.zeno.fm/0r0xa792kwzuv";
    QString nurl6 = "RauteMusik.FM Study - http://de-hz-fal-stream07.rautemusik.fm/study";
    }

    int playStatus(){
        return this->isPlaying;
    }

    void setPlaying(){
        this ->isPlaying = 1;
    }

    void setPause(){
        this ->isPlaying = 0;
    }

    void setAudio(){
      this->player.setMedia(QUrl(this->url));
    }

    void playAudio() {
      this->player.play();
    }

    void changeVolume(int val) {
        this->player.setVolume(val);
    }

    void pauseAudio() {
      this->player.pause();
    }

    lofi(QWidget *parent = nullptr);
    ~lofi();

private slots:
    void on_Button_clicked();

    void on_volumeSlider_sliderMoved(int position);


    void on_Button_pressed();

private:
    int isPlaying = 0;
    Ui::lofi *ui;
    Station liveStation[10];
    QMediaPlayer player;
};
#endif // LOFI_H
