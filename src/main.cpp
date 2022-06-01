#include "flatbuffers/settings_generated.h"

#include <iostream>

int main(int argc, char **argv)
{

        flatbuffers::FlatBufferBuilder fbb;

        // demo::SettingItem item(demo::SettingId::SettingId_ProductName);
        // auto sword = demo::CreateSettings(builder, weapon_one_name, weapon_one_damage);
        // std::vector<flatbuffers::Offset<demo::SettingItem>> vector;
        // vector.push_back(item);
        std::vector<const demo::SettingItem *> vector;
        demo::SettingItem item;
        vector.push_back(&item);
        auto vector2 = fbb.CreateVector(vector);
        // auto settings = demo::CreateSettings(fbb, vector2);

        demo::SettingsBuilder settings_builder(fbb);
        settings_builder.add_settings(vector2);
        auto settings = settings_builder.Finish();
        fbb.Finish(settings);
        auto buf = fbb.GetBufferPointer();
        auto size = fbb.GetSize();
        std::cout << "buf size:" << size << std::endl;

    return 0;
}