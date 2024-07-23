// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkInputUtils
  class NetworkInputUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkInputUtils);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkInputUtils*, "Fusion", "NetworkInputUtils");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkInputUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkInputUtils : public ::Il2CppObject {
    public:
    // Nested type: ::Fusion::NetworkInputUtils::$$c
    class $$c;
    // Get static field: static private System.Boolean _initialized
    static bool _get__initialized();
    // Set static field: static private System.Boolean _initialized
    static void _set__initialized(bool value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Int32> _wordCount
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, int>* _get__wordCount();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Int32> _wordCount
    static void _set__wordCount(::System::Collections::Generic::Dictionary_2<::System::Type*, int>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Int32> _typeKey
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, int>* _get__typeKey();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Int32> _typeKey
    static void _set__typeKey(::System::Collections::Generic::Dictionary_2<::System::Type*, int>* value);
    // static public System.Void LoadTypes()
    // Offset: 0x2B30C78
    static void LoadTypes();
    // static public System.Int32 GetMaxWordCount()
    // Offset: 0x2B31330
    static int GetMaxWordCount();
    // static public System.Int32 GetWordCount(System.Type type)
    // Offset: 0x2B313DC
    static int GetWordCount(::System::Type* type);
    // static public System.Int32 GetTypeKey(System.Type type)
    // Offset: 0x2B314A0
    static int GetTypeKey(::System::Type* type);
    // static System.Void ResetStatics()
    // Offset: 0x2B31564
    static void ResetStatics();
  }; // Fusion.NetworkInputUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkInputUtils::LoadTypes
// Il2CppName: LoadTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::NetworkInputUtils::LoadTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkInputUtils*), "LoadTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkInputUtils::GetMaxWordCount
// Il2CppName: GetMaxWordCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&Fusion::NetworkInputUtils::GetMaxWordCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkInputUtils*), "GetMaxWordCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkInputUtils::GetWordCount
// Il2CppName: GetWordCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Type*)>(&Fusion::NetworkInputUtils::GetWordCount)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkInputUtils*), "GetWordCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkInputUtils::GetTypeKey
// Il2CppName: GetTypeKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Type*)>(&Fusion::NetworkInputUtils::GetTypeKey)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkInputUtils*), "GetTypeKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkInputUtils::ResetStatics
// Il2CppName: ResetStatics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::NetworkInputUtils::ResetStatics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkInputUtils*), "ResetStatics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
