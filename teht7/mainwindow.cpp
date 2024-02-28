#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
    label = ui->infoLabel;
    gameTime = 0;
    
    connect (pQTimer, &QTimer::timeout, this, &MainWindow::timeout);
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::stopGame);
    connect(ui->2min, &QPushButton::clicked, this, &MainWindow::2min);
    connect(ui->5min, &QPushButton::clicked, this, &MainWindow::5min);
    connect(ui->switchButton1, &QPushButton::clicked, this, &MainWindow::switchTurns);
    connect(ui->switchButton2, &QPushButton::clicked, this, &MainWindow::switchTurns);
    connect(ui->progressBar1, &QProgressBar::valueChanged, this, &MainWindow::updateProgressBar);
    connect(ui->progressBar2, &QProgressBar::valueChanged, this, &MainWindow::updateProgressBar);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer=nullptr;
}


void MainWindow::setGameInfoText(QString text, short fontSize) {
    ui->infoLabel->setText(text);
}

void MainWindow::switchTurns() {
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if ((currentPlayer == 1 && sender() != ui->switchButton1) ||
        (currentPlayer == 2 && sender() != ui->switchButton2)) {
        return;
    }
    
    if (currentPlayer == 1) {
       currentPlayer = 2;
    } else {
        currentPlayer = 1;
    }

    updateProgressBar();
}

void MainWindow::timeout(){
    if (currentPlayer == 1) {
        player1Time--;
    } else {
        player2Time--;
    }

    updateProgressBar();

    if (player1Time <= 0 || player2Time <= 0){
        pTimer->stop();

        if (player1Time <= 0) {
            setGameInfoText("Player 2 WON!!!", 15);
        } else {
            setGameInfoText("Player 1 WON!!!", 15);
        }
    }
}





void MainWindow::updateProgressBar() {
    ui->progressBar1->setValue(player1Time);
    ui->progressBar2->setValue(player2Time);
}


void MainWindow::startGame() {

    currentPlayer = 1;
    short gameDuration = gameTime;

    if (gameDuration <= 0){
        setGameInfoText("Select playtime and press start game!", 15);
        return;
    }

    player1Time = gameDuration;
    player2Time = gameDuration;

    ui->player1progressBar->setMaximum(gameDuration);
    ui->player2progressBar->setMaximum(gameDuration);
    ui->player1progressBar->setValue(gameDuration);
    ui->player2progressBar->setValue(gameDuration);

    pQTimer->start(1000);

    setGameInfoText("Game ongoing", 15);
}

void MainWindow::stopGame(){

    pQTimer->stop();

    player1Time = 0;
    player2Time = 0;

    ui->progressBar1->setValue(ui->progressBar1->maximum());
    ui->progressBar2->setValue(ui->progressBar2->maximum());

    updateProgressBar();

    setGameInfoText("Select playtime and press start game!", 15);
}



void MainWindow::2min()
{
    gameTime = 120;
}


void MainWindow::5min()
{
    gameTime = 300;
}
