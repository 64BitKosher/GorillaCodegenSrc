// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
// Including type: System.Security.Cryptography.PaddingMode
#include "System/Security/Cryptography/PaddingMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: SymmetricTransform
  class SymmetricTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::SymmetricTransform);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::SymmetricTransform*, "Mono.Security.Cryptography", "SymmetricTransform");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.SymmetricTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class SymmetricTransform : public ::Il2CppObject/*, public ::System::Security::Cryptography::ICryptoTransform*/ {
    public:
    public:
    // protected System.Security.Cryptography.SymmetricAlgorithm algo
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::SymmetricAlgorithm* algo;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::SymmetricAlgorithm*) == 0x8);
    // protected System.Boolean encrypt
    // Size: 0x1
    // Offset: 0x18
    bool encrypt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypt and: BlockSizeByte
    char __padding1[0x3] = {};
    // protected System.Int32 BlockSizeByte
    // Size: 0x4
    // Offset: 0x1C
    int BlockSizeByte;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Byte[] temp
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> temp;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Byte[] temp2
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> temp2;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] workBuff
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> workBuff;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] workout
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> workout;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Security.Cryptography.PaddingMode padmode
    // Size: 0x4
    // Offset: 0x40
    ::System::Security::Cryptography::PaddingMode padmode;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::PaddingMode) == 0x4);
    // protected System.Int32 FeedBackByte
    // Size: 0x4
    // Offset: 0x44
    int FeedBackByte;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x48
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean lastBlock
    // Size: 0x1
    // Offset: 0x49
    bool lastBlock;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lastBlock and: rng
    char __padding10[0x6] = {};
    // private System.Security.Cryptography.RandomNumberGenerator _rng
    // Size: 0x8
    // Offset: 0x50
    ::System::Security::Cryptography::RandomNumberGenerator* rng;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RandomNumberGenerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Security::Cryptography::ICryptoTransform
    operator ::System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<::System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // Get instance field reference: protected System.Security.Cryptography.SymmetricAlgorithm algo
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::SymmetricAlgorithm*& dyn_algo();
    // Get instance field reference: protected System.Boolean encrypt
    [[deprecated("Use field access instead!")]] bool& dyn_encrypt();
    // Get instance field reference: protected System.Int32 BlockSizeByte
    [[deprecated("Use field access instead!")]] int& dyn_BlockSizeByte();
    // Get instance field reference: protected System.Byte[] temp
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_temp();
    // Get instance field reference: protected System.Byte[] temp2
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_temp2();
    // Get instance field reference: private System.Byte[] workBuff
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_workBuff();
    // Get instance field reference: private System.Byte[] workout
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_workout();
    // Get instance field reference: protected System.Security.Cryptography.PaddingMode padmode
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::PaddingMode& dyn_padmode();
    // Get instance field reference: protected System.Int32 FeedBackByte
    [[deprecated("Use field access instead!")]] int& dyn_FeedBackByte();
    // Get instance field reference: private System.Boolean m_disposed
    [[deprecated("Use field access instead!")]] bool& dyn_m_disposed();
    // Get instance field reference: protected System.Boolean lastBlock
    [[deprecated("Use field access instead!")]] bool& dyn_lastBlock();
    // Get instance field reference: private System.Security.Cryptography.RandomNumberGenerator _rng
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RandomNumberGenerator*& dyn__rng();
    // public System.Void .ctor(System.Security.Cryptography.SymmetricAlgorithm symmAlgo, System.Boolean encryption, System.Byte[] rgbIV)
    // Offset: 0x44B7534
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SymmetricTransform* New_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t> rgbIV) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::SymmetricTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SymmetricTransform*, creationType>(symmAlgo, encryption, rgbIV)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x44B78D4
    void System_IDisposable_Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x44B7940
    void Dispose(bool disposing);
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x44B79BC
    bool get_CanTransformMultipleBlocks();
    // public System.Boolean get_CanReuseTransform()
    // Offset: 0x44B79C4
    bool get_CanReuseTransform();
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x44B79CC
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x44B79D4
    int get_OutputBlockSize();
    // protected System.Void Transform(System.Byte[] input, System.Byte[] output)
    // Offset: 0x44B79DC
    void Transform(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output);
    // protected System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output);
    // protected System.Void CBC(System.Byte[] input, System.Byte[] output)
    // Offset: 0x44B7B38
    void CBC(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output);
    // protected System.Void CFB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x44B7C9C
    void CFB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output);
    // protected System.Void OFB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x44B7E64
    void OFB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output);
    // protected System.Void CTS(System.Byte[] input, System.Byte[] output)
    // Offset: 0x44B7EB0
    void CTS(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output);
    // private System.Void CheckInput(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x44B7EFC
    void CheckInput(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x44B8040
    int TransformBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount, ::ArrayW<uint8_t> outputBuffer, int outputOffset);
    // private System.Boolean get_KeepLastBlock()
    // Offset: 0x44B8248
    bool get_KeepLastBlock();
    // private System.Int32 InternalTransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x44B826C
    int InternalTransformBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount, ::ArrayW<uint8_t> outputBuffer, int outputOffset);
    // private System.Void Random(System.Byte[] buffer, System.Int32 start, System.Int32 length)
    // Offset: 0x44B8424
    void Random(::ArrayW<uint8_t> buffer, int start, int length);
    // private System.Void ThrowBadPaddingException(System.Security.Cryptography.PaddingMode padding, System.Int32 length, System.Int32 position)
    // Offset: 0x44B84E0
    void ThrowBadPaddingException(::System::Security::Cryptography::PaddingMode padding, int length, int position);
    // protected System.Byte[] FinalEncrypt(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x44B86C4
    ::ArrayW<uint8_t> FinalEncrypt(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // protected System.Byte[] FinalDecrypt(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x44B8958
    ::ArrayW<uint8_t> FinalDecrypt(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x44B8BF0
    ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // protected override System.Void Finalize()
    // Offset: 0x44B7834
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Mono.Security.Cryptography.SymmetricTransform
  #pragma pack(pop)
  static check_size<sizeof(SymmetricTransform), 80 + sizeof(::System::Security::Cryptography::RandomNumberGenerator*)> __Mono_Security_Cryptography_SymmetricTransformSizeCheck;
  static_assert(sizeof(SymmetricTransform) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(bool)>(&Mono::Security::Cryptography::SymmetricTransform::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::get_CanTransformMultipleBlocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::get_CanReuseTransform
// Il2CppName: get_CanReuseTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::get_CanReuseTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "get_CanReuseTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::get_InputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::get_OutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::Transform
// Il2CppName: Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::SymmetricTransform::Transform)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::ECB
// Il2CppName: ECB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::SymmetricTransform::ECB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "ECB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::CBC
// Il2CppName: CBC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::SymmetricTransform::CBC)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "CBC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::CFB
// Il2CppName: CFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::SymmetricTransform::CFB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "CFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::OFB
// Il2CppName: OFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::SymmetricTransform::OFB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "OFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::CTS
// Il2CppName: CTS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::SymmetricTransform::CTS)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "CTS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::CheckInput
// Il2CppName: CheckInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::CheckInput)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "CheckInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::SymmetricTransform::TransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::get_KeepLastBlock
// Il2CppName: get_KeepLastBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::get_KeepLastBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "get_KeepLastBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::InternalTransformBlock
// Il2CppName: InternalTransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::SymmetricTransform::InternalTransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "InternalTransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::Random
// Il2CppName: Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::Random)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, start, length});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::ThrowBadPaddingException
// Il2CppName: ThrowBadPaddingException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::System::Security::Cryptography::PaddingMode, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::ThrowBadPaddingException)> {
  static const MethodInfo* get() {
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PaddingMode")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "ThrowBadPaddingException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{padding, length, position});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::FinalEncrypt
// Il2CppName: FinalEncrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::FinalEncrypt)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "FinalEncrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::FinalDecrypt
// Il2CppName: FinalDecrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::FinalDecrypt)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "FinalDecrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::TransformFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
