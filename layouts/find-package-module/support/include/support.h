#ifndef FIND_PACKAGE_MODULE__SUPPORT_H
#define FIND_PACKAGE_MODULE__SUPPORT_H

namespace support {

// https://stackoverflow.com/a/17362428
// Using 'inline' allows to have multiple definitions in separate source files
// without violating the one-definition rule
    inline int add(int a, int b) {
        return a + b;
    }

    int add2(int a);

} // namespace support

#endif // FIND_PACKAGE_MODULE__SUPPORT_H