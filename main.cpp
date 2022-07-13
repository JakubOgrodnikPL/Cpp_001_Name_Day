//In this task a kid needs to give candies to other kids from the class
//Rules are that:
//Every kid should get as much candies as possible
//None of the kids is favored and should not get more than the others
//Candies can not be divided into pieces
//The kid and the teacher do not eat candies that day

#include <iostream> //Include library iostream input-output stream.

using namespace std; // using standard namespace

int pupils, candies, x, y;
//x - number of candies for each student
//y - number of candies for the kid to eat at home (the rest)

int main() //Main function of the program; int = integer at the end it returns integer value
{
    cout << "In this task the kid has name day and needs to give candies to other kids from the class."
            "\nRules are that:"
            "\nEvery kid should get as much candies as possible"
            "\nNone of the kids is favored and should not get more than the others"
            "\nCandies can not be divided into pieces"
            "\nThe kid and the teacher do not eat candies that day" << endl;

    cout << "\nHow many pupils are in the class? \n";
    cin >> pupils;
    cout << "How many candies bought the mother of the kid? \n";
    cin >> candies;

    x = candies/(pupils-1);

    cout << "\nCandies for each pupil:" << x << endl;

    y = candies - x*(pupils-1);

    cout << "\nCandies for the kid to eat at home:" << y << endl;

    cout << "\nPress any key to continue";
    getchar();
    getchar();

    return 0;
}
