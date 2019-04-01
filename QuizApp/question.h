#ifndef QUESTION_H
#define QUESTION_H

#include <QString>

class Question
{
    QString questionText{};
    QString answers[3];
    int32_t correctAnswerIndex{};

    void convertTextFromFileToQuestionAndAnswers(QString textFromFile);
public:
    Question(int32_t questionNumber);
    QString getQuestionText();
    QString getAnswerText(int answerIndex);
    int32_t getCorrectAnswerIndex();
};

#endif // QUESTION_H
