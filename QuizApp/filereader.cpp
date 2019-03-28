#include "filereader.h"

#include <QFile>

FileReader::FileReader()
{

}

QString FileReader::getTextFromFile(std::string fileName)
{
    QFile file{"D:/Question.txt"};
    //std::ifstream file{"Question.txt", std::ifstream::in};
    //file.open("Question.txt", std::ifstream::in);

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return QString::fromStdString(fileName);
    }

    std::string finalText{};
    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        finalText.append(line.toStdString());
    }

    return QString::fromStdString(finalText);
}
