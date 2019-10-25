#include <QCoreApplication>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int funcionarios, depententes,idade, x = 0, numDependentes;
    float auxilio =0;
    for(funcionarios = 1; funcionarios <=5; funcionarios++)
    {
        printf("num de dependentes do funcionario %d: ", funcionarios);
        scanf("%d", &depententes);
        numDependentes = depententes;
        while(numDependentes >= 1)
        {
            printf("idade do dependente:");
            scanf("%d", &idade);
            if(idade<18)
            {
                x++;
            }
            numDependentes--;
        }
        auxilio = 60*x;
        printf("R$ %.2f\n",auxilio);
        //necessário resetar o valor do auxilio e do contador
        x=0;
        auxilio =0;
    }

    return a.exec();
}
