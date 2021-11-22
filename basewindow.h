#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QMainWindow>
#include <QVariantMap>

QT_BEGIN_NAMESPACE
namespace Ui { class BaseWindow; }
QT_END_NAMESPACE

class BaseWindow : public QMainWindow
{
    Q_OBJECT

public:
    BaseWindow(QWidget *parent = nullptr);
    ~BaseWindow();

public slots:
    void mountTablePlaylist();
    void searchResultsBy(const QString &term);

private:
    Ui::BaseWindow *ui;

    QString _lasterm ="";
    int _limit = 0;
    int _offset= 0;
};
#endif // BASEWINDOW_H
