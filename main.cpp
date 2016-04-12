#include <QCoreApplication>
#include <String>
#include <iostream>
#include <stdio.h>
using namespace std;

void fromFEN(string fenStr)
{
    //bool result = true;
    std::cout << "Incoming string" << fenStr<< std::endl;
    char tabla[8][8]={ /*  */ };
    for(int i=0;i<8;i++)
    {
        if ((fenStr[i]>'1') && (fenStr[i]<'8'))
        {
            cout << "i: " << i << endl;
            i += (fenStr[i]-49);
            cout << "i2: " << ((int)i -49) << endl;
            //tabla[0][k]='#';
            /*for (int k=0;k<i;k++)
            {
                tabla[0][k]='#';
            }*/
        }
        else
        {

           tabla[0][i]=fenStr[i];
        }
    }

    for (int k=0;k<8;k++)
    {
        cout << ": " << tabla[0][k] << endl;
    }

    /*for(int ii=0;ii<8;ii++)
    {
        for (int j=0;j<8;j++)
        {
            std::cout << tabla[ii][j];
        }

    }*/

    return;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string fenStr = "6p";
    for (int i=0;i<8;i++)
    {
        if (i>=(int)fenStr.length())
        {
            fenStr.append("x");
        }
        cout << "i" << i << endl;
        cout << fenStr[i] <<endl;
    }
    fromFEN(fenStr);
    return a.exec();

}



