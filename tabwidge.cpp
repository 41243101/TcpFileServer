#include "tabwidge.h"

Tabwidge::Tabwidge(QWidget *parent)
 : QWidget{parent}
{
    mainLayout = new QVBoxLayout(this);
    tabWidget = new QTabWidget(this);

    // 添加分頁
    tabWidget->addTab(new TcpFileSender, QStringLiteral("傳送檔案"));
    tabWidget->addTab(new TcpFileServer, QStringLiteral("接收檔案"));

    mainLayout->addWidget(tabWidget);
    setLayout(mainLayout);

    setWindowTitle(QStringLiteral("TCP檔案傳輸"));
}

Tabwidge::~Tabwidge()
{
    // 釋放資源（如果需要）
}
