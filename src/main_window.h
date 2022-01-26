#ifndef MAIN_WINDOW_H__
#define MAIN_WINDOW_H__

#include <QWidget>

class MainWindow : public QWidget {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
};
#endif // MAIN_WINDOW_H__
