#include <string>

#include "cconfig.h"

namespace cconfig {

std::string CustomConfig::GetCustomConfig() { return "Namespace configuration"; };

};

std::string CustomConfig::GetCustomConfig() {
        return "Global configuration";
};