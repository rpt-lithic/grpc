/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/discovery/v3/ads.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/reflection/def.h"
#include "envoy/service/discovery/v3/ads.upbdefs.h"
#include "envoy/service/discovery/v3/ads.upb.h"

extern _upb_DefPool_Init envoy_service_discovery_v3_discovery_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
static const char descriptor[681] = {'\n', '$', 'e', 'n', 'v', 'o', 'y', '/', 's', 'e', 'r', 'v', 'i', 'c', 'e', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 
'/', 'v', '3', '/', 'a', 'd', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\032', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 
'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '\032', '*', 'e', 'n', 'v', 'o', 'y', '/', 's', 
'e', 'r', 'v', 'i', 'c', 'e', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '/', 'v', '3', '/', 'd', 'i', 's', 'c', 'o', 
'v', 'e', 'r', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 
'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 
'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 
'o', '\"', '6', '\n', '\010', 'A', 'd', 's', 'D', 'u', 'm', 'm', 'y', ':', '*', '\232', '\305', '\210', '\036', '%', '\n', '#', 'e', 'n', 'v', 
'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '2', '.', 'A', 
'd', 's', 'D', 'u', 'm', 'm', 'y', '2', '\246', '\002', '\n', '\032', 'A', 'g', 'g', 'r', 'e', 'g', 'a', 't', 'e', 'd', 'D', 'i', 's', 
'c', 'o', 'v', 'e', 'r', 'y', 'S', 'e', 'r', 'v', 'i', 'c', 'e', '\022', '~', '\n', '\031', 'S', 't', 'r', 'e', 'a', 'm', 'A', 'g', 
'g', 'r', 'e', 'g', 'a', 't', 'e', 'd', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 's', '\022', ',', '.', 'e', 'n', 'v', 'o', 'y', 
'.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '.', 'D', 'i', 's', 
'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '-', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 
'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '.', 'D', 'i', 's', 'c', 'o', 'v', 'e', 
'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', '\001', '0', '\001', '\022', '\207', '\001', '\n', '\030', 'D', 'e', 'l', 't', 
'a', 'A', 'g', 'g', 'r', 'e', 'g', 'a', 't', 'e', 'd', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 's', '\022', '1', '.', 'e', 'n', 
'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '.', 
'D', 'e', 'l', 't', 'a', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '2', '.', 'e', 
'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', 
'.', 'D', 'e', 'l', 't', 'a', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', 
'(', '\001', '0', '\001', 'B', '\215', '\001', '\n', '(', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 
'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', 'B', 
'\010', 'A', 'd', 's', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 'M', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 
'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 
'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 's', 'e', 'r', 'v', 'i', 'c', 'e', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 
'/', 'v', '3', ';', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 
'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[4] = {
  &envoy_service_discovery_v3_discovery_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_service_discovery_v3_ads_proto_upbdefinit = {
  deps,
  &envoy_service_discovery_v3_ads_proto_upb_file_layout,
  "envoy/service/discovery/v3/ads.proto",
  UPB_STRINGVIEW_INIT(descriptor, 681)
};