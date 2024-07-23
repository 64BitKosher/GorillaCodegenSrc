// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: XfToXfLine
  class XfToXfLine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::XfToXfLine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XfToXfLine*, "", "XfToXfLine");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: XfToXfLine
  // [TokenAttribute] Offset: FFFFFFFF
  class XfToXfLine : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform pt0
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* pt0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform pt1
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* pt1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.LineRenderer lineRenderer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::LineRenderer* lineRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform pt0
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_pt0();
    // Get instance field reference: public UnityEngine.Transform pt1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_pt1();
    // Get instance field reference: private UnityEngine.LineRenderer lineRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_lineRenderer();
    // private System.Void Awake()
    // Offset: 0x272E638
    void Awake();
    // private System.Void Update()
    // Offset: 0x272E690
    void Update();
    // public System.Void .ctor()
    // Offset: 0x272E710
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XfToXfLine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::XfToXfLine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XfToXfLine*, creationType>()));
    }
  }; // XfToXfLine
  #pragma pack(pop)
  static check_size<sizeof(XfToXfLine), 48 + sizeof(::UnityEngine::LineRenderer*)> __GlobalNamespace_XfToXfLineSizeCheck;
  static_assert(sizeof(XfToXfLine) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::XfToXfLine::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::XfToXfLine::*)()>(&GlobalNamespace::XfToXfLine::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XfToXfLine*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XfToXfLine::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::XfToXfLine::*)()>(&GlobalNamespace::XfToXfLine::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XfToXfLine*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XfToXfLine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
