#include "uuid.h"
#include <random>

static size_t generate_uuid() {
    static thread_local std::mt19937_64 gen(std::random_device{}());
    static thread_local std::uniform_int_distribution<size_t> distrib;
    return distrib(gen);
}

UUID::UUID()
    : uuid(generate_uuid()) {
}

UUID::UUID(size_t uuid)
    : uuid(uuid) {
}
