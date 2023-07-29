/*
Make a class named Fruit with a data member to calculate the number of fruits in a
basket. Create two other class named Apples and Mangoes to calculate the number of
apples and mangoes in the basket. Print the number of fruits of each type and the total
number of fruits in the basket. Choose an appropriate type of inheritance and
implement the same.
*/

#include <iostream>

using namespace std;

class Fruit
{
protected:
    int total_fruits;

public:
    Fruit()
    {
        total_fruits = 0;
    }
    void set_total_fruits(int total_fruits)
    {
        this->total_fruits = total_fruits;
    }
    int get_total_fruits()
    {
        return total_fruits;
    }
};

class Apples : public Fruit
{
private:
    int total_apples;

public:
    Apples()
    {
        total_apples = 0;
    }
    void set_total_apples(int total_apples)
    {
        this->total_apples = total_apples;
    }
    int get_total_apples()
    {
        return total_apples;
    }
};

class Mangoes : public Fruit
{
private:
    int total_mangoes;

public:
    Mangoes()
    {
        total_mangoes = 0;
    }
    void set_total_mangoes(int total_mangoes)
    {
        this->total_mangoes = total_mangoes;
    }
    int get_total_mangoes()
    {
        return total_mangoes;
    }
};


int main()
{
    Apples a;
    Mangoes m;
    int total_apples, total_mangoes;
    cout << "Enter the total number of apples: ";
    cin >> total_apples;
    cout << "Enter the total number of mangoes: ";
    cin >> total_mangoes;
    a.set_total_apples(total_apples);
    m.set_total_mangoes(total_mangoes);
    a.set_total_fruits(total_apples + total_mangoes);
    m.set_total_fruits(total_apples + total_mangoes);
    
    cout << "Total number of apples: " << a.get_total_apples() << endl;
    cout << "Total number of mangoes: " << m.get_total_mangoes() << endl;
    cout << "Total number of fruits: " << a.get_total_fruits() << endl;
    return 0;
}