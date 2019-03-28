#ifndef QUESTION_H
#define QUESTION_H

#include <QString>

class Question
{
    QString questionText{};
    QString answers[3];

    void convertTextFromFileToQuestionAndAnswers(QString textFromFile);
public:
    Question();
    QString getQuestionText();
    QString getAnswerText(int answerIndex);
};

#endif // QUESTION_H
