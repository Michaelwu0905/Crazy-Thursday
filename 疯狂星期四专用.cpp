#include <iostream>
using namespace std;
void Menu()
{
    cout << "*************************" << endl
         << "������ã��ʱ��Ϳ��������" << endl
         << "*************************" << endl;
}
bool Money()
{
    cout << "����Ǯ��" << endl
         << "0. ��" << endl
         << "1. ��" << endl;

    bool choice;
    cin >> choice;
    return choice;
}
bool Job()
{
    cout << "���й�����" << endl
         << "0. ��" << endl
         << "1. ��" << endl;

    bool choice;
    cin >> choice;
    return choice;
}
bool Property()
{
    cout << "���й̶��ʲ���" << endl
         << "0. ��" << endl
         << "1. ��" << endl;

    bool choice;
    cin >> choice;
    return choice;
}
bool Asshole()
{
    cout << "����py��" << endl
         << "0. ��" << endl
         << "1. ��" << endl;

    bool choice;
    cin >> choice;
    return choice;
}
int main()
{
    Menu();
    if (Money())
    {
        cout << "V��50!" << endl;
        return 0;
    }
    else
    {
        if (Job())
        {
            cout << "��ǮȻ��V��50!" << endl;
            return 0;
        }
        else
        {
            if (Property())
            {
                cout << "����Ȼ��v��50!" << endl;
                return 0;
            }
            else
            {
                L:
                if(Asshole())
                {
                    cout<<"��pyȻ��v��50��"<<endl;
                    return 0;
                }
                else
                {
                    cout<<"��ƭ�ˣ�"<<endl;
                    goto L;
                }
            }
        }
    }

    return 0;
}