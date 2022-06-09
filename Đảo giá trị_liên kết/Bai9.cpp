#include "List.h"

int main()
{
    LIST l;
    Input(l);
    //DelHead(l);
    //DelTail(l);
    cout << "Dao gia tri: ";
    DaoGiaTri(l);
    Output(l);
    cout << "Dao lien ket: ";
    DaoLienKet(l);
    Output(l);
    return 0;
}
