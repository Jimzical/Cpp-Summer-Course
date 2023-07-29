/*
Write a c++ program for binary Operator Overloading for string concatenation (Use
character array), pre and post Decrement – Operator. Note use friend function.
*/


#include<iostream>
#include<string>

using namespace std;

class String
{
    private:
        char str[100];
    public:
        String()
        {
            str[0] = '\0';
        }
        String(char s[])
        {
            int i;
            for(i=0; s[i]!='\0'; i++)
            {
                str[i] = s[i];
            }
            str[i] = '\0';
        }
        void display();
        friend String operator+(String, String);
        friend String operator--(String);
        friend String operator--(String, int);
};


// OPERATOR OVERLOADING
String operator+(String s1, String s2)
{
    String s3;
    int i, j;
    for(i=0; s1.str[i]!='\0'; i++)
    {
        s3.str[i] = s1.str[i];
    }
    for(j=0; s2.str[j]!='\0'; j++)
    {
        s3.str[i+j] = s2.str[j];
    }
    s3.str[i+j] = '\0';
    return s3;
}

String operator--(String s)
{
    int i;
    for(i=0; s.str[i]!='\0'; i++);
    s.str[i-1] = '\0';
    return s;
}

String operator--(String s, int)
{
    int i;
    for(i=0; s.str[i]!='\0'; i++);
    s.str[i-1] = '\0';
    return s;
}

void String::display()
{
    cout << str << endl;
}

int main(int argc, char *argv[])
{
    String s1("Hello");
    String s2("World");
    String s3;
    s3 = s1 + s2;
    s3.display();
    s3 = --s3;
    s3.display();
    s3 = s3--;
    s3.display();
    return 0;
}