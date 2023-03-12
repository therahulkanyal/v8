#include "src/runtime/runtime-api-log.h"

#include <iostream>

#include "src/execution/arguments-inl.h"


namespace v8 {
namespace internal {
RUNTIME_FUNCTION(Runtime_TracePropertyStore) {
//   HandleScope hs(isolate);
//   CONVERT_ARG_CHECKED(Smi, call_site, 0);
//   CONVERT_ARG_CHECKED(Object, obj, 1);
//   CONVERT_ARG_CHECKED(Object, prop, 2);
//   CONVERT_ARG_CHECKED(Object, value, 3);

//   visv8_log_property_set(isolate, Smi::ToInt(call_site), obj, prop, value);

  return ReadOnlyRoots(isolate).undefined_value();
}

RUNTIME_FUNCTION(Runtime_TracePropertyLoad) {
//   HandleScope hs(isolate);
//   CONVERT_ARG_CHECKED(Smi, call_site, 0);
//   CONVERT_ARG_CHECKED(Object, obj, 1);
//   CONVERT_ARG_CHECKED(Object, prop, 2);

//   visv8_log_property_get(isolate, Smi::ToInt(call_site), obj, prop);

  return ReadOnlyRoots(isolate).undefined_value();
}

}
}