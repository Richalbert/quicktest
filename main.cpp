#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "Objets.h"

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);
    
	Objets temp;
	QQmlApplicationEngine engine;
	engine.rootContext()->setContextProperty("qmlTemp", &temp);
	engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));
    
	return app.exec();
}
