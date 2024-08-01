#pragma once

namespace multexec {
    struct Shared {
        int a, b;
        bool same() {
            return a == b;
        }
    };
} // namespace multexec