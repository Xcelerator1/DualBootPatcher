// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_MBWIPEROM_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_MBWIPEROM_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

#include "file_chmod_generated.h"
#include "file_close_generated.h"
#include "file_open_generated.h"
#include "file_read_generated.h"
#include "file_seek_generated.h"
#include "file_selinux_get_label_generated.h"
#include "file_selinux_set_label_generated.h"
#include "file_stat_generated.h"
#include "file_write_generated.h"
#include "mb_get_booted_rom_id_generated.h"
#include "mb_get_installed_roms_generated.h"
#include "mb_get_version_generated.h"
#include "mb_set_kernel_generated.h"
#include "mb_switch_rom_generated.h"
#include "path_chmod_generated.h"
#include "path_copy_generated.h"
#include "path_get_directory_size_generated.h"
#include "path_selinux_get_label_generated.h"
#include "path_selinux_set_label_generated.h"

namespace mbtool {
namespace daemon {
namespace v3 {
struct FileChmodRequest;
struct FileChmodResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileCloseRequest;
struct FileCloseResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileOpenRequest;
struct FileOpenResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileReadRequest;
struct FileReadResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileSeekRequest;
struct FileSeekResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct StructStat;
struct FileStatRequest;
struct FileStatResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileWriteRequest;
struct FileWriteResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileSELinuxGetLabelRequest;
struct FileSELinuxGetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileSELinuxSetLabelRequest;
struct FileSELinuxSetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathChmodRequest;
struct PathChmodResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathCopyRequest;
struct PathCopyResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathSELinuxGetLabelRequest;
struct PathSELinuxGetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathSELinuxSetLabelRequest;
struct PathSELinuxSetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathGetDirectorySizeRequest;
struct PathGetDirectorySizeResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbGetVersionRequest;
struct MbGetVersionResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbRom;
struct MbGetInstalledRomsRequest;
struct MbGetInstalledRomsResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbGetBootedRomIdRequest;
struct MbGetBootedRomIdResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbSwitchRomRequest;
struct MbSwitchRomResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbSetKernelRequest;
struct MbSetKernelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v3 {

struct MbWipeRomRequest;
struct MbWipeRomResponse;

enum MbWipeTarget {
  MbWipeTarget_SYSTEM = 0,
  MbWipeTarget_CACHE = 1,
  MbWipeTarget_DATA = 2,
  MbWipeTarget_DALVIK_CACHE = 3,
  MbWipeTarget_MULTIBOOT = 4
};

inline const char **EnumNamesMbWipeTarget() {
  static const char *names[] = { "SYSTEM", "CACHE", "DATA", "DALVIK_CACHE", "MULTIBOOT", nullptr };
  return names;
}

inline const char *EnumNameMbWipeTarget(MbWipeTarget e) { return EnumNamesMbWipeTarget()[static_cast<int>(e)]; }

struct MbWipeRomRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *rom_id() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::Vector<int16_t> *targets() const { return GetPointer<const flatbuffers::Vector<int16_t> *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* rom_id */) &&
           verifier.Verify(rom_id()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* targets */) &&
           verifier.Verify(targets()) &&
           verifier.EndTable();
  }
};

struct MbWipeRomRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_rom_id(flatbuffers::Offset<flatbuffers::String> rom_id) { fbb_.AddOffset(4, rom_id); }
  void add_targets(flatbuffers::Offset<flatbuffers::Vector<int16_t>> targets) { fbb_.AddOffset(6, targets); }
  MbWipeRomRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MbWipeRomRequestBuilder &operator=(const MbWipeRomRequestBuilder &);
  flatbuffers::Offset<MbWipeRomRequest> Finish() {
    auto o = flatbuffers::Offset<MbWipeRomRequest>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<MbWipeRomRequest> CreateMbWipeRomRequest(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> rom_id = 0,
   flatbuffers::Offset<flatbuffers::Vector<int16_t>> targets = 0) {
  MbWipeRomRequestBuilder builder_(_fbb);
  builder_.add_targets(targets);
  builder_.add_rom_id(rom_id);
  return builder_.Finish();
}

struct MbWipeRomResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::Vector<int16_t> *succeeded() const { return GetPointer<const flatbuffers::Vector<int16_t> *>(4); }
  const flatbuffers::Vector<int16_t> *failed() const { return GetPointer<const flatbuffers::Vector<int16_t> *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* succeeded */) &&
           verifier.Verify(succeeded()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* failed */) &&
           verifier.Verify(failed()) &&
           verifier.EndTable();
  }
};

struct MbWipeRomResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_succeeded(flatbuffers::Offset<flatbuffers::Vector<int16_t>> succeeded) { fbb_.AddOffset(4, succeeded); }
  void add_failed(flatbuffers::Offset<flatbuffers::Vector<int16_t>> failed) { fbb_.AddOffset(6, failed); }
  MbWipeRomResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MbWipeRomResponseBuilder &operator=(const MbWipeRomResponseBuilder &);
  flatbuffers::Offset<MbWipeRomResponse> Finish() {
    auto o = flatbuffers::Offset<MbWipeRomResponse>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<MbWipeRomResponse> CreateMbWipeRomResponse(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<int16_t>> succeeded = 0,
   flatbuffers::Offset<flatbuffers::Vector<int16_t>> failed = 0) {
  MbWipeRomResponseBuilder builder_(_fbb);
  builder_.add_failed(failed);
  builder_.add_succeeded(succeeded);
  return builder_.Finish();
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_MBWIPEROM_MBTOOL_DAEMON_V3_H_
