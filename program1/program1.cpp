#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    bool goAgain = true;
    while (goAgain)
    {        
        int x1 = 0;                                                     //TITLE CARD
        while (x1 <= 50)
        {
        cout << "-";
        x1++;
        }
    
        cout << "\n " << setw(30) << "PERSONALITY TEST" << endl;
    
        int x2 = 0;
        while (x2 <= 50)
        {
        cout << "-";
        x2++;
        }

    
        char q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12;     //THE a, b, c, d OPTIONS OF THE TEST
        int extravert = 0;
        int introvert = 0;
        int positive = 0;
        int negative = 0;
        int silly = 0;
        int serious = 0;
        int planner = 0;
        int spontaneous = 0;
        bool inv1 = true;                                           //THE INVs ARE FOR THE WHILE STATEMENTS
        bool inv2 = true;
        bool inv3 = true;
        bool inv4 = true;
        bool inv5 = true;
        bool inv6 = true;
        bool inv7 = true;
        bool inv8 = true;
        bool inv9 = true;
        bool inv10 = true;
        bool inv11 = true;
        bool inv12 = true;

        cout << "\nAnswer the following twelve questions to find out your personality traits." << endl;

        cout << "\nWhat would you rather do for the weekend?" << endl;          //QUESTION 1
        cout << "       a. Party with some friends" << endl;
        cout << "       b. Hang out with a small group of people" << endl;
        cout << "       c. Watch a movie by myself" << endl;
        cout << "       d. Do some homework because I procrastinated!" << endl;
        cin >> q1;
        while (inv1){
            if (q1 == 'a' || q1 == 'A'){
                extravert = extravert + 2;
                inv1 = false;
            }
            else if (q1 == 'b' || q1 == 'B'){
                extravert = extravert + 1;
                inv1 = false;
            }
            else if (q1 == 'c' || q1 == 'C'){
                introvert = introvert + 1;
                inv1 = false;
            }
            else if (q1 == 'd' || q1 == 'D'){
                introvert = introvert + 2;
                inv1 = false;
            }                
            else{
                cout << "Invalid argument. Please type a, b, c, or d" << endl;
                cin >> q1;
            }
        }
        cout << endl;
        cout << "Do you ever need 'me time'?" << endl;      //QUESTION 2
        cout << "       a. No I love being around people" << endl;
        cout << "       b. I do but almost never" << endl;
        cout << "       c. I do need it lot of the time" << endl;
        cout << "       d. Me time? More like...all the time" << endl;
        cin >> q2;
        while (inv2){
            if (q2 == 'a' || q2 == 'A'){
                extravert = extravert + 2;
                inv2 = false;
            }
            else if (q2 == 'b' || q2 == 'B'){
                extravert = extravert + 1;
                inv2 = false;
            }
            else if (q2 == 'c' || q2 == 'C'){
                introvert = introvert + 1;
                inv2 = false;
            }
            else if (q2 == 'd' || q2 == 'D'){
                introvert = introvert + 2;
                inv2 = false;
            }                
            else{
                cout << "Invalid argument. Please type a, b, c, or d" << endl;
                cin >> q2;
            }
        }
        
        cout << endl; 
        cout << "Do you always feel the need to do something fun with people ";         //QUESTION 3
        cout << "or can you have fun alone?" << endl;
        cout << "       a. I always need to have people with me to have fun" << endl;
        cout << "       b. I usually want people around. If they're busy I do something else" << endl;
        cout << "       c. I can usually do activities by myself and still have fun" << endl;
        cout << "       d. I prefer to do things alone" << endl; 
        cin >> q3;
        while (inv3){
            if (q3 == 'a' || q3 == 'A'){
                extravert = extravert + 2;
                inv3 = false;
            }
            else if (q3 == 'b' || q3 == 'B'){
                extravert = extravert + 1;
                inv3 = false;
            }
            else if (q3 == 'c' || q3 == 'C'){
                introvert = introvert + 1;
                inv3 = false;
            }
            else if (q3 == 'd' || q3 == 'D'){
                introvert = introvert + 2;
                inv3 = false;
            }                
            else{
                cout << "Invalid argument. Please type a, b, c, or d" << endl;
                cin >> q3;
            }
        }
        cout << endl; 
        cout << "If you have an assignment due the night of, what do you do?" << endl;      //QUESTION 4
        cout << "       a. I decide it's not worth it and accept the loss" << endl;
        cout << "       b. I freak out and don't get started on it until an hour before it's due" << endl;
        cout << "       c. I freak out at first but calm myself down and get started right away" << endl;
        cout << "       d. I try to finish as soon as I realize I procrastinated" << endl; 
        cin >> q4;
        while(inv4){
            if (q4 == 'a' || q4 == 'A'){
                negative = negative + 2;
                inv4 = false;
            }
            else if (q4 == 'b' || q4 == 'B'){
                negative = negative + 1;
                inv4 = false;
            }
            else if (q4 == 'c' || q4 == 'C'){
                positive = positive + 1;
                inv4 = false;
            }
            else if (q4 == 'd' || q4 == 'D'){
                positive = positive + 2;
                inv4 = false;
            }
            else {
                cout << "Invalid argument. Please type a, b, c, d" << endl;
                cin >> q4;
            }
        }

        cout << endl;
        cout << "If you were eating some icecream and it fell off the cone, what would you do?" << endl;        //QUESTION 5
        cout << "       a. I'd probably scream and throw the cone on the floor" << endl;
        cout << "       b. I'd be silently frustrated and throw away the cone" << endl;
        cout << "       c. I'd be sad that I dropped it but still eat the rest" << endl;
        cout << "       d. I'd be sad but tell myself it's not the end of the world" << endl;
        cin >> q5;
            while(inv5){
            if (q5 == 'a' || q5 == 'A'){
                negative = negative + 2;
                inv5 = false;
            }
            else if (q5 == 'b' || q5 == 'B'){
                negative = negative + 1;
                inv5 = false;
            }
            else if (q5 == 'c' || q5 == 'C'){
                positive = positive + 1;
                inv5 = false;
            }
            else if (q5 == 'd' || q5 == 'D'){
                positive = positive + 2;
                inv5 = false;
            }
            else {
                cout << "Invalid argument. Please type a, b, c, d" << endl;
                cin >> q5;
            }
        }

        cout << endl;
        cout << "Do you typically expect the best things?" << endl;         //QUESTION 6
        cout << "       a. I usually expect something bad to happen" << endl;
        cout << "       b. Whatever happens happens. It's life" << endl;
        cout << "       c. I usually try to expect good things" << endl;
        cout << "       d. Yes! I always expect the best in life" << endl;
        cin >> q6;
        while(inv6){
            if (q6 == 'a' || q6 == 'A'){
                negative = negative + 2;
                inv6 = false;
            }
            else if (q6 == 'b' || q6 == 'B'){
                negative = negative + 1;
                inv6 = false;
            }
            else if (q6 == 'c' || q6 == 'C'){
                positive = positive + 1;
                inv6 = false;
            }
            else if (q6 == 'd' || q6 == 'D'){
                positive = positive + 2;
                inv6 = false;
            }
            else {
                cout << "Invalid argument. Please type a, b, c, d" << endl;
                cin >> q6;
            }
        }

        cout << endl;
        cout << "Are you generally the funny one or the serious one in a group?" << endl;       //QUESTION 7
        cout << "       a. I'm usually the funny one in the group" << endl;
        cout << "       b. I tell a joke every now and then" << endl;
        cout << "       c. I usually laugh with a group of friends but I don't make the jokes" << endl;
        cout << "       d. I sometimes have people ask me why I'm serious all the time" << endl; 
        cin >> q7;
        while(inv7){
            if (q7 == 'a' || q7 == 'A'){
                silly = silly + 2;
                inv7 = false;
            }
            else if (q7 == 'b' || q7 == 'B'){
                silly = silly + 1;
                inv7 = false;
            }
            else if (q7 == 'c' || q7 == 'C'){
                serious = serious + 1;
                inv7 = false;
            }
            else if (q7 == 'd' || q7 == 'D'){
                serious = serious + 2;
                inv7 = false;
            }
            else {
                cout << "Invalid argument. Please type a, b, c, d" << endl;
                cin >> q7;
            }
        }

        cout << endl;
        cout << "Are you the prankster of the group or the one receiving the pranks?" << endl;      //QUESTION 8
        cout << "       a. I am the prank god. Nobody is a better prankster than me" << endl;
        cout << "       b. I pull a prank every now and then" << endl;
        cout << "       c. I get pranked sometimes but I also prank them back" << endl;
        cout << "       d. I always get pranked. I haven't the time for this foolishness" << endl;
        cin >> q8;
        while(inv8){
            if (q8 == 'a' || q8 == 'A'){
                silly = silly + 2;
                inv8 = false;
            }
            else if (q8 == 'b' || q8 == 'B'){
                silly = silly + 1;
                inv8 = false;
            }
            else if (q8 == 'c' || q8 == 'C'){
                serious = serious + 1;
                inv8 = false;
            }
            else if (q8 == 'd' || q8 == 'D'){
                serious = serious + 2;
                inv8 = false;
            }
            else {
                cout << "Invalid argument. Please type a, b, c, d" << endl;
                cin >> q8;
            }
        }

        cout << endl;
        cout << "During a serious situation, how do you react to make it less awkward?" << endl;        //QUESTION 9
        cout << "       a. I usually joke about the situation, but that sometimes makes it worse" << endl;
        cout << "       b. I laugh at something funny but I keep the thought to myself" << endl;
        cout << "       c. I might think of something funny, but I also address the situation soberly" << endl;
        cout << "       d. I try to address the situation seriously and professionally" << endl;
        cin >> q9;
        while(inv9){
            if (q9 == 'a' || q9 == 'A'){
                silly = silly + 2;
                inv9 = false;
            }
            else if (q9 == 'b' || q9 == 'B'){
                silly = silly + 1;
                inv9 = false;
            }
            else if (q9 == 'c' || q9 == 'C'){
                serious = serious + 1;
                inv9 = false;
            }
            else if (q9 == 'd' || q9 == 'D'){
                serious = serious + 2;
                inv9 = false;
            }
            else {
                cout << "Invalid argument. Please type a, b, c, d" << endl;
                cin >> q9;
            }
        }

        cout << endl;
        cout << "If your teacher gave you an assignment due in a week, when would you start?" << endl;      //QUESTION 10
        cout << "       a. I'd start it right away and turn it in the day of or the next day" << endl;
        cout << "       b. I'd start on it the next day and finish it as soon as possible" << endl; 
        cout << "       c. I'd start on it over the weekend" << endl; 
        cout << "       d. I'd most likely start and finish it the day before it's due" << endl;
        cin >> q10;
        while(inv10){
            if (q10 == 'a' || q10 == 'A'){
                planner = planner + 2;
                inv10 = false;
            }
            else if (q10 == 'b' || q10 == 'B'){
                planner = planner + 1;
                inv10 = false;
            }
            else if (q10 == 'c' || q10 == 'C'){
                spontaneous = spontaneous + 1;
                inv10 = false;
            }
            else if (q10 == 'd' || q10 == 'D'){
                spontaneous = spontaneous + 2;
                inv10 = false;
            }
            else {
                cout << "Invalid argument. Please type a, b, c, d" << endl;
                cin >> q10;
            }
        }

        cout << endl;
        cout << "If your friend asked to take a trip out of the blue, how would you respond?" << endl;          //QUESTION 11
        cout << "       a. I'd most likely not go because I already had plans" << endl;
        cout << "       b. I would want to go but most likely couldn't unless I finished a bunch of to-do's" << endl;
        cout << "       c. I would try to squeeze it into my plans as best as I could and go" << endl;
        cout << "       d. I'd always go on a random trip. Those are fun!" << endl;
        cin >> q11;
        while(inv11){
            if (q11 == 'a' || q11 == 'A'){
                planner = planner + 2;
                inv11 = false;
            }
            else if (q11 == 'b' || q11 == 'B'){
                planner = planner + 1;
                inv11 = false;
            }
            else if (q11 == 'c' || q11 == 'C'){
                spontaneous = spontaneous + 1;
                inv11 = false;
            }
            else if (q11 == 'd' || q11 == 'D'){
                spontaneous = spontaneous + 2;
                inv11 = false;
            }
            else {
                cout << "Invalid argument. Please type a, b, c, d" << endl;
                cin >> q11;
            }
        }

        cout << endl;
        cout << "Oh no! You have an exam tomorrow! Are you prepared for it?" << endl;       //QUESTION 12
        cout << "       a. Yes. I've been studying all week" << endl;
        cout << "       b. I studied a bit throughout the weekend and am hoping for the best" << endl;
        cout << "       c. I've barely studied but I'm just gonna hope for the best" << endl;
        cout << "       d. Oh no there's an exam?? I completely forgot about it!" << endl; 
        cin >> q12;
        while(inv12){
            if (q12 == 'a' || q12 == 'A'){
                planner = planner + 2;
                inv12 = false;
            }
            else if (q12 == 'b' || q12 == 'B'){
                planner = planner + 1;
                inv12 = false;
            }
            else if (q12 == 'c' || q12 == 'C'){
                spontaneous = spontaneous + 1;
                inv12 = false;
            }
            else if (q12 == 'd' || q12 == 'D'){
                spontaneous = spontaneous + 2;
                inv12 = false;
            }
            else {
                cout << "Invalid argument. Please type a, b, c, d" << endl;
                cin >> q12;
            }
        }

        cout << endl;
        cout << " " << setw(30) << "RESULTS" << endl;            //RESULTS BAR
        int line1 = 0;
        for(line1 = 0; line1 <= 50; ++line1){
            cout << "-";
        }
        cout << endl;

        if (introvert > extravert)
            cout << "You are introverted" << endl;
        else if (introvert == extravert)
            cout << "You are neither extraverted nor introverted" << endl;
        else
            cout << "You are extraverted" << endl;

        if (positive > negative)
            cout << "You are a positive person" << endl;
        else if (positive == negative)
            cout << "You are neither a positive nor negative person" << endl;
        else
            cout << "You are a negative person" << endl;
        
        if (silly > serious)
            cout << "You are silly" << endl;
        else if (silly == serious)
            cout << "You are neither silly nor serious" << endl;
        else
            cout << "You are serious" << endl;

        if (planner > spontaneous)
            cout << "You are a planner" << endl;
        else if (planner == spontaneous)
            cout << "You are neither a planner nor spontaneous" << endl;
        else
            cout << "You are spontaneous" << endl;

        int line2 = 0;
        for(line2 = 0; line2 <= 50; ++line2){
            cout << "-";
        }

        bool notcool = true;                                            //QUESTIONS THE USER TO TAKE TEST AGAIN
        char response;
        cout << "\n\nWould you like to take the test again? (y/n)" << endl;
        cin >> response;
        while (notcool){
            if (response == 'y' || response == 'Y'){
                goAgain = true;
                notcool = false;
            }
            else if (response == 'n' || response == 'N'){
                goAgain = false;
                notcool = false;
                cout << "\nGoodbye\n";
            }
            else {
                cout << "Enter either y/n" << endl;
                cin >> response;
            }
        }   
        
        
    }
    
return 0;
}