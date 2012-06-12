#include <iostream>
#include <QApplication>
#include <QObject>
#include <QUrl>
#include <QWebSettings>
#include <QWebFrame>
#include <QWebView>

#include "page_printer.h"

int main(int argc, char** argv) {
  if (argc != 2) {
    qDebug() << "Usage: " << argv[0] << " [URL]" << endl;
    return 1;
  }

  QApplication app(argc, argv);
  app.setOrganizationName("AVOS");
  app.setApplicationName("Page Printer");
  QWebSettings::globalSettings()
    ->setAttribute(QWebSettings::PluginsEnabled, true);
  QWebView view;
  PagePrinter page_printer(&view);
  QObject::connect(&view, SIGNAL(loadFinished(bool)), &page_printer,
          SLOT(loadFinished(bool)));
  view.load(QUrl(argv[1]));
  return app.exec();
}
