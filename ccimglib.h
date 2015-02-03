#ifndef CCIMGLIB_H
#define CCIMGLIB_H

#include "ccimglib_global.h"
#include <QImage>

class CCIMGLIBSHARED_EXPORT Ccimglib
{

public:
    Ccimglib();
    QImage cc_img_set_license(QImage*, QString);
    QString cc_img_get_license(QImage*, QString);
    void cc_img_save(QImage*, QString);

private:
    QString li =  QString("Creative Commons Attribution 4.0 International Public License") +
                  QString("By exercising the Licensed Rights (defined below), You accept and agree to be bound by the terms and conditions of this Creative Commons Attribution 4.0 International Public License (\"Public License\"). To the extent this Public License may be interpreted as a contract, You are granted the Licensed Rights in consideration of Your acceptance of these terms and conditions, and the Licensor grants You such rights in consideration of benefits the Licensor receives from making the Licensed Material available under these terms and conditions.") +
                  QString("Section 1 – Definitions.")+
                  QString("Adapted Material means material subject to Copyright and Similar Rights that is derived from or based upon the Licensed Material and in which the Licensed Material is translated, altered, arranged, transformed, or otherwise modified in a manner requiring permission under the Copyright and Similar Rights held by the Licensor. For purposes of this Public License, where the Licensed Material is a musical work, performance, or sound recording, Adapted Material is always produced where the Licensed Material is synched in timed relation with a moving image.") +
                  QString("Adapter's License means the license You apply to Your Copyright and Similar Rights in Your contributions to Adapted Material in accordance with the terms and conditions of this Public License.");

};

#endif // CCIMGLIB_H
