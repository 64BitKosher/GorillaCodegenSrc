// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Physics
#include "UnityEngine/Physics.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.ContactPairHeader
#include "UnityEngine/ContactPairHeader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PhysicsScene
  struct PhysicsScene;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Physics::ContactEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics::ContactEventDelegate*, "UnityEngine", "Physics/ContactEventDelegate");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Physics/ContactEventDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class Physics::ContactEventDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x552D628
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Physics::ContactEventDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Physics::ContactEventDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Physics::ContactEventDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.PhysicsScene scene, Unity.Collections.NativeArray`1/ReadOnly<UnityEngine.ContactPairHeader> headerArray)
    // Offset: 0x552D6C8
    void Invoke(::UnityEngine::PhysicsScene scene, typename ::Unity::Collections::NativeArray_1<::UnityEngine::ContactPairHeader>::ReadOnly headerArray);
  }; // UnityEngine.Physics/ContactEventDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Physics::ContactEventDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Physics::ContactEventDelegate::Invoke
// Il2CppName: Invoke
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
