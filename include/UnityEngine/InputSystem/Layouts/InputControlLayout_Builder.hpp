// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Layouts.InputControlLayout
#include "UnityEngine/InputSystem/Layouts/InputControlLayout.hpp"
// Including type: UnityEngine.InputSystem.Utilities.FourCC
#include "UnityEngine/InputSystem/Utilities/FourCC.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Layouts
namespace UnityEngine::InputSystem::Layouts {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: ReadOnlyArray`1<TValue>
  template<typename TValue>
  struct ReadOnlyArray_1;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputControl
  class InputControl;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder");
// Type namespace: UnityEngine.InputSystem.Layouts
namespace UnityEngine::InputSystem::Layouts {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
  // [TokenAttribute] Offset: FFFFFFFF
  class InputControlLayout::Builder : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::ControlBuilder
    struct ControlBuilder;
    public:
    // private System.String <name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <displayName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type <type>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private UnityEngine.InputSystem.Utilities.FourCC <stateFormat>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::InputSystem::Utilities::FourCC stateFormat;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Utilities::FourCC) == 0x4);
    // private System.Int32 <stateSizeInBytes>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int stateSizeInBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_ExtendsLayout
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_ExtendsLayout;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Nullable`1<System.Boolean> <updateBeforeRender>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<bool> updateBeforeRender;
    // private System.Int32 m_ControlCount
    // Size: 0x4
    // Offset: 0x3C
    int m_ControlCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] m_Controls
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout::ControlItem> m_Controls;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout::ControlItem>) == 0x8);
    public:
    // Get instance field reference: private System.String <name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$name$k__BackingField();
    // Get instance field reference: private System.String <displayName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$displayName$k__BackingField();
    // Get instance field reference: private System.Type <type>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$type$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Utilities.FourCC <stateFormat>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::FourCC& dyn_$stateFormat$k__BackingField();
    // Get instance field reference: private System.Int32 <stateSizeInBytes>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$stateSizeInBytes$k__BackingField();
    // Get instance field reference: private System.String m_ExtendsLayout
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_ExtendsLayout();
    // Get instance field reference: private System.Nullable`1<System.Boolean> <updateBeforeRender>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_$updateBeforeRender$k__BackingField();
    // Get instance field reference: private System.Int32 m_ControlCount
    [[deprecated("Use field access instead!")]] int& dyn_m_ControlCount();
    // Get instance field reference: private UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] m_Controls
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout::ControlItem>& dyn_m_Controls();
    // public System.String get_name()
    // Offset: 0x51612A8
    ::StringW get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0x51612B0
    void set_name(::StringW value);
    // public System.String get_displayName()
    // Offset: 0x51612B8
    ::StringW get_displayName();
    // public System.Void set_displayName(System.String value)
    // Offset: 0x51612C0
    void set_displayName(::StringW value);
    // public System.Type get_type()
    // Offset: 0x51612C8
    ::System::Type* get_type();
    // public System.Void set_type(System.Type value)
    // Offset: 0x51612D0
    void set_type(::System::Type* value);
    // public UnityEngine.InputSystem.Utilities.FourCC get_stateFormat()
    // Offset: 0x51612D8
    ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat();
    // public System.Void set_stateFormat(UnityEngine.InputSystem.Utilities.FourCC value)
    // Offset: 0x51612E0
    void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value);
    // public System.Int32 get_stateSizeInBytes()
    // Offset: 0x51612E8
    int get_stateSizeInBytes();
    // public System.Void set_stateSizeInBytes(System.Int32 value)
    // Offset: 0x51612F0
    void set_stateSizeInBytes(int value);
    // public System.String get_extendsLayout()
    // Offset: 0x51612F8
    ::StringW get_extendsLayout();
    // public System.Void set_extendsLayout(System.String value)
    // Offset: 0x5161300
    void set_extendsLayout(::StringW value);
    // public System.Nullable`1<System.Boolean> get_updateBeforeRender()
    // Offset: 0x5161348
    ::System::Nullable_1<bool> get_updateBeforeRender();
    // public System.Void set_updateBeforeRender(System.Nullable`1<System.Boolean> value)
    // Offset: 0x5161350
    void set_updateBeforeRender(::System::Nullable_1<bool> value);
    // public UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem> get_controls()
    // Offset: 0x5161358
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout::ControlItem> get_controls();
    // public UnityEngine.InputSystem.Layouts.InputControlLayout/Builder/ControlBuilder AddControl(System.String name)
    // Offset: 0x51613C0
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::ControlBuilder AddControl(::StringW name);
    // public UnityEngine.InputSystem.Layouts.InputControlLayout/Builder WithName(System.String name)
    // Offset: 0x5161528
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* WithName(::StringW name);
    // public UnityEngine.InputSystem.Layouts.InputControlLayout/Builder WithDisplayName(System.String displayName)
    // Offset: 0x5161544
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* WithDisplayName(::StringW displayName);
    // public UnityEngine.InputSystem.Layouts.InputControlLayout/Builder WithType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* WithType() {
      static_assert(std::is_convertible_v<T, ::UnityEngine::InputSystem::InputControl*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*, false>(this, ___generic__method);
    }
    // public UnityEngine.InputSystem.Layouts.InputControlLayout/Builder WithFormat(UnityEngine.InputSystem.Utilities.FourCC format)
    // Offset: 0x5161560
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format);
    // public UnityEngine.InputSystem.Layouts.InputControlLayout/Builder WithFormat(System.String format)
    // Offset: 0x5161568
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* WithFormat(::StringW format);
    // public UnityEngine.InputSystem.Layouts.InputControlLayout/Builder WithSizeInBytes(System.Int32 sizeInBytes)
    // Offset: 0x516159C
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* WithSizeInBytes(int sizeInBytes);
    // public UnityEngine.InputSystem.Layouts.InputControlLayout/Builder Extend(System.String baseLayoutName)
    // Offset: 0x51615A4
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* Extend(::StringW baseLayoutName);
    // public UnityEngine.InputSystem.Layouts.InputControlLayout Build()
    // Offset: 0x51615BC
    ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build();
    // public System.Void .ctor()
    // Offset: 0x51617F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputControlLayout::Builder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputControlLayout::Builder*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_displayName
// Il2CppName: get_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_displayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "get_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_displayName
// Il2CppName: set_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_displayName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "set_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_type
// Il2CppName: set_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::System::Type*)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "set_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_stateFormat
// Il2CppName: get_stateFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_stateFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "get_stateFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_stateFormat
// Il2CppName: set_stateFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_stateFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "FourCC")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "set_stateFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_stateSizeInBytes
// Il2CppName: get_stateSizeInBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_stateSizeInBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "get_stateSizeInBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_stateSizeInBytes
// Il2CppName: set_stateSizeInBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(int)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_stateSizeInBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "set_stateSizeInBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_extendsLayout
// Il2CppName: get_extendsLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_extendsLayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "get_extendsLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_extendsLayout
// Il2CppName: set_extendsLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_extendsLayout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "set_extendsLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_updateBeforeRender
// Il2CppName: get_updateBeforeRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_updateBeforeRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "get_updateBeforeRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_updateBeforeRender
// Il2CppName: set_updateBeforeRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::System::Nullable_1<bool>)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::set_updateBeforeRender)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "set_updateBeforeRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_controls
// Il2CppName: get_controls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout::ControlItem> (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::get_controls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "get_controls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::AddControl
// Il2CppName: AddControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::ControlBuilder (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::AddControl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "AddControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithName
// Il2CppName: WithName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "WithName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithDisplayName
// Il2CppName: WithDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithDisplayName)> {
  static const MethodInfo* get() {
    static auto* displayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "WithDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{displayName});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithType
// Il2CppName: WithType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithFormat
// Il2CppName: WithFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "FourCC")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "WithFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithFormat
// Il2CppName: WithFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "WithFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithSizeInBytes
// Il2CppName: WithSizeInBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(int)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::WithSizeInBytes)> {
  static const MethodInfo* get() {
    static auto* sizeInBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "WithSizeInBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sizeInBytes});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::Extend
// Il2CppName: Extend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout::Builder* (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::Extend)> {
  static const MethodInfo* get() {
    static auto* baseLayoutName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "Extend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseLayoutName});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::Build)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::Builder*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::Builder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
