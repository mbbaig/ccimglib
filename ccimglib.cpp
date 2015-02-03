#include "ccimglib.h"


Ccimglib::Ccimglib()
{
}

QImage Ccimglib::cc_img_set_license(QImage* img, QString img_path)
{
    if(!img->isNull())
    {
        img->setText("License", li);
    }
    return *img;
}

QString Ccimglib::cc_img_get_license(QImage* img, QString img_path)
{
    if(!img->isNull())
    {
        return QString(img->text("License"));
    }
    return QString("No License Imformation");
}

void Ccimglib::cc_img_save(QImage* img, QString img_path)
{
    img->save(img_path);
}
