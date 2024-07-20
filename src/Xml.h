// Create an XMLDocument (TinyXML2 library)

#ifndef XML_H
#define XML_H

#include "XML/tinyxml2.h"

#include <string>
#include <vector>

using namespace tinyxml2;

XMLDocument readXmlConfig(const char* path);

std::vector<const XMLElement*> XMLGetElements(const XMLNode* config);
std::vector<const XMLAttribute*> XMLGetAttributes(const XMLElement* element);

#endif
