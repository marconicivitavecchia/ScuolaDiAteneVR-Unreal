// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

#ifndef OVR_NET_SYNC_VOIP_MIC_SOURCE_H
#define OVR_NET_SYNC_VOIP_MIC_SOURCE_H

#include "OVR_Platform_Defs.h"

typedef enum ovrNetSyncVoipMicSource_ {
  ovrNetSyncVoipMicSource_Unknown,
  ovrNetSyncVoipMicSource_None,
  ovrNetSyncVoipMicSource_Internal,
} ovrNetSyncVoipMicSource;

/// Converts an ovrNetSyncVoipMicSource enum value to a string
/// The returned string does not need to be freed
OVRPL_PUBLIC_FUNCTION(const char*) ovrNetSyncVoipMicSource_ToString(ovrNetSyncVoipMicSource value);

/// Converts a string representing an ovrNetSyncVoipMicSource enum value to an enum value
///
OVRPL_PUBLIC_FUNCTION(ovrNetSyncVoipMicSource) ovrNetSyncVoipMicSource_FromString(const char* str);

#endif
