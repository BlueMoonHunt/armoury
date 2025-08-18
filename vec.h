#pragma once
#include <cstddef>
#include <cstdint>
#include <cassert>

template<typename T, std::size_t Size>
struct Vec {
    T data[Size];

    T& operator[](size_t index) {
        assert(index < Size);
        return data[index];
    }

    const T& operator[](size_t index) const {
        assert(index < Size);
        return data[index];
    }
};

template<typename T>
struct Vec<T, 2> {
    union {
        T data[2];
        struct { T x, y; };
        struct { T r, g; };
    };

    Vec() : x(0), y(0) {}
    explicit Vec(T scalar) : x(scalar), y(scalar) {}
    Vec(T x, T y) : r(x), g(y) {}

    T& operator[](size_t index) {
        assert(index < 2);
        return data[index];
    }

    const T& operator[](size_t index) const {
        assert(index < 2);
        return data[index];
    }
};

template<typename T>
struct Vec<T, 3> {
    union {
        T data[3];
        struct { T x, y, z; };
        struct { T r, g, b; };
    };

    Vec() : x(0), y(0), z(0) {}
    explicit Vec(T scalar) : x(scalar), y(scalar), z(scalar) {}
    Vec(T x, T y, T z) : r(x), g(y), b(z) {}

    T& operator[](size_t index) {
        assert(index < 3);
        return data[index];
    }

    const T& operator[](size_t index) const {
        assert(index < 3);
        return data[index];
    }
};

template<typename T>
struct Vec<T, 4> {
    union {
        T data[4];
        struct { T x, y, z, w; };
        struct { T r, g, b, a; };
    };

    Vec() : x(0), y(0), z(0), w(0) {}
    explicit Vec(T scalar) : x(scalar), y(scalar), z(scalar), w(scalar) {}
    Vec(T x, T y, T z, T w) : r(x), g(y), b(z), a(w) {}

    T& operator[](size_t index) {
        assert(index < 4);
        return data[index];
    }

    const T& operator[](size_t index) const {
        assert(index < 4);
        return data[index];
    }
};


// --- Floating-Point Vectors ---

// float (32-bit) - most common for graphics
using vec1 = Vec<float, 1>;
using vec2 = Vec<float, 2>;
using vec3 = Vec<float, 3>;
using vec4 = Vec<float, 4>;

// double (64-bit) - for higher precision
using dvec1 = Vec<double, 1>;
using dvec2 = Vec<double, 2>;
using dvec3 = Vec<double, 3>;
using dvec4 = Vec<double, 4>;


// --- Signed Integer Vectors ---

// int8_t
using i8vec1 = Vec<int8_t, 1>;
using i8vec2 = Vec<int8_t, 2>;
using i8vec3 = Vec<int8_t, 3>;
using i8vec4 = Vec<int8_t, 4>;

// int16_t
using i16vec1 = Vec<int16_t, 1>;
using i16vec2 = Vec<int16_t, 2>;
using i16vec3 = Vec<int16_t, 3>;
using i16vec4 = Vec<int16_t, 4>;

// int32_t (standard 'int')
using i32vec1 = Vec<int32_t, 1>;
using i32vec2 = Vec<int32_t, 2>;
using i32vec3 = Vec<int32_t, 3>;
using i32vec4 = Vec<int32_t, 4>;

// int64_t (long long)
using i64vec1 = Vec<int64_t, 1>;
using i64vec2 = Vec<int64_t, 2>;
using i64vec3 = Vec<int64_t, 3>;
using i64vec4 = Vec<int64_t, 4>;


// --- Unsigned Integer Vectors ---

// uint8_t (byte)
using u8vec1 = Vec<uint8_t, 1>;
using u8vec2 = Vec<uint8_t, 2>;
using u8vec3 = Vec<uint8_t, 3>;
using u8vec4 = Vec<uint8_t, 4>;

// uint16_t
using u16vec1 = Vec<uint16_t, 1>;
using u16vec2 = Vec<uint16_t, 2>;
using u16vec3 = Vec<uint16_t, 3>;
using u16vec4 = Vec<uint16_t, 4>;

// uint32_t (standard 'unsigned int')
using u32vec1 = Vec<uint32_t, 1>;
using u32vec2 = Vec<uint32_t, 2>;
using u32vec3 = Vec<uint32_t, 3>;
using u32vec4 = Vec<uint32_t, 4>;

// uint64_t (unsigned long long)
using u64vec1 = Vec<uint64_t, 1>;
using u64vec2 = Vec<uint64_t, 2>;
using u64vec3 = Vec<uint64_t, 3>;
using u64vec4 = Vec<uint64_t, 4>;


// --- Boolean Vectors ---
using bvec1 = Vec<bool, 1>;
using bvec2 = Vec<bool, 2>;
using bvec3 = Vec<bool, 3>;
using bvec4 = Vec<bool, 4>;


// --- Size Type Vectors ---
using size_vec1 = Vec<size_t, 1>;
using size_vec2 = Vec<size_t, 2>;
using size_vec3 = Vec<size_t, 3>;
using size_vec4 = Vec<size_t, 4>;