CMAKE_MINIMUM_REQUIRED(VERSION 2.8.11)

PROJECT(helloqt)

SET(CMAKE_AUTOMOC ON)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)
FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
SET(QT_USE_QTMAIN true)

SET(helloqt_SOURCES main.cpp helloqtwindow.cpp)
SET(helloqt_HEADERS helloqtwindow.h)
SET(helloqt_UIS helloqtwindow.ui)
QT4_WRAP_UI(helloqt_UIS_HEADERS ${helloqt_UIS})

ADD_EXECUTABLE(helloqt
	${helloqt_SOURCES}
	${helloqt_HEADERS}
	${helloqt_UIS_HEADERS}
)

TARGET_LINK_LIBRARIES(helloqt
${QT_LIBRARIES}
)
