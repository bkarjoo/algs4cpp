//
// Created by Behrooz Karjoo on 2019-03-21.
//

#ifndef ARRAY_H
#define ARRAY_H

#include <cassert>
#include <ostream>
#include <utility>

class IndexOutOfBoundsException{};

template <typename T>
class Array {
private:
    T * m_ptr{nullptr}; // pointer to the memory block of the array
    int m_size{0}; // size of the array, expressed in element count
    bool IsValidIndex(int index) const {
        return (index >= 0) && (index < m_size);
    }
    friend void swap(Array<T> &a, Array<T> &b) noexcept {
        std::swap(a.m_ptr, b.m_ptr);
        std::swap(a.m_size, b.m_size);
    }
    Array(Array &&source) noexcept {
        m_ptr = source.m_ptr;
        m_size = source.m_size;
        source.m_ptr = nullptr;
        source.m_size = 0;
    }
public:
    Array() = default;
    Array(int size) {
        if (size != 0) {
            m_ptr = new T[size]{};
            m_size = size;
        }
    }
    int Size() const { return m_size; }
    bool IsEmpty() const { return (m_size == 0); }
    ~Array() { delete[] m_ptr; }
    T& operator[](int index) {
        if (!IsValidIndex(index)) throw std::out_of_range("Index out of range");
        return m_ptr[index];
    }
    T operator[](int index) const {
        if (!IsValidIndex(index)) throw std::out_of_range("Index out of range");
        return m_ptr[index];
    }

    Array(const Array &source) {
        if (!source.IsEmpty()) {
            m_size = source.m_size;
            m_ptr = new T[m_size]{}; // allocate new block of memory
            for (int i = 0; i < m_size; i++)
                m_ptr[i] = source.m_ptr[i];
        }
    }
    Array<T> &operator=(Array source) {
        swap(*this, source);
        return *this;
    }

    T* Data() const { return m_ptr; }
    const T* begin() { return &m_ptr[0]; }
    const T* end() { return &m_ptr[m_size]; }
};

template <typename T>
std::ostream& operator<<(std::ostream &os, const Array<T> &a) {
    os << "[ ";
    for (int i = 0; i < a.Size(); i++) os << a[i] << ' ';
    os << "]";
    return os;
}


#endif /* end of include guard: ARRAY_H */
