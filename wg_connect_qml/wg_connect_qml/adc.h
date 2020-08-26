#ifndef ADC_H
#define ADC_H

#include <QObject>
#include <QWidget>

class adc : public QObject
{
    Q_OBJECT
public:
    explicit adc(QObject *parent = nullptr);

signals:

};

#endif // ADC_H
