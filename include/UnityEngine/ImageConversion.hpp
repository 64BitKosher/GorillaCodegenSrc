// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.Texture2D/EXRFlags
#include "UnityEngine/Texture2D_EXRFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Texture2D because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ImageConversion
  class ImageConversion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ImageConversion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ImageConversion
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ImageConversion : public ::Il2CppObject {
    public:
    // static public System.Byte[] EncodeToPNG(UnityEngine.Texture2D tex)
    // Offset: 0x54F83E0
    static ::ArrayW<uint8_t> EncodeToPNG(::UnityEngine::Texture2D* tex);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex, System.Int32 quality)
    // Offset: 0x54F841C
    static ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D* tex, int quality);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex)
    // Offset: 0x54F8460
    static ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D* tex);
    // static public System.Boolean LoadImage(UnityEngine.Texture2D tex, System.Byte[] data, System.Boolean markNonReadable)
    // Offset: 0x54F84A0
    static bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t> data, bool markNonReadable);
    // static public System.Boolean LoadImage(UnityEngine.Texture2D tex, System.Byte[] data)
    // Offset: 0x54F84F4
    static bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t> data);
    // static public Unity.Collections.NativeArray`1<System.Byte> EncodeNativeArrayToTGA(Unity.Collections.NativeArray`1<T> input, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.UInt32 width, System.UInt32 height, System.UInt32 rowBytes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::Unity::Collections::NativeArray_1<uint8_t> EncodeNativeArrayToTGA(::Unity::Collections::NativeArray_1<T> input, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, uint width, uint height, uint rowBytes) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ImageConversion::EncodeNativeArrayToTGA");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "ImageConversion", "EncodeNativeArrayToTGA", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(input), ::il2cpp_utils::ExtractType(format), ::il2cpp_utils::ExtractType(width), ::il2cpp_utils::ExtractType(height), ::il2cpp_utils::ExtractType(rowBytes)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, input, format, width, height, rowBytes);
    }
    // static public Unity.Collections.NativeArray`1<System.Byte> EncodeNativeArrayToPNG(Unity.Collections.NativeArray`1<T> input, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.UInt32 width, System.UInt32 height, System.UInt32 rowBytes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::Unity::Collections::NativeArray_1<uint8_t> EncodeNativeArrayToPNG(::Unity::Collections::NativeArray_1<T> input, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, uint width, uint height, uint rowBytes) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ImageConversion::EncodeNativeArrayToPNG");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "ImageConversion", "EncodeNativeArrayToPNG", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(input), ::il2cpp_utils::ExtractType(format), ::il2cpp_utils::ExtractType(width), ::il2cpp_utils::ExtractType(height), ::il2cpp_utils::ExtractType(rowBytes)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, input, format, width, height, rowBytes);
    }
    // static public Unity.Collections.NativeArray`1<System.Byte> EncodeNativeArrayToJPG(Unity.Collections.NativeArray`1<T> input, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.UInt32 width, System.UInt32 height, System.UInt32 rowBytes, System.Int32 quality)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::Unity::Collections::NativeArray_1<uint8_t> EncodeNativeArrayToJPG(::Unity::Collections::NativeArray_1<T> input, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, uint width, uint height, uint rowBytes, int quality) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ImageConversion::EncodeNativeArrayToJPG");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "ImageConversion", "EncodeNativeArrayToJPG", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(input), ::il2cpp_utils::ExtractType(format), ::il2cpp_utils::ExtractType(width), ::il2cpp_utils::ExtractType(height), ::il2cpp_utils::ExtractType(rowBytes), ::il2cpp_utils::ExtractType(quality)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, input, format, width, height, rowBytes, quality);
    }
    // static public Unity.Collections.NativeArray`1<System.Byte> EncodeNativeArrayToEXR(Unity.Collections.NativeArray`1<T> input, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.UInt32 width, System.UInt32 height, System.UInt32 rowBytes, UnityEngine.Texture2D/EXRFlags flags)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::Unity::Collections::NativeArray_1<uint8_t> EncodeNativeArrayToEXR(::Unity::Collections::NativeArray_1<T> input, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, uint width, uint height, uint rowBytes, ::UnityEngine::Texture2D::EXRFlags flags) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ImageConversion::EncodeNativeArrayToEXR");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "ImageConversion", "EncodeNativeArrayToEXR", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(input), ::il2cpp_utils::ExtractType(format), ::il2cpp_utils::ExtractType(width), ::il2cpp_utils::ExtractType(height), ::il2cpp_utils::ExtractType(rowBytes), ::il2cpp_utils::ExtractType(flags)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, input, format, width, height, rowBytes, flags);
    }
    // static private System.Void* UnsafeEncodeNativeArrayToTGA(System.Void* array, ref System.Int32 sizeInBytes, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.UInt32 width, System.UInt32 height, System.UInt32 rowBytes)
    // Offset: 0x54F853C
    static void* UnsafeEncodeNativeArrayToTGA(void* array, ByRef<int> sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, uint width, uint height, uint rowBytes);
    // static private System.Void* UnsafeEncodeNativeArrayToPNG(System.Void* array, ref System.Int32 sizeInBytes, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.UInt32 width, System.UInt32 height, System.UInt32 rowBytes)
    // Offset: 0x54F85B0
    static void* UnsafeEncodeNativeArrayToPNG(void* array, ByRef<int> sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, uint width, uint height, uint rowBytes);
    // static private System.Void* UnsafeEncodeNativeArrayToJPG(System.Void* array, ref System.Int32 sizeInBytes, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.UInt32 width, System.UInt32 height, System.UInt32 rowBytes, System.Int32 quality)
    // Offset: 0x54F8624
    static void* UnsafeEncodeNativeArrayToJPG(void* array, ByRef<int> sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, uint width, uint height, uint rowBytes, int quality);
    // static private System.Void* UnsafeEncodeNativeArrayToEXR(System.Void* array, ref System.Int32 sizeInBytes, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.UInt32 width, System.UInt32 height, System.UInt32 rowBytes, UnityEngine.Texture2D/EXRFlags flags)
    // Offset: 0x54F86A8
    static void* UnsafeEncodeNativeArrayToEXR(void* array, ByRef<int> sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, uint width, uint height, uint rowBytes, ::UnityEngine::Texture2D::EXRFlags flags);
  }; // UnityEngine.ImageConversion
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToPNG
// Il2CppName: EncodeToPNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToPNG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToPNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToJPG
// Il2CppName: EncodeToJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*, int)>(&UnityEngine::ImageConversion::EncodeToJPG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* quality = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, quality});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToJPG
// Il2CppName: EncodeToJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToJPG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::LoadImage
// Il2CppName: LoadImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::ArrayW<uint8_t>, bool)>(&UnityEngine::ImageConversion::LoadImage)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* markNonReadable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "LoadImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, data, markNonReadable});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::LoadImage
// Il2CppName: LoadImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::ArrayW<uint8_t>)>(&UnityEngine::ImageConversion::LoadImage)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "LoadImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, data});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeNativeArrayToTGA
// Il2CppName: EncodeNativeArrayToTGA
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeNativeArrayToPNG
// Il2CppName: EncodeNativeArrayToPNG
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeNativeArrayToJPG
// Il2CppName: EncodeNativeArrayToJPG
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeNativeArrayToEXR
// Il2CppName: EncodeNativeArrayToEXR
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToTGA
// Il2CppName: UnsafeEncodeNativeArrayToTGA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, ByRef<int>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, uint, uint, uint)>(&UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToTGA)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* sizeInBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* rowBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "UnsafeEncodeNativeArrayToTGA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, sizeInBytes, format, width, height, rowBytes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToPNG
// Il2CppName: UnsafeEncodeNativeArrayToPNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, ByRef<int>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, uint, uint, uint)>(&UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToPNG)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* sizeInBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* rowBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "UnsafeEncodeNativeArrayToPNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, sizeInBytes, format, width, height, rowBytes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToJPG
// Il2CppName: UnsafeEncodeNativeArrayToJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, ByRef<int>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, uint, uint, uint, int)>(&UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToJPG)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* sizeInBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* rowBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* quality = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "UnsafeEncodeNativeArrayToJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, sizeInBytes, format, width, height, rowBytes, quality});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToEXR
// Il2CppName: UnsafeEncodeNativeArrayToEXR
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, ByRef<int>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, uint, uint, uint, ::UnityEngine::Texture2D::EXRFlags)>(&UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToEXR)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* sizeInBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* rowBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D/EXRFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "UnsafeEncodeNativeArrayToEXR", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, sizeInBytes, format, width, height, rowBytes, flags});
  }
};
