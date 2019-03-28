#include "filereader.h"

#include <QFile>

FileReader::FileReader()
{

}

QString FileReader::getTextFromFile(QString fileName)
{
    QFile file{fileName};
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return fileName;
    }

    std::string finalText{};
    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        finalText.append(line.toStdString());
    }

    return QString::fromStdString(finalText);
}
