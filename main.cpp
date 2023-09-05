#include <QApplication>
#include <QLabel>

int main(int argc, char** argv)
{
	QApplication SkyrimModAssistant(argc, argv);
	QLabel hello_world("Hello, world");
	hello_world.show();
	return SkyrimModAssistant.exec();
}