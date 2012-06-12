#ifndef MEIWEI_PAGE_PRINTER_H__
#define MEIWEI_PAGE_PRINTER_H__

#include <QDebug>
#include <QWidget>
#include <QWebFrame>
#include <QWebView>

class PagePrinter : public QObject {
  Q_OBJECT;
public:
  explicit PagePrinter(QWebView* view);
public slots:
  virtual void loadFinished(bool success);
private:
  QWebView* view_;
};

#endif  // MEIWEI_PAGE_PRINTER_H__
