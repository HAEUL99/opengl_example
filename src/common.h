#ifndef __COMMON_H__
#define __COMMON_H__

#include <memory>
#include <string>
#include <optional>
#include <spdlog/spdlog.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#define CLASS_PTR(klassName) \
class klassName; \
using klassName ## UPtr = std::unique_ptr<klassName>; \
using klassName ## Ptr = std::shared_ptr<klassName>; \
using klassName ## WPtr = std::weak_ptr<klassName>;

/*
CLASS_PTR(Shader);
class Shader;
using ShaderUPtr = std::unique_ptr<Shader>;
using ShaderPtr = std::unique_ptr<Shader>;
using ShaderWPtr = std::unique_ptr<Shader>;
*/



std::optional<std::string> LoadTextFile(const std::string& filename);

#endif // __COMMON_H__