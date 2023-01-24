/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v3/opentelemetry.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_TRACE_V3_OPENTELEMETRY_PROTO_UPB_H_
#define ENVOY_CONFIG_TRACE_V3_OPENTELEMETRY_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_trace_v3_OpenTelemetryConfig;
typedef struct envoy_config_trace_v3_OpenTelemetryConfig envoy_config_trace_v3_OpenTelemetryConfig;
extern const upb_MiniTable envoy_config_trace_v3_OpenTelemetryConfig_msginit;
struct envoy_config_core_v3_GrpcService;
extern const upb_MiniTable envoy_config_core_v3_GrpcService_msginit;



/* envoy.config.trace.v3.OpenTelemetryConfig */

UPB_INLINE envoy_config_trace_v3_OpenTelemetryConfig* envoy_config_trace_v3_OpenTelemetryConfig_new(upb_Arena* arena) {
  return (envoy_config_trace_v3_OpenTelemetryConfig*)_upb_Message_New(&envoy_config_trace_v3_OpenTelemetryConfig_msginit, arena);
}
UPB_INLINE envoy_config_trace_v3_OpenTelemetryConfig* envoy_config_trace_v3_OpenTelemetryConfig_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_config_trace_v3_OpenTelemetryConfig* ret = envoy_config_trace_v3_OpenTelemetryConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_trace_v3_OpenTelemetryConfig_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_config_trace_v3_OpenTelemetryConfig* envoy_config_trace_v3_OpenTelemetryConfig_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_config_trace_v3_OpenTelemetryConfig* ret = envoy_config_trace_v3_OpenTelemetryConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_trace_v3_OpenTelemetryConfig_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_config_trace_v3_OpenTelemetryConfig_serialize(const envoy_config_trace_v3_OpenTelemetryConfig* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_config_trace_v3_OpenTelemetryConfig_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_config_trace_v3_OpenTelemetryConfig_serialize_ex(const envoy_config_trace_v3_OpenTelemetryConfig* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_config_trace_v3_OpenTelemetryConfig_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool envoy_config_trace_v3_OpenTelemetryConfig_has_grpc_service(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_clear_grpc_service(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const upb_Message*) = NULL;
}
UPB_INLINE const struct envoy_config_core_v3_GrpcService* envoy_config_trace_v3_OpenTelemetryConfig_grpc_service(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_config_core_v3_GrpcService*);
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_clear_service_name(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_config_trace_v3_OpenTelemetryConfig_service_name(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_StringView);
}

UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_set_grpc_service(envoy_config_trace_v3_OpenTelemetryConfig *msg, struct envoy_config_core_v3_GrpcService* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_config_core_v3_GrpcService*) = value;
}
UPB_INLINE struct envoy_config_core_v3_GrpcService* envoy_config_trace_v3_OpenTelemetryConfig_mutable_grpc_service(envoy_config_trace_v3_OpenTelemetryConfig* msg, upb_Arena* arena) {
  struct envoy_config_core_v3_GrpcService* sub = (struct envoy_config_core_v3_GrpcService*)envoy_config_trace_v3_OpenTelemetryConfig_grpc_service(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_GrpcService*)_upb_Message_New(&envoy_config_core_v3_GrpcService_msginit, arena);
    if (!sub) return NULL;
    envoy_config_trace_v3_OpenTelemetryConfig_set_grpc_service(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_set_service_name(envoy_config_trace_v3_OpenTelemetryConfig *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_StringView) = value;
}

extern const upb_MiniTable_File envoy_config_trace_v3_opentelemetry_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_TRACE_V3_OPENTELEMETRY_PROTO_UPB_H_ */
