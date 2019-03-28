#ifndef FILEREADER_H
#define FILEREADER_H

#include <QString>


class FileReader
{
public:
    FileReader();
    static QString getTextFromFile(QString fileName);
};

#endif // FILEREADER_H
