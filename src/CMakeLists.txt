add_executable(OpenCloth
    main.cpp
    gui/ClothGLWidget.cpp
    gui/ClothGLWidget.h
)

target_link_libraries(OpenCloth
    Qt6::Widgets
    Qt6::OpenGLWidgets   # 解决 QOpenGLWidget 头文件 & 链接
    Qt6::OpenGL
)

