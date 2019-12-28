#pragma once

#include <string>
#include <vec3.hpp>
#include <mat4x4.hpp>

class Shader
{
public:

	unsigned int m_ID;

	Shader(const char* vertexPath, const char* fragmentPath); // constructor generates the shader on the fly
	~Shader();

	void Use() const; // activate the shader

	unsigned int GetID() const;

	// MVP
	unsigned int loc_model_matrix;	// model matrix
	unsigned int loc_view_matrix;	// view matrix
	unsigned int loc_projection_matrix;	// projection matrix

	// utility uniform functions
	void SetInt(const std::string& name, int value) const;
	void SetFloat(const std::string& name, const float& value) const;

	void SetVec3(const std::string& name, const glm::vec3& value) const;
	void SetVec3(const std::string& name, float x, float y, float z) const;
	void SetMat4(const std::string& name, const glm::mat4& mat) const;

private:

	void Init(const char* vertexPath, const char* fragmentPath);
	void CheckCompileErrors(unsigned int shader, std::string type); // utility function for checking shader compilation/linking errors.

};

