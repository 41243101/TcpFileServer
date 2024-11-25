#ifndef TABWIDGE_H
#define TABWIDGE_H

#include <QWidget>
#include <QTabWidget>
#include <QVBoxLayout>
#include "tcpfilesender.h"
#include "tcpfileserver.h"
class Tabwidge : public QWidget
{
    Q_OBJECT
public:
    explicit Tabwidge(QWidget *parent = nullptr);
     ~Tabwidge();
//signals:
private:
     QTabWidget *tabWidget;      // 分頁控制元件
     QVBoxLayout *mainLayout;    // 主佈局
};

#endif // TABWIDGE_H
