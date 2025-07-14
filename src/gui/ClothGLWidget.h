#pragma once
#include <QOpenGLWidget>

#ifdef Q_OS_MAC          // macOS 最高 4.1
    #include <QOpenGLFunctions_4_1_Core>
    using GLFuncs = QOpenGLFunctions_4_1_Core;
#else                    // Win / Linux 可提到 4.5
    #include <QOpenGLFunctions_4_5_Core>
    using GLFuncs = QOpenGLFunctions_4_5_Core;
#endif

class ClothGLWidget : public QOpenGLWidget,
                      protected GLFuncs      // ← 统一用别名
{
    Q_OBJECT
protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
};

