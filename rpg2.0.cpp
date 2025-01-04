#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int main(){

    int opcn;
       char andar;
       char opc;
                     // Developed by discord.gg/ugeqBsaF2h: wender
       std::cout << "################################ \n";
       std::cout << "#                              # \n";
       std::cout << "#         Andarilho game       # \n";
       std::cout << "#                              # \n";
       std::cout << "#                              # \n";
       std::cout << "################################\n\n";
       
       inicio:
     
     std::cout << "Para qual lado deseja andar? use wasd > ";
     std::cin >> andar;


   switch(andar){
    case 'w':
    std::cout << "Voce andou para frente... \n ";
    break;
    case 'a':
    std::cout << "Voce andou para o lado esquerdo... \n ";
    break;
    case 's':
    std:cout << "Voce andou para tras... \n ";
       break;
       case 'd':
       std::cout << "Voce andou para o lado direito... \n ";
       break;
       default:
       std::cout << "Computador nao entendeu utilize letras minusculas e tenha certeza que usou wasd... \n ";
       Sleep(2222);
       exit;

}
meio:
    std::cout << "Para qual lado deseja andar agora?  > ";
    std::cin >> andar;

    switch(andar){
    case 'w':
    std::cout << "Voce encontrou uma porta! \n ";
    Sleep(2222);
    std::cout << "O que voce vai fazer? [1 abrir / 2 fazer nada] > ";
    std::cin >> opcn;
    if( opcn == 1){
        std::cout << "Voce achou o bolsonaro 22 assistindo as noticias! ";

    }else{
        std::cout << "Voce ficou parado em frente a porta... \n";
        Sleep(2222);
        goto fim;
    }
    std::cout << " O que voce faz? \n[1 pergunta pro bolsonaro o que ele acha do lula ]\n[ 2 se senta com o bozo e assisti as noticias com ele ]\n[ 3 fazer nada] ";
    std::cin >> opcn;
    if(opcn == 1){
        std::cout << "Ele o responde... \n";
        Sleep(500);
        std::cout << "Bozo:eu acho que o lula devia me dar uma mamada ahahahahahah... \n";
        Sleep(500);
        std::cout << "Voces riem juntos... \n";
    }else if(opcn == 2){
        std::cout << "Voce se senta ao lado do bozo e comeca a assistir tv com ele... ";
        Sleep(500);
        std::cout << "Ele pergunta se voce quer um cafezinho... ";
        Sleep(500);
        std::cout << "Voce aceita? [1 Sim / 2 Nao] > ";
        std::cin >> opcn;
        if(opcn == 1){
            std::cout << "Voce aceita o cafezinho e toma junto com o bozo enquanto assistem as noticias...";
            Sleep(3333);
            exit;
        }else{
            std::cout << "Bozo fica triste porem nao questiona... ";
            Sleep(1111);
            exit;
        }
    }
    break;
    case 'a':
    std::cout << "Voce encontrou o lula e a dalva na floresta!! \n  ";
    Sleep(1111);
    std::cout << "O que voce vai fazer?\n[1 bater no lula ]\n[ 2 Perguntar o que estao fazendo ]\n[ 3 ficar parado ] > ";
    std::cin >> opcn;
    if(opcn == 1){
        std::cout << "Voce bateu no lula e ele saiu correndo... ";
        Sleep(500);
        std::cout << "Derrepente aparece o bolsonaro 22 mito e se diverte voce ele e a dalva!!!  ";
    }else  if(opcn == 2){
        std::cout << "Eles te respondem que estao apenas a conversar e pede para que saia... ";
        Sleep(1111);
        std::cout << "O que voce faz?\n[1 questiona do porque em uma floresta]\n[2 se esconde na moita e assiste]\n[3 apenas sai e volta a sua posiçao original  ]";
        std::cin >> opcn;
        if(opcn == 1){
            std::cout << "Voce diz: Por que estao a conversar em uma floresta escondidos?... ";
            Sleep(1111);
            std::cout << "Eles respondem: Isso nao eh de sua conta saia daqui!!! ";
            Sleep(500);
            std::cout << "O que voce faz? [ 1 apenas sai... ] \n [ 2 se esconde na moita e assiste ] ";
            std::cin >> opcn;
            if(opcn == 1){
                std::cout << "Voce sai e retorna a sua posicao anterior... "; 
                goto meio;
            }else{
                std::cout << "Voce se esconde e o que ve em seguida te deixa traumatizado... ";
                Sleep(2222);
                exit;
            }
        }
    }else{
        std::cout << "Voce fica parado no mesmo lugar eles te veem e somem pela floresta ";
        Sleep(2222);
        goto fim;
    }
    break; 
    case 's':
    std::cout << "Voce voltou para a sua posicao anterior... \n";
       break;
       case 'd':
       std::cout << "Voce encontrou uma caixa \n";
       Sleep(2222);
       std::cout << "O que voce vai fazer? [1 abrir / 2 fazer nada] > ";
       std::cin >> opcn;
       if(opcn == 1){
        std::cout << "Voce abriu a caixa e achou uma bandeira do brasil e um kit do mito 22 bolsonaro!!! ";
       }else{
        std::cout << "Voce perdeu a chance de ver algo realmente util... ";
        Sleep(2222);
        goto fim;
       }
       break;
       default:
       std::cout << "Computador nao entendeu utilize letras minusculas... \n";
       Sleep(2222);
       exit;
            }
            fim:
            std::cout << "Gostaria de continuar jogando? [1 sim]  \n [2 nao] > ";
            std::cin >> opcn;
            if(opcn == 1){
             system("cls");
                goto inicio;
            }else{
                Sleep(500);
                exit;
            }
  
}