#include <d20lib.h>
#include <test_helper.h>

int main() {
    d20::Item *item = new d20::LongSword;
    ASSERT(item->get_name() == "long sword");

    return 0;
}
