#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();

private slots:
    void 2min();
    void 5min();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    QLabel *label;
    QTimer *pQTimer;
    short currentPlayer;
    short gameTime;
    
    void updateProgressBar();
    void setGameInfoText(QString text, short fontSize);
    void startGame();
    void stopGame();
    void switchTurns();
};
#endif
