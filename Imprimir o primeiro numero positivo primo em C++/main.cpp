#include <iostream>

using namespace std;

int main()
{
    /*O objetivo desta aula de laborat�rio � praticar o uso de estruturas de controle como visto na parte te�rica da
    disciplina. Para isto, voc� deve implementar um programa que receba como entrada um n�mero inteiro positivo n
    e que imprima na tela quais dos n primeiros n�meros inteiros positivos � primo ou n�o. Um exemplo � mostrado
    a seguir:*/

    int i, n;

    cout<<"insira um numero inteiro positivo: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if(n%i==0){
            cout<<i<<" :divisivel"<<endl;
        }
        else{
            cout<<i<<" :divisivel"<<endl;
        }
        }

    return 0;
}
