#include<iostream>

class ForStud
{
    public:

    int Var1;
    int *ptrToVar = &Var1;

};
int Fun(int* O)
{
    *O += 21;
    return 0;
}
int main()
{
    ForStud Object;
    Object.Var1 = 102;
    Object.ptrToVar;

    int &ReferensSomeNum = Object.Var1;
    Fun(&ReferensSomeNum);

    std::cout << Object.ptrToVar << "\n" << ReferensSomeNum << "\n"  << Object.Var1; 
    

}
