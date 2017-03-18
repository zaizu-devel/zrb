#DESTDIR      = bin/$${VER}
DESTDIR      = bin
#BUILD_DIR    = build/$${VER}
BUILD_DIR    = $$PWD/build
OBJECTS_DIR  = $${BUILD_DIR}/obj
MOC_DIR      = $${BUILD_DIR}/moc
SRC_DIR      = $$PWD/src

UI_DIR       = $${BUILD_DIR}
RCC_DIR      = $${BUILD_DIR}

QT += widgets gui core
CONFIG += qt debug

QMAKE_CXXFLAGS = -g -Ibuild

VER = debug


#INCLUDEPATH += /build
#unix:
#INCLUDEPATH += $PWD/build

FORMS = \
        $${PWD}/ui/unit.ui \
        $${PWD}/ui/main.ui


HEADERS = \
          $$SRC_DIR/MainWindow.h \
          $$SRC_DIR/UnitWidget.h


SOURCES = \
          $$SRC_DIR/main.cpp \
          $$SRC_DIR/MainWindow.cpp



# install
#//target.path = $$[QT_INSTALL_EXAMPLES]/widgets/windowflags
#//sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS windowflags.pro
#//sources.path = $$[QT_INSTALL_EXAMPLES]/widgets/windowflags
#//INSTALLS += target sources

