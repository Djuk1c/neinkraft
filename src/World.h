#pragma once
#include <map>
#include <math.h>
#include <glm/glm.hpp>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "Chunk.h"

class World
{
    public:
		const int CHUNKS_NUM = 8;
		std::map<std::pair<int, int>, Chunk*> worldChunks;
        void generateWorld(glm::vec3 cameraPos);
		bool addChunkAtLocation(int xPos, int zPos);
		void addNearbyChunks(glm::vec3 location);
    private:
		void deleteFarChunks(int xPos, int zPos);
		FastNoiseLite noise;
};
