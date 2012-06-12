#include "page_printer.h"
#include "page_printer.moc"

#include <iostream>

PagePrinter::PagePrinter(QWebView* view)
  : QObject(), view_(view) {
}

void PagePrinter::loadFinished(bool success) {
  std::cout << view_->page()->mainFrame()->toHtml().toLocal8Bit().constData();
  exit(0);
}
