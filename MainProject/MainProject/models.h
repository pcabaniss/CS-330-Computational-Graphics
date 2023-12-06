#pragma once

using namespace std; 

#include "mesh.h";

class models {
public:
	static void UBuildLaptop(GLMesh& mesh);
	static void UBuildPlane(GLMesh& mesh);
	static void UBuildCup(GLMesh& mesh);
	static void UBuildPhone(GLMesh& mesh);
	static void UBuildNoteBook(GLMesh& mesh);
	static void UBuildDish(GLMesh& mesh);

	static void UBuildShape(GLMesh& mesh);
};
