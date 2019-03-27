#ifndef QUESTION_H
#define QUESTION_H

#include <QString>

class Question
{
    QString questionText{};
    QString answers[3];
public:
    Question();
};

#endif // QUESTION_H
