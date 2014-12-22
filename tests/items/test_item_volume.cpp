#include <d20lib.h>
#include <test_helper.h>

int main() {
    d20::Item *item = new d20::LongSword;
    ASSERT(item->get_volume() == 37800.0);

    return 0;
}
