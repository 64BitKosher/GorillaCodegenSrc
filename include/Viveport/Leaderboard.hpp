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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Viveport
namespace Viveport {
  // Forward declaring type: Leaderboard
  class Leaderboard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::Leaderboard);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Leaderboard*, "Viveport", "Leaderboard");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Leaderboard
  // [TokenAttribute] Offset: FFFFFFFF
  class Leaderboard : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 <Rank>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int Rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <Score>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int Score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String <UserName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW UserName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <Rank>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Rank$k__BackingField();
    // Get instance field reference: private System.Int32 <Score>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Score$k__BackingField();
    // Get instance field reference: private System.String <UserName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$UserName$k__BackingField();
    // public System.Int32 get_Rank()
    // Offset: 0x27AAAD8
    int get_Rank();
    // public System.Void set_Rank(System.Int32 value)
    // Offset: 0x27AAAE0
    void set_Rank(int value);
    // public System.Int32 get_Score()
    // Offset: 0x27AAAE8
    int get_Score();
    // public System.Void set_Score(System.Int32 value)
    // Offset: 0x27AAAF0
    void set_Score(int value);
    // public System.String get_UserName()
    // Offset: 0x27AAAF8
    ::StringW get_UserName();
    // public System.Void set_UserName(System.String value)
    // Offset: 0x27AAB00
    void set_UserName(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x27AAB08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Leaderboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Leaderboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Leaderboard*, creationType>()));
    }
  }; // Viveport.Leaderboard
  #pragma pack(pop)
  static check_size<sizeof(Leaderboard), 24 + sizeof(::StringW)> __Viveport_LeaderboardSizeCheck;
  static_assert(sizeof(Leaderboard) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::Leaderboard::get_Rank
// Il2CppName: get_Rank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Viveport::Leaderboard::*)()>(&Viveport::Leaderboard::get_Rank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Leaderboard*), "get_Rank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Leaderboard::set_Rank
// Il2CppName: set_Rank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Leaderboard::*)(int)>(&Viveport::Leaderboard::set_Rank)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Leaderboard*), "set_Rank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::Leaderboard::get_Score
// Il2CppName: get_Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Viveport::Leaderboard::*)()>(&Viveport::Leaderboard::get_Score)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Leaderboard*), "get_Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Leaderboard::set_Score
// Il2CppName: set_Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Leaderboard::*)(int)>(&Viveport::Leaderboard::set_Score)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Leaderboard*), "set_Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::Leaderboard::get_UserName
// Il2CppName: get_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::Leaderboard::*)()>(&Viveport::Leaderboard::get_UserName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Leaderboard*), "get_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Leaderboard::set_UserName
// Il2CppName: set_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Leaderboard::*)(::StringW)>(&Viveport::Leaderboard::set_UserName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Leaderboard*), "set_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::Leaderboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!