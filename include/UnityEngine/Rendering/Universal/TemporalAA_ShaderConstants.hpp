// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.TemporalAA
#include "UnityEngine/Rendering/Universal/TemporalAA.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TemporalAA::ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TemporalAA::ShaderConstants*, "UnityEngine.Rendering.Universal", "TemporalAA/ShaderConstants");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.TemporalAA/ShaderConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class TemporalAA::ShaderConstants : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32 _TaaAccumulationTex
    static int _get__TaaAccumulationTex();
    // Set static field: static public readonly System.Int32 _TaaAccumulationTex
    static void _set__TaaAccumulationTex(int value);
    // Get static field: static public readonly System.Int32 _TaaMotionVectorTex
    static int _get__TaaMotionVectorTex();
    // Set static field: static public readonly System.Int32 _TaaMotionVectorTex
    static void _set__TaaMotionVectorTex(int value);
    // Get static field: static public readonly System.Int32 _TaaFilterWeights
    static int _get__TaaFilterWeights();
    // Set static field: static public readonly System.Int32 _TaaFilterWeights
    static void _set__TaaFilterWeights(int value);
    // Get static field: static public readonly System.Int32 _TaaFrameInfluence
    static int _get__TaaFrameInfluence();
    // Set static field: static public readonly System.Int32 _TaaFrameInfluence
    static void _set__TaaFrameInfluence(int value);
    // Get static field: static public readonly System.Int32 _TaaVarianceClampScale
    static int _get__TaaVarianceClampScale();
    // Set static field: static public readonly System.Int32 _TaaVarianceClampScale
    static void _set__TaaVarianceClampScale(int value);
    // static private System.Void .cctor()
    // Offset: 0x52DFC94
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.TemporalAA/ShaderConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::TemporalAA::ShaderConstants::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::TemporalAA::ShaderConstants::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::TemporalAA::ShaderConstants*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};