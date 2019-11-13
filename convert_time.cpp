#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{

    // lê o tamanho da string
    int len = s.length();

    //Pega se o horário é AM ou PM
    string time_format = s.substr(len - 2, len - 1);

    //inicializa a string que vai ser colocado o novo horário e o tipo inteiro que será somado o horário
    string hh;
    int hour;

    //Pega o horário e converte para inteiro
    hour = stoi(s.substr(0, 2));

    //Se for "PM", verifica se o horário é menor que meio dia(12 horas), se for, soma na variavel hour e faz
    //o replace das string
    if (time_format == "PM")
    {

        if (hour < 12)
        {
            hour += 12;
            string hh = to_string(hour);
            s.replace(0, 2, hh);
        }
    }
    //se for "AM", verifica se é meia noite (12 horas), se for faz o replace por 00
    else
    {

        if (hour % 12 == 0)
        {
            s.replace(0, 2, "00");
        }
    }

    return s.substr(0, len - 2);
}

int main()
{

    string time = "12:10:43AM";

    string res = timeConversion(time);

    cout << res << endl;
}