/*Aluno

Nicolas

*/


#include <iostream>
using namespace std;
int main()
{
    long long int num,d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,soma,divisao, dverificador; ///Declaracao de variaveis

    cout<< "Insira um valor de 13 digitos\n";
    cin>> num; ///Inserir o numero de 13 digitos

    if (num<1000000000000||num>9999999999999)
    {
        cout<< "O numero digitado esta inconsistente, favor inserir um numero de 13 digitos\n";
        cin>>num; ///Aqui eh a verificacao da quantidade de digitos do numero
    }


    d0= num%10;
    num= num/10;
    d1= num%10;
    num= num/10;
    d2= num%10;
    num= num/10;
    d3= num%10;
    num= num/10;
    d4= num%10;
    num = num/10;
    d5= num%10;
    num= num/10;
    d6= num%10;
    num= num/10;
    d7= num%10;
    num= num/10;
    d8= num%10;
    num= num/10;
    d9= num%10;
    num= num/10;
    d10= num%10;
    num= num/10;
    d11= num%10;
    d12=num/10; ///Aqui atribuimos os valores das variaveis da direita para esquerda sendo d0 o numero que o digito verificador devera ser igual

    soma= d12+(d11*3)+d10+(d9*3)+d8+(d7*3)+d6+(d5*3)+d4+(d3*3)+d2+(d1*3); ///Aqui somamos os digitos em "casas" impares (multiplicados por 3) com os de casas pares

    divisao= soma/10; ///Conforme a regra, aqui dividimos a soma

    dverificador= ((divisao+1)*10)-soma;/// Formula para obter o digito verificador

    if (dverificador%10==0) ///Multiplos de 10 se tornam 0 (digito verificador)
    {
        dverificador=0;
    }
    if (dverificador==d0)/// Se o digito verificador for igual ao ultimo digito do codigo de barras, o mesmo esta correto
    {
        cout<< "Isso! Seu codigo de barras esta correto :D\n";
    }
    else {
        cout<< "Seu codigo esta errado :(\n"; /// Caso nao seja igual, o codigo esta errado

    }


    return 0;
}
