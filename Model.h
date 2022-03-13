#pragma once

#include <vector>
#include <string>
#include <unordered_map>
#include "Vertex.h"

const std::string MODEL_PATH = "../models/viking_room.obj";
const std::string TEXTURE_PATH = "../textures/viking_room.png";

class Model
{
public:
    std::vector<Vertex> vertices;
    std::vector<uint32_t> indices;

public:
    void loadModel();
};