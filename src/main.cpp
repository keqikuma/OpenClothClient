#include <QApplication>
#include <QSurfaceFormat>
#include <QMainWindow>
#include "gui/ClothGLWidget.h"

int main(int argc, char *argv[]) {
    // ① 指定 4.1 Core Profile
    QSurfaceFormat fmt;
    fmt.setVersion(4, 1);
    fmt.setProfile(QSurfaceFormat::CoreProfile);
    fmt.setOption(QSurfaceFormat::DebugContext);
    QSurfaceFormat::setDefaultFormat(fmt);   // *必须* 在 QApplication 之前

    QApplication app(argc, argv);
    QMainWindow win;
    auto *view = new ClothGLWidget;
    win.setCentralWidget(view);
    win.resize(1280, 720);
    win.show();
    return app.exec();
}

