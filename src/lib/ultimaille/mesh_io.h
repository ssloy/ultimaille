#ifndef __MESH_IO_H__
#define __MESH_IO_H__

#include <vector>
#include <cstring>
#include "surface.h"

void read_wavefront_obj(const std::string filename, PolyMesh &m);
void write_wavefront_obj(const std::string filename, const Surface &m);


#endif // __MESH_IO_H__

