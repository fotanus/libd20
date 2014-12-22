#ifndef INCLUDE_ITEMS_ITEM_H_
#define INCLUDE_ITEMS_ITEM_H_

#include <string>

namespace d20 {

class Item {
 public:
    /* Returns the item's name. */
    virtual std::string get_name() const;
    /* Returns the item's volume in cm^3 */
    virtual float get_volume() const;
    /* Returns the item's weight in kg */
    virtual float get_weight() const;
};

}  // namespace d20

#endif  // INCLUDE_ITEMS_ITEM_H_
