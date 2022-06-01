// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SETTINGS_DEMO_H_
#define FLATBUFFERS_GENERATED_SETTINGS_DEMO_H_

#include "flatbuffers/flatbuffers.h"

namespace demo {

struct SettingItem;

struct Settings;
struct SettingsBuilder;

enum SettingId : int64_t {
  SettingId_ProductName = 0,
  SettingId_TrayCount = 1LL,
  SettingId_MIN = SettingId_ProductName,
  SettingId_MAX = SettingId_TrayCount
};

inline const SettingId (&EnumValuesSettingId())[2] {
  static const SettingId values[] = {
    SettingId_ProductName,
    SettingId_TrayCount
  };
  return values;
}

inline const char * const *EnumNamesSettingId() {
  static const char * const names[3] = {
    "ProductName",
    "TrayCount",
    nullptr
  };
  return names;
}

inline const char *EnumNameSettingId(SettingId e) {
  if (flatbuffers::IsOutRange(e, SettingId_ProductName, SettingId_TrayCount)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesSettingId()[index];
}

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) SettingItem FLATBUFFERS_FINAL_CLASS {
 private:
  int64_t id_;

 public:
  SettingItem()
      : id_(0) {
  }
  SettingItem(demo::SettingId _id)
      : id_(flatbuffers::EndianScalar(static_cast<int64_t>(_id))) {
  }
  demo::SettingId id() const {
    return static_cast<demo::SettingId>(flatbuffers::EndianScalar(id_));
  }
};
FLATBUFFERS_STRUCT_END(SettingItem, 8);

struct Settings FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SettingsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SETTINGS = 4
  };
  const flatbuffers::Vector<const demo::SettingItem *> *settings() const {
    return GetPointer<const flatbuffers::Vector<const demo::SettingItem *> *>(VT_SETTINGS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SETTINGS) &&
           verifier.VerifyVector(settings()) &&
           verifier.EndTable();
  }
};

struct SettingsBuilder {
  typedef Settings Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_settings(flatbuffers::Offset<flatbuffers::Vector<const demo::SettingItem *>> settings) {
    fbb_.AddOffset(Settings::VT_SETTINGS, settings);
  }
  explicit SettingsBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Settings> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Settings>(end);
    return o;
  }
};

inline flatbuffers::Offset<Settings> CreateSettings(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<const demo::SettingItem *>> settings = 0) {
  SettingsBuilder builder_(_fbb);
  builder_.add_settings(settings);
  return builder_.Finish();
}

inline flatbuffers::Offset<Settings> CreateSettingsDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<demo::SettingItem> *settings = nullptr) {
  auto settings__ = settings ? _fbb.CreateVectorOfStructs<demo::SettingItem>(*settings) : 0;
  return demo::CreateSettings(
      _fbb,
      settings__);
}

inline const demo::Settings *GetSettings(const void *buf) {
  return flatbuffers::GetRoot<demo::Settings>(buf);
}

inline const demo::Settings *GetSizePrefixedSettings(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<demo::Settings>(buf);
}

inline bool VerifySettingsBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<demo::Settings>(nullptr);
}

inline bool VerifySizePrefixedSettingsBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<demo::Settings>(nullptr);
}

inline void FinishSettingsBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<demo::Settings> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedSettingsBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<demo::Settings> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace demo

#endif  // FLATBUFFERS_GENERATED_SETTINGS_DEMO_H_