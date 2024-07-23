// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: YogaConfig
  class YogaConfig;
  // Forward declaring type: YogaNode
  class YogaNode;
  // Forward declaring type: YogaLogLevel
  struct YogaLogLevel;
}
// Completed forward declares
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: Logger
  class Logger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Yoga::Logger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Logger*, "UnityEngine.Yoga", "Logger");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.Logger
  // [TokenAttribute] Offset: FFFFFFFF
  class Logger : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x558E344
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Logger* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Yoga::Logger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Logger*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Yoga.YogaConfig config, UnityEngine.Yoga.YogaNode node, UnityEngine.Yoga.YogaLogLevel level, System.String message)
    // Offset: 0x558E450
    void Invoke(::UnityEngine::Yoga::YogaConfig* config, ::UnityEngine::Yoga::YogaNode* node, ::UnityEngine::Yoga::YogaLogLevel level, ::StringW message);
  }; // UnityEngine.Yoga.Logger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Yoga::Logger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Yoga::Logger::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Yoga::Logger::*)(::UnityEngine::Yoga::YogaConfig*, ::UnityEngine::Yoga::YogaNode*, ::UnityEngine::Yoga::YogaLogLevel, ::StringW)>(&UnityEngine::Yoga::Logger::Invoke)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaConfig")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaNode")->byval_arg;
    static auto* level = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaLogLevel")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::Logger*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, node, level, message});
  }
};