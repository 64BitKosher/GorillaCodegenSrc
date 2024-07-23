// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Threading.SparselyPopulatedArrayAddInfo`1
#include "System/Threading/SparselyPopulatedArrayAddInfo_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationCallbackInfo
  class CancellationCallbackInfo;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenRegistration
  struct CancellationTokenRegistration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationTokenRegistration, "System.Threading", "CancellationTokenRegistration");
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.CancellationTokenRegistration
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct CancellationTokenRegistration/*, public ::System::ValueType, public ::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly System.Threading.CancellationCallbackInfo m_callbackInfo
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::CancellationCallbackInfo* m_callbackInfo;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationCallbackInfo*) == 0x8);
    // private readonly System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> m_registrationInfo
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> m_registrationInfo;
    public:
    // Creating value type constructor for type: CancellationTokenRegistration
    constexpr CancellationTokenRegistration(::System::Threading::CancellationCallbackInfo* m_callbackInfo_ = {}, ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> m_registrationInfo_ = {}) noexcept : m_callbackInfo{m_callbackInfo_}, m_registrationInfo{m_registrationInfo_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>
    operator ::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.Threading.CancellationCallbackInfo m_callbackInfo
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationCallbackInfo*& dyn_m_callbackInfo();
    // Get instance field reference: private readonly System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> m_registrationInfo
    [[deprecated("Use field access instead!")]] ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*>& dyn_m_registrationInfo();
    // System.Void .ctor(System.Threading.CancellationCallbackInfo callbackInfo, System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> registrationInfo)
    // Offset: 0x46C28FC
    // ABORTED: conflicts with another method.  CancellationTokenRegistration(::System::Threading::CancellationCallbackInfo* callbackInfo, ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> registrationInfo);
    // public System.Boolean Unregister()
    // Offset: 0x46C2934
    bool Unregister();
    // public System.Void Dispose()
    // Offset: 0x46C29B0
    void Dispose();
    // public System.Boolean Equals(System.Threading.CancellationTokenRegistration other)
    // Offset: 0x46C2B54
    bool Equals(::System::Threading::CancellationTokenRegistration other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x46C2AC4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x46C2BD4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Threading.CancellationTokenRegistration
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::CancellationTokenRegistration::CancellationTokenRegistration
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::CancellationTokenRegistration::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenRegistration::*)()>(&System::Threading::CancellationTokenRegistration::Unregister)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenRegistration), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenRegistration::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenRegistration::*)()>(&System::Threading::CancellationTokenRegistration::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenRegistration), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenRegistration::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenRegistration::*)(::System::Threading::CancellationTokenRegistration)>(&System::Threading::CancellationTokenRegistration::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationTokenRegistration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenRegistration), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenRegistration::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenRegistration::*)(::Il2CppObject*)>(&System::Threading::CancellationTokenRegistration::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenRegistration), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenRegistration::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::CancellationTokenRegistration::*)()>(&System::Threading::CancellationTokenRegistration::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenRegistration), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
