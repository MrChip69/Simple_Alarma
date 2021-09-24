#include <iostream>
#include <windows.h>
#include <sstream>
#include <string>
using namespace std;

void alarma(int minutos)
{
 int temporizador = 1;
 while (true)
 {

   cout << temporizador << endl;

   if (temporizador == minutos) cout << "TIEMPO!" << endl;

   if (temporizador > minutos){
    int n = 0;
    while(n <= 2){
    if (temporizador > minutos) cout << "\a";
    Sleep(850);
    n++;
    }

   }

   Sleep(60000); //60 segundos
   temporizador++;
 }
}

int main(int argc, char *argv[])
{
 SetConsoleTitle("Temporizador");
 cout << "Minutos: ";
 string s;
 getline(cin, s);
 int minutos;
 if (istringstream(s) >> minutos) alarma(minutos);
 system("PAUSE");
 return 0;
}

//MrChip was here! ;D
