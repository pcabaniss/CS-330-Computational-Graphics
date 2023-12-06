#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <GLEW/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/type_ptr.hpp>

// camera
#include <learnOpengl/camera.h>

// Created mesh header for easy reusability

struct GLMesh {
    GLuint vao;         // Handle for the vertex array object
    GLuint vbo;     // Handles for the vertex buffer objects
    GLuint nIndices;    // Number of indices of the mesh

    // Extra properties of shape
    float radius;
    float height;
    float length;
    float numSides;

    // Shapes indicies
    std::vector<float> verts;
    // Different properties of shape
    std::vector<float> props;
    /*
    props = {
    First 3 floats are translation x,y,z points for translate (glm::vec3(0.0f, 0.0f, 0.0f))
    0.0f, 0.0f, 0.0f,

    Next 3 floats are scale x,y,z (glm::vec3(0.0f, 0.0f, 0.0f))
    0.0f, 0.0f, 0.0f,

    Next 4 floats are the x rotation (75.0f, glm::vec3(1.0f, 0.0f, 0.0f))
    75.0f, 1.0f, 0.0f, 0.0f, 

    Next 4 floats are the y rotation (75.0f, glm::vec3(0.0f, 1.0f, 0.0f))
    75.0f, 0.0f, 1.0f, 0.0f,

    Next 4 floats are the z rotation (75.0f, glm::vec3(0.0f, 0.0f, 1.0f))
    75.0f, 0.0f, 0.0f, 1.0f,

    }
    */

    // Shapes attributes
    glm::mat4 scale;
    glm::mat4 x_rotation;
    glm::mat4 y_rotation;
    glm::mat4 z_rotation;
    glm::mat4 translation;
    glm::mat4 model;
    glm::vec2 textScale;
    glm::vec2 uvScale;

    // Texture file
    const char* fileName;
    GLuint textId;
    GLint gTextWrapMode = GL_REPEAT;
};