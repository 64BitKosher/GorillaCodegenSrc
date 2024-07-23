// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: Constants
namespace Constants {
  // Forward declaring type: GamePlayConfig
  class GamePlayConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Constants::GamePlayConfig);
DEFINE_IL2CPP_ARG_TYPE(::Constants::GamePlayConfig*, "Constants", "GamePlayConfig");
// Type namespace: Constants
namespace Constants {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Constants.GamePlayConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class GamePlayConfig : public ::Il2CppObject {
    public:
    // static field const value: static public System.Single PROJECTILE_DISTANCE_THRESHOLD
    static constexpr const float PROJECTILE_DISTANCE_THRESHOLD = 4;
    // Get static field: static public System.Single PROJECTILE_DISTANCE_THRESHOLD
    static float _get_PROJECTILE_DISTANCE_THRESHOLD();
    // Set static field: static public System.Single PROJECTILE_DISTANCE_THRESHOLD
    static void _set_PROJECTILE_DISTANCE_THRESHOLD(float value);
    // static field const value: static public System.Single TAG_DISTANCE_THRESHOLD
    static constexpr const float TAG_DISTANCE_THRESHOLD = 6;
    // Get static field: static public System.Single TAG_DISTANCE_THRESHOLD
    static float _get_TAG_DISTANCE_THRESHOLD();
    // Set static field: static public System.Single TAG_DISTANCE_THRESHOLD
    static void _set_TAG_DISTANCE_THRESHOLD(float value);
    // static field const value: static public System.Single TAG_TIME_ROLLBACK
    static constexpr const float TAG_TIME_ROLLBACK = 0.2;
    // Get static field: static public System.Single TAG_TIME_ROLLBACK
    static float _get_TAG_TIME_ROLLBACK();
    // Set static field: static public System.Single TAG_TIME_ROLLBACK
    static void _set_TAG_TIME_ROLLBACK(float value);
    // static field const value: static public System.Int32 MAX_ROOM_SIZE
    static constexpr const int MAX_ROOM_SIZE = 10;
    // Get static field: static public System.Int32 MAX_ROOM_SIZE
    static int _get_MAX_ROOM_SIZE();
    // Set static field: static public System.Int32 MAX_ROOM_SIZE
    static void _set_MAX_ROOM_SIZE(int value);
  }; // Constants.GamePlayConfig
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"