#include "AlberoFilosofie.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include <windows.h>

void CoutCentered(std::string text) {
// This function will only center the text if it is less than the length of the console!
// Otherwise it will just display it on the console without centering it.

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Get the console handle.
PCONSOLE_SCREEN_BUFFER_INFO lpScreenInfo = new CONSOLE_SCREEN_BUFFER_INFO(); // Create a pointer to the Screen Info pointing to a temporal screen info.
GetConsoleScreenBufferInfo(hConsole, lpScreenInfo); // Saves the console screen info into the lpScreenInfo pointer.
COORD NewSBSize = lpScreenInfo->dwSize; // Gets the size of the screen
if (NewSBSize.X > text.size()) {
    int newpos = ((NewSBSize.X - text.size()) / 2); // Calculate the number of spaces to center the specific text.
    for (int i = 0; i < newpos; i++) std::cout << " "; // Prints the spaces
}
std::cout << text << std::endl; // Prints the text centered :]
}



void AlberoFilosofie::inizializza(){

    //inizializza m
    for(int i = 0;i<4;i++){
            for(int j=0;j<5;j++){
                matrix[i][j] = "non ancora scoperta";
            }
        }


}

void AlberoFilosofie::stampa(){



        int conta = 0;
    for(int i=0;i<5;i++)
        cout<<endl;
    //divisione per tipo
    cout<<"               Principio Primo               Geometria                Teologia                 Naturalismo   "<<endl;
    // il bellissimo alberello
    cout<<"          ----------------------------------------------------------------------------------------------------";
        cout<<endl;
    cout<<"          |                                                                                                    |"<<endl;
    do{
        cout<<"          |";
        for(int i=0;i<4;i++)
        cout<<"   "<<matrix[i][conta]<<"   ";
        cout<<"|";
        cout<<endl;
        if(conta<4){
        cout<<"           \\           |                         |                        |                        |            \\"<<endl;
        cout<<"           /           |                         |                        |                        |            /"<<endl;
        }
        conta++;
    }while(conta<5);

    cout<<"          ----------------------------------------------------------------------------------------------------";
        cout<<endl;

    for(int i=0;i<5;i++)
        cout<<endl;
};

void AlberoFilosofie::imparaMosse(string m){

    cout<<endl<<"\tHai imparato..."<<m<<endl;
    int l;
    int c;
    if(m == "arche"){
         l = 0;
         c = 0;
    }
    if(m == "idea di Dio"){
        l = 0;
        c = 1;
    }
    matrix[l][c] = m;
}

