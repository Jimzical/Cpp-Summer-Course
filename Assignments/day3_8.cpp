/*
Implement a class Matrix to represent 2D matrices. Overload the + operator to add
two Matrix objects and return their sum.
*/

#include<iostream>

using namespace std;

class Matrix
{
    private:
        int rows;
        int cols;
        int **mat;
    public:
        Matrix(int r, int c)
        {
            rows = r;
            cols = c;
            mat = new int*[rows];
            for(int i=0; i<rows; i++)
            {
                mat[i] = new int[cols];
            }
        }
        void accept();
        void display();
        Matrix operator+(Matrix m);
};

void Matrix::accept()
{
    cout << "Enter the elements of the matrix: " << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin >> mat[i][j];
        }
    }
}

void Matrix::display()
{
    cout << "The matrix is: " << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix Matrix::operator+(Matrix m)
{
    Matrix temp(rows, cols);
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            temp.mat[i][j] = mat[i][j] + m.mat[i][j];
        }
    }
    return temp;
}

int main()
{
    int r, c;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> r >> c;
    Matrix m1(r, c);
    Matrix m2(r, c);
    Matrix m3(r, c);
    m1.accept();
    m2.accept();
    m3 = m1 + m2;
    m3.display();
    return 0;
}
