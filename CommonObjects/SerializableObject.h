#ifndef SERIALIZABLEOBJECT_H
#define SERIALIZABLEOBJECT_H

#include "Object.h"
#include <ostream>

class SerializableObject : public Object
{
public:
    std::ostream& operator<<(std::ostream& output)
    {
        return output << "{}";
    }
};

#endif  // SERIALIZABLEOBJECT_H
