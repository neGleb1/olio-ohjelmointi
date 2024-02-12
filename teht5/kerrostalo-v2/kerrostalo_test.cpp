#include "kerrostalo.h"

int main () {

    Kerrostalo *kerrostalo;
    kerrostalo = new Kerrostalo;
    kerrostalo->laskeKulutus(3);
    delete kerrostalo;
    kerrostalo = nullptr;
    return 0;
}
