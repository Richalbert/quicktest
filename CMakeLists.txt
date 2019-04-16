qt5_add_resources(testquick_SRCS resources.qrc)
add_executable(testquick Objets.cpp main.cpp ${testquick_SRCS})
target_link_libraries(testquick Qt5::Qml Qt5::Gui)
