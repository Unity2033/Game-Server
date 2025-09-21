#include "Resources.h"


Resources & Resources::Instance()
{
    static Resources instance;

    return instance;
}

sf::Texture & Resources::Load(const std::string & filename)
{             
    auto iterator = resoruces.find(filename);

    if (iterator != resoruces.end())
    {
        return iterator->second;
    }

    // 새 텍스처 생성
    sf::Texture texture;

    if (texture.loadFromFile(filename) == false) 
    {
        throw std::runtime_error("Failed to load texture: " + filename);
    }

    // map에 이동하여 저장
    auto [image, success] = resoruces.emplace(filename, std::move(texture));

    return image->second;
    
}

