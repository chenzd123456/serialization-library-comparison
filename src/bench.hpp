#include <msgpack.h>

#include <string>
#include <vector>

namespace msgpack {

class Any {
  public:
    enum class Type { boolean, string, i8, i16, i32, i64, u8, u16, u32, u64 };

  public:
    Type type;
    union {
        bool boolean;
        std::string string;
        int8_t i8;
        int16_t i16;
        int32_t i32;
        int64_t i64;
        uint8_t u8;
        uint16_t u16;
        uint32_t u32;
        uint64_t u64;
    } value;

    size_t ToByte() {
        msgpack_sbuffer *buffer = msgpack_sbuffer_new();
        msgpack_packer *pk = msgpack_packer_new(buffer, msgpack_sbuffer_write);
        switch (type) {
        case Type::boolean:
             
            break;

        default:
            break;
        }
    }

    bool FromByte(const char *data, size_t length) {
        msgpack_unpacker unp;
        bool result = msgpack_unpacker_init(&unp, length);
        if (result) {
            /* Do unpacking */
        }
        msgpack_unpacker_destroy(&unp);
    }
};

class SettingItem {
  public:
    uint32_t id;
    std::string name;
    Any value;
};

class Settings {
  public:
    std::vector<SettingItem> setting_items;
};

void bench() {}
} // namespace msgpack
