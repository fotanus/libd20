#include <d20lib.h>
#include <test_helper.h>

int main() {
    d20::Item *item = new d20::LongBow;
    ASSERT(item->get_name() == "long bow");

    return 0;
}
