#include "SceneManager.h";
#include "mesh.h";
#include "models.h";

using namespace std; 

void SceneManager::URenderScene(vector<GLMesh>& scene) {

	// Laptop

	// Bottom of laptop
	GLMesh laptop_bottom;

	laptop_bottom.props = {
		0.0f, 1.0f, 0.0f, // Translate
		2.0f, 2.0f, 2.0f, // Scale
		89.54f, 1.0, 0.0, 0.0, // X rotation
		0.0f, 0.0, 1.0, 0.0, // Y rotation
		0.0f, 0.0, 0.0, 1.0, // Z rotation
	};

	laptop_bottom.fileName = "./keyboard.jpg";

	models::UBuildLaptop(laptop_bottom);

	scene.push_back(laptop_bottom);

	// Top of the laptop
	GLMesh laptop_top;

	laptop_top.props = {
		0.0f, 0.7f, -2.1f, // Translate
		2.0f, 2.0f, 2.0f, // Scale
		-0.3f, 1.0, 0.0, 0.0, // X rotation
		0.0f, 0.0, 1.0, 0.0, // Y rotation
		0.0f, 0.0, 0.0, 1.0, // Z rotation
	};

	laptop_top.fileName = "./screen.jpg";
	models::UBuildLaptop(laptop_top);

	scene.push_back(laptop_top);


	// Cup

	GLMesh cup;

	cup.props = {
		1.3f, 0.27f, 1.0f,
		0.15f, 0.15f, 0.15f,
		89.7f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f,
	};

	cup.length = 1.5f;
	cup.radius = 1.0f;
	cup.numSides = 128.0f;

	cup.fileName = "./chrome.jpg";
	models::UBuildCup(cup);
	scene.push_back(cup);

	// Dish
	GLMesh dish;

	dish.props = {
		1.3f, 0.04f, 1.1f,
		0.15f, 0.15f, 0.15f,
		-89.5f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f,
	};

	dish.length = 0.1f;
	dish.radius = 2.0f;
	dish.numSides = 128.0f;

	dish.fileName = "./china.jpg";
	models::UBuildCup(dish);
	scene.push_back(dish);

	// Phone
	GLMesh phone;

	phone.props = {
		1.7f, -0.30f, 0.0f, // Translate
		0.40f, 0.80f, 0.80f, // Scale
		-45.5f, 1.0, 0.0, 0.0, // X rotation
		0.0f, 0.0, 1.0, 0.0, // Y rotation
		0.0f, 0.0, 0.0, 1.0, // Z rotation
	};

	phone.fileName = "./phoneBack.jpg";

	models::UBuildPhone(phone);
	scene.push_back(phone);

	// Noteook

	GLMesh nb;

	nb.props = {
		-2.4f, -0.5f, 0.0f, // Translate
		1.7f, 1.0f, 1.4f, // Scale
		-45.5f, 1.0, 0.0, 0.0, // X rotation
		0.0f, 0.0, 1.0, 0.0, // Y rotation
		23.3f, 0.0, 0.0, 1.0, // Z rotation
	};

	nb.fileName = "./notes.jpg";

	models::UBuildPhone(nb);
	scene.push_back(nb);

	// Desk 
	GLMesh desk;

	desk.props = {
		0.0f, 0.0f, 0.0f, // Translate
		6.0f, 10.0f, 6.0f, // Scale
		0.0f, 1.0, 0.0, 0.0, // X rotation
		0.0f, 0.0, 1.0, 0.0, // Y rotation
		0.0f, 0.0, 0.0, 1.0, // Z rotation
	};

	desk.fileName = "./woodTop.jpg";

	models::UBuildPlane(desk);

	scene.push_back(desk);
}