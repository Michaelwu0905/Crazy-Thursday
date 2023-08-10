#include <iostream>
using namespace std;
void Menu()
{
    cout << "*************************" << endl
         << "当你迷茫的时候就看看这个：" << endl
         << "*************************" << endl;
}
bool Money()
{
    cout << "你有钱吗？" << endl
         << "0. 无" << endl
         << "1. 有" << endl;

    bool choice;
    cin >> choice;
    return choice;
}
bool Job()
{
    cout << "你有工作吗？" << endl
         << "0. 无" << endl
         << "1. 有" << endl;

    bool choice;
    cin >> choice;
    return choice;
}
bool Property()
{
    cout << "你有固定资产吗？" << endl
         << "0. 无" << endl
         << "1. 有" << endl;

    bool choice;
    cin >> choice;
    return choice;
}
bool Asshole()
{
    cout << "你有py吗？" << endl
         << "0. 无" << endl
         << "1. 有" << endl;

    bool choice;
    cin >> choice;
    return choice;
}
int main()
{
    Menu();
    if (Money())
    {
        cout << "V我50!" << endl;
        return 0;
    }
    else
    {
        if (Job())
        {
            cout << "攒钱然后V我50!" << endl;
            return 0;
        }
        else
        {
            if (Property())
            {
                cout << "卖掉然后v我50!" << endl;
                return 0;
            }
            else
            {
                L:
                if(Asshole())
                {
                    cout<<"卖py然后v我50！"<<endl;
                    return 0;
                }
                else
                {
                    cout<<"你骗人！"<<endl;
                    goto L;
                }
            }
        }
    }

    return 0;
}