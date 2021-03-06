#ifndef SHADERGRAPH_VECTORFUNCTIONS_H
#define SHADERGRAPH_VECTORFUNCTIONS_H

#include "../Node.h"
#include "pin/Pin.h"

namespace ShaderGraph
{
    class MakeVec2Node : public Node
    {
    public:
        MakeVec2Node() : Node("MakeVec2")
        {
            outputs() = std::vector<PIN> {
                    std::make_shared<Vector2>("Vector2", this)
            };

            inputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this)
            };
        }

        GLSLData nodeToGLSL() override
        {
            GLSLData buffer;
            GLSL_CODE(buffer.generatedCode,
                      "// MakeVec2Node \n"
                      "{0} = vec2({1}, {2}); \n"
                      "\n",
                      autoName(outputs()[0]),
                      autoName(inputs()[0]),
                      autoName(inputs()[1]));
            return buffer;
        }
    };

    class MakeVec3Node : public Node
    {
    public:
        MakeVec3Node() : Node("MakeVec3")
        {
            outputs() = std::vector<PIN> {
                    std::make_shared<Vector3>("Vector3", this)
            };

            inputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this),
                    std::make_shared<Float>("Z", this)
            };
        }

        GLSLData nodeToGLSL() override
        {
            GLSLData buffer;
            GLSL_CODE(buffer.generatedCode,
                      "// MakeVec3Node \n"
                      "{0} = vec3({1}, {2}, {3}); \n"
                      "\n",
                      autoName(outputs()[0]),
                      autoName(inputs()[0]),
                      autoName(inputs()[1]),
                      autoName(inputs()[2]));
            return buffer;
        }
    };

    class MakeVec4Node : public Node
    {
    public:
        MakeVec4Node() : Node("MakeVec4")
        {
            outputs() = std::vector<PIN> {
                    std::make_shared<Vector4>("Vector4", this)
            };

            inputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this),
                    std::make_shared<Float>("Z", this),
                    std::make_shared<Float>("A", this)
            };
        }

        GLSLData nodeToGLSL() override
        {
            GLSLData buffer;
            GLSL_CODE(buffer.generatedCode,
                      "// MakeVec4Node \n"
                      "{0} = vec4({1}, {2}, {3}, {4});"
                      "\n",
                      autoName(outputs()[0]),
                      autoName(inputs()[0]),
                      autoName(inputs()[1]),
                      autoName(inputs()[2]),
                      autoName(inputs()[3]));
            return buffer;
        }
    };

    class BreakVec2Node : public Node
    {
    public:
        BreakVec2Node() : Node("BreakVec2")
        {
            inputs() = std::vector<PIN> {
                std::make_shared<Vector2>("Vector2", this)
            };

            outputs() = std::vector<PIN> {
                std::make_shared<Float>("X", this),
                std::make_shared<Float>("Y", this)
            };
        }

        GLSLData nodeToGLSL() override
        {
            GLSLData buffer;
            GLSL_CODE(buffer.generatedCode,
                      "// BreakVec2Node \n"
                      "{1} = {0}.x; \n"
                      "{2} = {0}.y; \n"
                      "\n",

                      autoName(inputs()[0]),

                      autoName(outputs()[0]),
                      autoName(outputs()[1]));
            return buffer;
        }
    };

    class BreakVec3Node : public Node
    {
    public:
        BreakVec3Node() : Node("BreakVec3")
        {
            inputs() = std::vector<PIN> {
                    std::make_shared<Vector3>("Vector3", this)
            };

            outputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this),
                    std::make_shared<Float>("Z", this)
            };
        }

        GLSLData nodeToGLSL() override
        {
            GLSLData buffer;
            GLSL_CODE(buffer.generatedCode,
                      "// BreakVec3Node \n"
                      "{1} = {0}.x; \n"
                      "{2} = {0}.y; \n"
                      "{3} = {0}.z; \n"
                      "\n",

                      autoName(inputs()[0]),

                      autoName(outputs()[0]),
                      autoName(outputs()[1]),
                      autoName(outputs()[2]));
            return buffer;
        }
    };

    class BreakVec4Node : public Node
    {
    public:
        BreakVec4Node() : Node("BreakVec4")
        {
            inputs() = std::vector<PIN> {
                    std::make_shared<Vector4>("Vector4", this)
            };

            outputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this),
                    std::make_shared<Float>("Z", this),
                    std::make_shared<Float>("A", this)
            };
        }

        GLSLData nodeToGLSL() override
        {
            GLSLData buffer;
            GLSL_CODE(buffer.generatedCode,
                      "// BreakVec4Node \n"
                      "{1} = {0}.x; \n"
                      "{2} = {0}.y; \n"
                      "{3} = {0}.z; \n"
                      "{4} = {0}.a; \n"
                      "\n",

                      autoName(inputs()[0]),

                      autoName(outputs()[0]),
                      autoName(outputs()[1]),
                      autoName(outputs()[2]),
                      autoName(outputs()[3]));
            return buffer;
        }
    };
}

#endif //SHADERGRAPH_VECTORFUNCTIONS_H
