//
//  TileMap.hpp
//  TileMap
//
//  Created by Nur Hasyim on 05/10/18.
//  Copyright © 2018 Nur Hasyim. All rights reserved.
//

#ifndef TileMap_hpp
#define TileMap_hpp

#include <iostream>
#include <SFML/Graphics.hpp>

enum pola {
    putih,
    hitam,
    hijau,
    merah
};

class TileMap : public sf::Drawable, public sf::Transformable
{
public:
    bool load(const std::string& tileset, sf::Vector2u tileSize, int* tiles, unsigned int width, unsigned int height);
    void update(sf::Vector2u tileSize, int* tiles, unsigned int x, unsigned int y, unsigned int width, unsigned int height, pola pola_sulam);
    
private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    
    sf::VertexArray m_vertices;
    sf::Texture m_tileset;
};

#endif /* TileMap_hpp */
