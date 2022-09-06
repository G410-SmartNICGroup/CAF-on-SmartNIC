// clang-format off
// DO NOT EDIT: this file is auto-generated by caf-generate-enum-strings.
// Run the target update-enum-strings if this file is out of sync.
#include "caf/config.hpp"
#include "caf/string_view.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/exit_reason.hpp"

#include <string>

namespace caf {

std::string to_string(exit_reason x) {
  switch(x) {
    default:
      return "???";
    case exit_reason::normal:
      return "caf::exit_reason::normal";
    case exit_reason::unhandled_exception:
      return "caf::exit_reason::unhandled_exception";
    case exit_reason::unknown:
      return "caf::exit_reason::unknown";
    case exit_reason::out_of_workers:
      return "caf::exit_reason::out_of_workers";
    case exit_reason::user_shutdown:
      return "caf::exit_reason::user_shutdown";
    case exit_reason::kill:
      return "caf::exit_reason::kill";
    case exit_reason::remote_link_unreachable:
      return "caf::exit_reason::remote_link_unreachable";
    case exit_reason::unreachable:
      return "caf::exit_reason::unreachable";
  };
}

bool from_string(string_view in, exit_reason& out) {
  if (in == "caf::exit_reason::normal") {
    out = exit_reason::normal;
    return true;
  } else if (in == "caf::exit_reason::unhandled_exception") {
    out = exit_reason::unhandled_exception;
    return true;
  } else if (in == "caf::exit_reason::unknown") {
    out = exit_reason::unknown;
    return true;
  } else if (in == "caf::exit_reason::out_of_workers") {
    out = exit_reason::out_of_workers;
    return true;
  } else if (in == "caf::exit_reason::user_shutdown") {
    out = exit_reason::user_shutdown;
    return true;
  } else if (in == "caf::exit_reason::kill") {
    out = exit_reason::kill;
    return true;
  } else if (in == "caf::exit_reason::remote_link_unreachable") {
    out = exit_reason::remote_link_unreachable;
    return true;
  } else if (in == "caf::exit_reason::unreachable") {
    out = exit_reason::unreachable;
    return true;
  } else {
    return false;
  }
}

bool from_integer(std::underlying_type_t<exit_reason> in,
                  exit_reason& out) {
  auto result = static_cast<exit_reason>(in);
  switch(result) {
    default:
      return false;
    case exit_reason::normal:
    case exit_reason::unhandled_exception:
    case exit_reason::unknown:
    case exit_reason::out_of_workers:
    case exit_reason::user_shutdown:
    case exit_reason::kill:
    case exit_reason::remote_link_unreachable:
    case exit_reason::unreachable:
      out = result;
      return true;
  };
}

} // namespace caf

CAF_POP_WARNINGS