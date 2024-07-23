// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Span`1
#include "System/Span_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: ValueStringBuilder
  struct ValueStringBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ValueStringBuilder, "System.Text", "ValueStringBuilder");
// Type namespace: System.Text
namespace System::Text {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Text.ValueStringBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsByRefLikeAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct ValueStringBuilder/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Char[] _arrayToReturnToPool
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Il2CppChar> arrayToReturnToPool;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Span`1<System.Char> _chars
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Span_1<::Il2CppChar> chars;
    // private System.Int32 _pos
    // Size: 0x4
    // Offset: 0x18
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ValueStringBuilder
    constexpr ValueStringBuilder(::ArrayW<::Il2CppChar> arrayToReturnToPool_ = ::ArrayW<::Il2CppChar>(static_cast<void*>(nullptr)), ::System::Span_1<::Il2CppChar> chars_ = {}, int pos_ = {}) noexcept : arrayToReturnToPool{arrayToReturnToPool_}, chars{chars_}, pos{pos_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Char[] _arrayToReturnToPool
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn__arrayToReturnToPool();
    // Get instance field reference: private System.Span`1<System.Char> _chars
    [[deprecated("Use field access instead!")]] ::System::Span_1<::Il2CppChar>& dyn__chars();
    // Get instance field reference: private System.Int32 _pos
    [[deprecated("Use field access instead!")]] int& dyn__pos();
    // public System.Void .ctor(System.Span`1<System.Char> initialBuffer)
    // Offset: 0x44DDB88
    ValueStringBuilder(::System::Span_1<::Il2CppChar> initialBuffer);
    // public System.Int32 get_Length()
    // Offset: 0x44DDB98
    int get_Length();
    // public System.Char get_Item(System.Int32 index)
    // Offset: 0x44DDBA0
    ::Il2CppChar get_Item(int index);
    // public System.Boolean TryCopyTo(System.Span`1<System.Char> destination, out System.Int32 charsWritten)
    // Offset: 0x44DDC90
    bool TryCopyTo(::System::Span_1<::Il2CppChar> destination, ByRef<int> charsWritten);
    // public System.Void Append(System.Char c)
    // Offset: 0x44DDD78
    void Append(::Il2CppChar c);
    // public System.Void Append(System.String s)
    // Offset: 0x44DDE74
    void Append(::StringW s);
    // private System.Void AppendSlow(System.String s)
    // Offset: 0x44DDF20
    void AppendSlow(::StringW s);
    // public System.Void Append(System.Char c, System.Int32 count)
    // Offset: 0x44DE290
    void Append(::Il2CppChar c, int count);
    // public System.Void Append(System.Char* value, System.Int32 length)
    // Offset: 0x44DE3B8
    void Append(::Il2CppChar* value, int length);
    // public System.Span`1<System.Char> AppendSpan(System.Int32 length)
    // Offset: 0x44DE498
    ::System::Span_1<::Il2CppChar> AppendSpan(int length);
    // private System.Void GrowAndAppend(System.Char c)
    // Offset: 0x44DDDF4
    void GrowAndAppend(::Il2CppChar c);
    // private System.Void Grow(System.Int32 requiredAdditionalCapacity)
    // Offset: 0x44DE04C
    void Grow(int requiredAdditionalCapacity);
    // public System.Void Dispose()
    // Offset: 0x44DE554
    void Dispose();
    // public override System.String ToString()
    // Offset: 0x44DDBC4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Text.ValueStringBuilder
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::ValueStringBuilder
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ValueStringBuilder::*)()>(&System::Text::ValueStringBuilder::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::ValueStringBuilder::*)(int)>(&System::Text::ValueStringBuilder::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::TryCopyTo
// Il2CppName: TryCopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::ValueStringBuilder::*)(::System::Span_1<::Il2CppChar>, ByRef<int>)>(&System::Text::ValueStringBuilder::TryCopyTo)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "TryCopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, charsWritten});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder::*)(::Il2CppChar)>(&System::Text::ValueStringBuilder::Append)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder::*)(::StringW)>(&System::Text::ValueStringBuilder::Append)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::AppendSlow
// Il2CppName: AppendSlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder::*)(::StringW)>(&System::Text::ValueStringBuilder::AppendSlow)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "AppendSlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder::*)(::Il2CppChar, int)>(&System::Text::ValueStringBuilder::Append)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, count});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder::*)(::Il2CppChar*, int)>(&System::Text::ValueStringBuilder::Append)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, length});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::AppendSpan
// Il2CppName: AppendSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Span_1<::Il2CppChar> (System::Text::ValueStringBuilder::*)(int)>(&System::Text::ValueStringBuilder::AppendSpan)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "AppendSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::GrowAndAppend
// Il2CppName: GrowAndAppend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder::*)(::Il2CppChar)>(&System::Text::ValueStringBuilder::GrowAndAppend)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "GrowAndAppend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::Grow
// Il2CppName: Grow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder::*)(int)>(&System::Text::ValueStringBuilder::Grow)> {
  static const MethodInfo* get() {
    static auto* requiredAdditionalCapacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "Grow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requiredAdditionalCapacity});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder::*)()>(&System::Text::ValueStringBuilder::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::ValueStringBuilder::*)()>(&System::Text::ValueStringBuilder::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
