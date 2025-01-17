// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: EncoderFallback
  class EncoderFallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::EncoderFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderFallback*, "System.Text", "EncoderFallback");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncoderFallback
  // [TokenAttribute] Offset: FFFFFFFF
  class EncoderFallback : public ::Il2CppObject {
    public:
    // Get static field: static private System.Text.EncoderFallback s_replacementFallback
    static ::System::Text::EncoderFallback* _get_s_replacementFallback();
    // Set static field: static private System.Text.EncoderFallback s_replacementFallback
    static void _set_s_replacementFallback(::System::Text::EncoderFallback* value);
    // Get static field: static private System.Text.EncoderFallback s_exceptionFallback
    static ::System::Text::EncoderFallback* _get_s_exceptionFallback();
    // Set static field: static private System.Text.EncoderFallback s_exceptionFallback
    static void _set_s_exceptionFallback(::System::Text::EncoderFallback* value);
    // static public System.Text.EncoderFallback get_ReplacementFallback()
    // Offset: 0x44C9498
    static ::System::Text::EncoderFallback* get_ReplacementFallback();
    // static public System.Text.EncoderFallback get_ExceptionFallback()
    // Offset: 0x44CAC04
    static ::System::Text::EncoderFallback* get_ExceptionFallback();
    // public System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
    // public System.Int32 get_MaxCharCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_MaxCharCount();
    // protected System.Void .ctor()
    // Offset: 0x44C9EBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderFallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::EncoderFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderFallback*, creationType>()));
    }
  }; // System.Text.EncoderFallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::EncoderFallback::get_ReplacementFallback
// Il2CppName: get_ReplacementFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallback* (*)()>(&System::Text::EncoderFallback::get_ReplacementFallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallback*), "get_ReplacementFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallback::get_ExceptionFallback
// Il2CppName: get_ExceptionFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallback* (*)()>(&System::Text::EncoderFallback::get_ExceptionFallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallback*), "get_ExceptionFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallback::CreateFallbackBuffer
// Il2CppName: CreateFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallbackBuffer* (System::Text::EncoderFallback::*)()>(&System::Text::EncoderFallback::CreateFallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallback*), "CreateFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallback::get_MaxCharCount
// Il2CppName: get_MaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderFallback::*)()>(&System::Text::EncoderFallback::get_MaxCharCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallback*), "get_MaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
