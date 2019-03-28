#include "question.h"

#include "filereader.h"

#include <QString>
#include <vector>

void Question::convertTextFromFileToQuestionAndAnswers(QString textFromFile)
{
    std::vector<QString> lines{};
    QString line{};
    for(int i{0}; i < textFromFile.size(); i++)
    {
        QChar signFromFile{textFromFile.at(i)};
        if(signFromFile != '#')
        {
            line.append(signFromFile);
        }
        else if (signFromFile == '#'){
            lines.push_back(line);
            line = QString{};
        }

        if(lines.size() == 5)
        {
            break;
        }
    }

    questionText = lines.at(0);
    answers[0] = lines.at(1);
    answers[1] = lines.at(2);
    answers[2] = lines.at(3);
    correctAnswerIndex = lines.at(4).toInt();
}

Question::Question()
{
    QString textFromFile{FileReader::getTextFromFile("D:/Question.txt")};
    convertTextFromFileToQuestionAndAnswers(textFromFile);
}

QString Question::getQuestionText()
{
    return questionText;
}

QString Question::getAnswerText(int answerIndex)
{
    return answers[answerIndex];
}

int32_t Question::getCorrectAnswerIndex()
{
    return correctAnswerIndex;
}
