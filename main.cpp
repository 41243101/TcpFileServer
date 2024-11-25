//#include "tcpfileserver.h"
//#include "tcpfilesender.h"
#include "tabwidge.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //QApplication a(argc, argv);
    //TcpFileServer w1;
    //TcpFileSender w2;
    //w1.show();
    //w2.show();
    Tabwidge tabwidge;
    tabwidge.resize(400, 300); // 設置窗口大小
    tabwidge.show();

    return app.exec();
    //return a.exec();
}
