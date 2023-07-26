#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;



namespace ns
{
    vector<int> guess_list;
    int check_ans(int ans, int random_number){
        for(int num:guess_list){
            if (num == ans)
            {
                cout << "You have already guessed!" << endl;
                return -1;
            }
            
        }
        if (ans == random_number){
            cout << "You got it right!" << endl;
            return 0;
        }
        // if guess in guess list
        else if (ans > random_number){
            float factor = (float(ans) - float(random_number))/float(random_number) * 100.0;
            cout << "Your guess is too high by " << factor << "%" << endl;
            guess_list.push_back(ans);
            return 1;
        }
        else if (ans < random_number){
            float factor = (float(random_number) -float(ans))/float(random_number) * 100.0;
            cout << "Your guess is too low!" << factor << "%"  << endl;
            guess_list.push_back(ans);
            return 2;
        }
        else{
            cout << "Invalid input!" << endl;
            return 3;
        }
    } 

} // namespace ns

class guess_game
{
private:
    int random_number;
public:
    guess_game(){
        cout << "Game Started!" << endl;
    };
    int get_ans(){
        cout << "Generating Number..." ;
        random_number = rand() % 100;
        cout << "Done" << endl;
        return random_number;
    }

};

int main(int argc, char const *argv[]){
    int number,guess;
    guess_game obj;
    number = obj.get_ans();

    while (true){
        cout << "Enter your guess: ";
        cin >> guess;
        if (ns::check_ans(guess,number) == 0){
            break;
        }
    }

    return 0;
}