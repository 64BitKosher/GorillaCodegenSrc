// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.Remoting.Contexts.IContextAttribute
#include "System/Runtime/Remoting/Contexts/IContextAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: RemoteActivationAttribute
  class RemoteActivationAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Activation::RemoteActivationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::RemoteActivationAttribute*, "System.Runtime.Remoting.Activation", "RemoteActivationAttribute");
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.RemoteActivationAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteActivationAttribute : public ::System::Attribute/*, public ::System::Runtime::Remoting::Contexts::IContextAttribute*/ {
    public:
    public:
    // private System.Collections.IList _contextProperties
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IList* contextProperties;
    // Field size check
    static_assert(sizeof(::System::Collections::IList*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Contexts::IContextAttribute
    operator ::System::Runtime::Remoting::Contexts::IContextAttribute() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::IList*
    constexpr operator ::System::Collections::IList*() const noexcept {
      return contextProperties;
    }
    // Get instance field reference: private System.Collections.IList _contextProperties
    [[deprecated("Use field access instead!")]] ::System::Collections::IList*& dyn__contextProperties();
    // public System.Void .ctor(System.Collections.IList contextProperties)
    // Offset: 0x4541FB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteActivationAttribute* New_ctor(::System::Collections::IList* contextProperties) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Activation::RemoteActivationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteActivationAttribute*, creationType>(contextProperties)));
    }
    // public System.Boolean IsContextOK(System.Runtime.Remoting.Contexts.Context ctx, System.Runtime.Remoting.Activation.IConstructionCallMessage ctor)
    // Offset: 0x4541FE0
    bool IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor);
    // public System.Void GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage ctor)
    // Offset: 0x4541FE8
    void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor);
  }; // System.Runtime.Remoting.Activation.RemoteActivationAttribute
  #pragma pack(pop)
  static check_size<sizeof(RemoteActivationAttribute), 16 + sizeof(::System::Collections::IList*)> __System_Runtime_Remoting_Activation_RemoteActivationAttributeSizeCheck;
  static_assert(sizeof(RemoteActivationAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::RemoteActivationAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::RemoteActivationAttribute::IsContextOK
// Il2CppName: IsContextOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Activation::RemoteActivationAttribute::IsContextOK)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Contexts", "Context")->byval_arg;
    static auto* ctor = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IConstructionCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::RemoteActivationAttribute*), "IsContextOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx, ctor});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::RemoteActivationAttribute::GetPropertiesForNewContext
// Il2CppName: GetPropertiesForNewContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Activation::RemoteActivationAttribute::GetPropertiesForNewContext)> {
  static const MethodInfo* get() {
    static auto* ctor = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IConstructionCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::RemoteActivationAttribute*), "GetPropertiesForNewContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctor});
  }
};
