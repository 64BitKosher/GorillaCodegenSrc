// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Json.WitResponseClass
#include "Meta/WitAi/Json/WitResponseClass.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18*, "Meta.WitAi.Json", "WitResponseClass/<GetEnumerator>d__18");
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WitResponseClass::$GetEnumerator$d__18 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public Meta.WitAi.Json.WitResponseClass <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::Json::WitResponseClass* $$4__this;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Json::WitResponseClass*) == 0x8);
    // private System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.WitAi.Json.WitResponseNode> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    typename ::System::Collections::Generic::Dictionary_2<::StringW, ::Meta::WitAi::Json::WitResponseNode*>::Enumerator $$7__wrap1;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Meta.WitAi.Json.WitResponseClass <>4__this
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Json::WitResponseClass*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.WitAi.Json.WitResponseNode> <>7__wrap1
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<::StringW, ::Meta::WitAi::Json::WitResponseNode*>::Enumerator& dyn_$$7__wrap1();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x444F684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseClass::$GetEnumerator$d__18* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseClass::$GetEnumerator$d__18*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4450040
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x445005C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x4450240
    void $$m__Finally1();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x4450290
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4450298
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x44502D0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::*)()>(&Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::*)()>(&Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::*)()>(&Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::*)()>(&Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::*)()>(&Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::*)()>(&Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
