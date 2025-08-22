#include <cstddef>

class UUID {
    explicit UUID();
    explicit UUID(size_t uuid);
    const size_t get() const { return uuid; }
private:
    size_t uuid;
};