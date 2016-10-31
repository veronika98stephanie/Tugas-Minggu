#include <iostream>
#include "grade.h"

using namespace std;

class Essay : public GradedActivity
{
private:
    double grammar;//30
    double spelling;//20 points
    double correctLength;//20 points
    double content;// 30 points
public:
    Essay (double g, double s, double c, double cc)
    {
        grammar = g*30/100;
        spelling = s*20/100;
        correctLength = c*20/100;
        content = cc*30/100;
    }

    double getTotalScore()
    {
        return grammar + spelling + correctLength+ content;
    }
};

int main ()
{
    double g, s, c, cc;
    cout << "Please input the score for " << endl;
    cout << "grammar, spelling, correct length, and content" << endl;
    cin >> g >> s >> c >> cc;

    Essay one (g, s, c, cc);

    double totScore = one.getTotalScore();

    GradedActivity theScore;

    theScore.setScore(totScore);

    cout << "Your score is " << theScore.getLetterGrade() << endl;

    return 0;
}
