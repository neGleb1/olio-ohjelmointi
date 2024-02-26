#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

// this allows to use moc for tests
private slots:

    void n0Clicked();

    void n1Clicked();

    void n2Clicked();

    void n3Clicked();

    void n4Clicked();

    void n5Clicked();

    void n6Clicked();

    void n7Clicked();

    void n8Clicked();

    void n9Clicked();

    void addClicked();

    void subClicked();

    void mulClicked();

    void divClicked();
    
    void clearClicked();

    void enterClicked();

private:
    Ui::MainWindow *ui;
    QString number1;
    QString number2;
    int state;
    float result;
    short operand;

    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();
};
#endif // MAINWINDOW_H
