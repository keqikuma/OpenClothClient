#include "ClothGLWidget.h"
#include <QOpenGLContext>

void ClothGLWidget::initializeGL() {
    initializeOpenGLFunctions();
    glClearColor(0.1f, 0.1f, 0.15f, 1.0f);
    glEnable(GL_DEPTH_TEST);
}

void ClothGLWidget::resizeGL(int w, int h) {
    glViewport(0, 0, w, h);
}

void ClothGLWidget::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // ⬇️ 之后在这里绘制三角网格 / 布料
}
