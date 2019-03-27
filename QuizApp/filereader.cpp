#include "filereader.h"

#include <fstream>

FileReader::FileReader()
{

}

QString FileReader::getTextFromFile(QString fileName)
{
    std::ifstream file{};
    file.open(fileName.toStdString(), std::ios::out);

    if(!file.is_open())
    {
        return "";
    }

    std::string finalString{};
    std::string line{};
    while(std::getline(file, line))
    {
        finalString.append(line);
    }

    return QString::fromStdString(finalString);
}
