#include <cstdlib>
#include <GLEW/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>
#include <cmath>

#include "models.h"

using namespace std;

// Models holds all of the model data in a single place for organization
void models::UBuildLaptop(GLMesh& mesh) {
	
	// Verts of object
    mesh.verts = {
        // Vertex Positions    // Colors (r,g,b,a)      // Texture
        // Front 
        -0.7f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 0.1f,    1.0f, 1.0f,
         0.5f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 0.0f,    0.45f, 0.9f,
         0.5f,  0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 0.0f,    1.0f, 0.1f,

         0.5f,  0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 0.0f,    0.0f, 0.25f,
        -0.7f,  0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 0.0f,    0.75f, 0.3f,
        -0.7f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 0.0f,    0.5f, 0.7f,

        // Right 
        -0.7f, -0.5f,  0.5f, 0.17f, 0.17f, 0.17f, 0.0f,    0.0f, 0.0f,
         0.5f, -0.5f,  0.5f, 0.17f, 0.17f, 0.17f, 0.0f,    1.0f, 0.0f,
         0.5f,  0.5f,  0.5f, 0.17f, 0.17f, 0.17f, 0.0f,    1.0f, 1.0f,

         0.5f,  0.5f,  0.5f, 0.17f, 0.17f, 0.17f, 0.0f,    1.0f, 1.0f,
        -0.7f,  0.5f,  0.5f, 0.17f, 0.17f, 0.17f, 0.0f,    0.0f, 1.0f,
        -0.7f, -0.5f,  0.5f, 0.17f, 0.17f, 0.17f, 0.0f,    0.0f, 0.0f,

        // Back 
       -0.7f,  0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,

       -0.7f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,

       // Left 
        0.5f,  0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,

        0.5f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,

        // Top
       -0.7f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,

        0.5f, -0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,

       // Bottom
       -0.7f,  0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,

        0.5f,  0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.5f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.4f, 0.56f, 0.56f, 0.56f, 1.0f,     0.0f, 0.0f,
    };

    UBuildShape(mesh);
}

void models::UBuildPhone(GLMesh& mesh) {

    // Verts of object
    mesh.verts = {
        // Vertex Positions    // Colors (r,g,b,a)      // Texture
        // Front 
        -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 1.0f,
         0.5f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    0.45f, 0.9f,
         0.5f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 0.1f,

         0.5f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    0.0f, 0.25f,
        -0.7f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    0.75f, 0.3f,
        -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    0.5f, 0.7f,

        // Right 
        -0.7f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    0.0f, 0.0f,
         0.5f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 0.0f,
         0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 1.0f,

         0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 1.0f,
        -0.7f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    0.0f, 1.0f,
        -0.7f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    0.0f, 0.0f,

        // Back 
       -0.7f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

       -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

       // Left 
        0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

        0.5f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

        // Top 
       -0.7f, -0.5f,  0.4f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.4f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.5f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,

        0.5f, -0.5f,  0.5f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.5f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.4f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,

       // Bottom
       -0.7f,  0.5f,  0.4f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.4f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.5f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,

        0.5f,  0.5f,  0.5f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.5f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.4f, 0.15f, 0.15f, 0.15f, 0.0f,     0.0f, 0.0f,
    };

    UBuildShape(mesh);
}

void models::UBuildNoteBook(GLMesh& mesh) {

    // Verts of object
    mesh.verts = {
        // Vertex Positions    // Colors (r,g,b,a)      // Texture
        // Front 
        -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 1.0f,
         0.5f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    0.45f, 0.9f,
         0.5f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 0.1f,

         0.5f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    0.0f, 0.25f,
        -0.7f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    0.75f, 0.3f,
        -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,    0.5f, 0.7f,

        // Right 
        -0.7f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    0.0f, 0.0f,
         0.5f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 0.0f,
         0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 1.0f,

         0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    1.0f, 1.0f,
        -0.7f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    0.0f, 1.0f,
        -0.7f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,    0.0f, 0.0f,

        // Back 
       -0.7f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

       -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

       // Left 
        0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

        0.5f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

        // Top
       -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

        0.5f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f, -0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

       // Bottom 
       -0.7f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
        0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,

        0.5f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.5f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
       -0.7f,  0.5f,  0.4f, 0.5f, 0.5f, 0.5f, 0.0f,     0.0f, 0.0f,
    };

    UBuildShape(mesh);
}

void models::UBuildCup(GLMesh& mesh) {

    float r = mesh.radius;
    float l = mesh.length;
    float s = mesh.numSides;
    float h = mesh.height;

    constexpr float PI = 3.14f;
    const float secStep = 2.0f * PI / s;

    vector<float> v;
    // Bottom
    for (auto i = 1; i < s; i++) {
        v.insert(v.end(), { 0.5f, 0.5f, 0.0f, 
            0.647059f, 0.164706f, 0.164706f, 1.0f,
            0.5f, 0.125f });
        v.insert(v.end(), { 0.5f + r * cos(i * secStep),
            0.5f + r * sin(i * secStep), 0.0f, 
            0.647059f, 0.164706f, 0.164706f, 1.0f,
            0.5f + (r * cos((i)*secStep)), (0.125f + (0.125f * sin((i)*secStep))) });
        v.insert(v.end(), { 0.5f + r * cos((i + 1) * secStep), 0.5f + r * sin((i + 1) * secStep),
            0.0f, 
            0.647059f, 0.164706f, 0.164706f, 1.0f,
            0.5f + (r * cos((i + 1) * secStep)),
            (0.125f + (0.125f * sin((i + 1) * secStep)))
            });
    }
    // Top
    for (auto i = 1; i < s + 1; i++) {
        v.insert(v.end(), { 0.5f, 0.5f, l, 
            0.41f, 0.38f, 0.36f, 1.0f,
            0.5f, 0.875f });
        v.insert(v.end(), { 0.5f + r * cos(i * secStep) ,
            0.5f + r * sin(i * secStep) , l ,										
            0.41f, 0.38f, 0.36f, 1.0f,
            0.5f + (r * cos((i)* secStep)) ,
            0.875f + (0.125f * sin((i)* secStep)) });
        v.insert(v.end(), { 0.5f + r * cos((i + 1) * secStep) ,
            0.5f + r * sin((i + 1) * secStep) , l ,
            0.41f, 0.38f, 0.36f, 1.0f,
            0.5f + (r * cos((i + 1) * secStep)) ,
            0.875f + (0.125f * sin((i + 1) * secStep)) });
    }

    // Wrapping around the cylinder
    constexpr float x = 1.0f;
    float j = 1.0f / (s / x);
    float k = 0.0f;

    for (auto i = 1; i < s + 1; i++)
    {
        v.insert(v.end(), { 0.5f + r * cos(i * secStep) ,
          0.5f + r * sin(i * secStep) , 0.0f ,
            0.41f, 0.38f, 0.36f, 1.0f,
          k , 0.25f });

        v.insert(v.end(), { 0.5f + r * cos(i * secStep) ,
          0.5f + r * sin(i * secStep) ,
          l ,
           0.41f, 0.38f, 0.36f, 1.0f,
          k ,
          0.75f });

        v.insert(v.end(), { 0.5f + r * cos((i + 1) * secStep) ,
          0.5f + r * sin((i + 1) * secStep) ,
          l ,
            0.41f, 0.38f, 0.36f, 1.0f,
          k + j ,
          0.75f });

        v.insert(v.end(), { 0.5f + r * cos((i + 1) * secStep) ,
          0.5f + r * sin((i + 1) * secStep) ,
          l ,
            0.41f, 0.38f, 0.36f, 1.0f,
          k + j ,
          0.75f });
        v.insert(v.end(), { 0.5f + r * cos((i + 1) * secStep) ,
          0.5f + r * sin((i + 1) * secStep) ,
          0.0f ,
            0.41f, 0.38f, 0.36f, 1.0f,
          k + j ,
          0.25f });
        v.insert(v.end(), { 0.5f + r * cos(i * secStep) ,
          0.5f + r * sin(i * secStep) ,
          0.0f ,
            0.41f, 0.38f, 0.36f, 1.0f,
          k,
          0.25f });
        k += j;
    }

    mesh.verts = v;
    v.clear();
    UBuildShape(mesh);

}

void models::UBuildDish(GLMesh& mesh) {

    float r = mesh.radius;
    float l = mesh.length;
    float s = mesh.numSides;
    float h = mesh.height;

    constexpr float PI = 3.14f;
    const float secStep = 2.0f * PI / s;

    vector<float> v;

    for (auto i = 1; i < s; i++) {
        v.insert(v.end(), { 0.5f, 0.5f, 0.0f,
            1.0f, 1.0f, 1.0f, 1.0f,
            0.5f, 0.125f });
        v.insert(v.end(), { 0.5f + r * cos(i * secStep),
            0.5f + r * sin(i * secStep), 0.0f,
            1.0f, 1.0f, 1.0f, 1.0f,
            0.5f + (r * cos((i)*secStep)), (0.125f + (0.125f * sin((i)*secStep))) });
        v.insert(v.end(), { 0.5f + r * cos((i + 1) * secStep), 0.5f + r * sin((i + 1) * secStep),
            0.0f,
            1.0f, 1.0f, 1.0f, 1.0f,
            0.5f + (r * cos((i + 1) * secStep)),
            (0.125f + (0.125f * sin((i + 1) * secStep)))
            });

        mesh.verts = v;
        v.clear();
        UBuildShape(mesh);

    }
}

void models::UBuildPlane(GLMesh& mesh) {
    
    mesh.verts = {

    -1.0f, 0.0f, -1.0f,   1.0f, 1.0f, 0.5f, 0.0f,   0.0f, 1.0f,
     0.0f, 0.0f, 1.0f,   1.0f, 1.0f, 0.5f, 0.0f,    0.5f, 0.0f,
    -1.0f, 0.0f, 1.0f,   1.0f, 1.0f, 0.5f, 0.0f,    0.0f, 0.0f,

    -1.0f, 0.0f, -1.0f,   1.0f, 1.0f, 0.5f, 0.0f,   0.0f, 1.0f,
     0.0f, 0.0f, 1.0f,   1.0f, 1.0f, 0.5f, 0.0f,    0.5f, 0.0f,
     0.0f, 0.0f, -1.0f,   1.0f, 1.0f, 0.5f, 0.0f,   0.5f, 1.0f,

     0.0f, 0.0f, -1.0f,   1.0f, 1.0f, 0.5f, 0.0f,   0.5f, 1.0f,
     0.0f, 0.0f, 1.0f,   1.0f, 1.0f, 0.5f, 0.0f,    0.5f, 0.0f,
     1.0f, 0.0f, 1.0f,   1.0f, 1.0f, 0.5f, 0.0f,    1.0f, 0.0f,

     0.0f, 0.0f, -1.0f,   1.0f, 1.0f, 0.5f, 0.0f,  0.5f, 1.0f,
     1.0f, 0.0f, 1.0f,   1.0f, 1.0f, 0.5f, 0.0f,    1.0f, 0.0f,
     1.0f, 0.0f, -1.0f,   1.0f, 1.0f, 0.5f, 0.0f,   1.0f, 1.0f,

    };

    UBuildShape(mesh);
}

void models::UBuildShape(GLMesh& mesh) {

    const GLuint floatsPerVertex = 3;
    const GLuint floatsPerColor = 4;
    const GLuint floatsPerTexture = 2;

    mesh.nIndices = mesh.verts.size() / (floatsPerVertex + floatsPerColor + floatsPerTexture);


    glGenVertexArrays(1, &mesh.vao); // We can also generate multiple VAOs or buffers at the same time
    glBindVertexArray(mesh.vao);

    // Create 2 buffers: first one for the vertex data; second one for the indices
    glGenBuffers(1, &mesh.vbo);
    glBindBuffer(GL_ARRAY_BUFFER, mesh.vbo); // Activates the buffer
    glBufferData(GL_ARRAY_BUFFER, mesh.verts.size() * sizeof(float), &mesh.verts.front(), GL_STATIC_DRAW); // Sends vertex or coordinate data to the GPU



    // Strides between vertex coordinates is 6 (x, y, z, r, g, b, a, textX, textY). A tightly packed stride is 0.
    GLint stride = sizeof(float) * (floatsPerVertex + floatsPerColor + floatsPerTexture);// The number of floats before each

    // Create Vertex Attribute Pointers
    glVertexAttribPointer(0, floatsPerVertex, GL_FLOAT, GL_FALSE, stride, 0);
    glEnableVertexAttribArray(0);

    glVertexAttribPointer(1, floatsPerColor, GL_FLOAT, GL_FALSE, stride, (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);

    glVertexAttribPointer(2, floatsPerTexture, GL_FLOAT, GL_FALSE, stride, (void*)(7 * sizeof(float)));
    glEnableVertexAttribArray(2);

    
    // Apply properties to object to be put in scene
    mesh.translation = glm::translate(glm::vec3(mesh.props[0], mesh.props[1], mesh.props[2]));
    mesh.scale = glm::scale(glm::vec3(mesh.props[3], mesh.props[4], mesh.props[5]));
    mesh.x_rotation = glm::rotate(mesh.props[6], glm::vec3(mesh.props[7], mesh.props[8], mesh.props[9]));
    mesh.y_rotation = glm::rotate(mesh.props[10], glm::vec3(mesh.props[11], mesh.props[12], mesh.props[13]));
    mesh.z_rotation = glm::rotate(mesh.props[14], glm::vec3(mesh.props[15], mesh.props[16], mesh.props[17]));
    mesh.model = mesh.translation * mesh.x_rotation * mesh.y_rotation * mesh.z_rotation * mesh.scale;
    
    mesh.uvScale = glm::vec2(1.0f, 1.0f);

    //mesh.textScale = glm::vec2(2.0f, 2.0f);
}