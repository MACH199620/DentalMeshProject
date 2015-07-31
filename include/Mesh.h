#ifndef MESH_H
#define MESH_H

//
//  BoundingBox.h
//  Reconstructor
//
//  Created by sway on 6/13/15.
//  Copyright (c) 2015 None. All rights reserved.
//

#include <OpenMesh/Core/IO/MeshIO.hh>
#include <OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh>
#include "include/BoundingBox.h"

namespace SW{

struct MyTraits : public OpenMesh::DefaultTraits
{
    typedef OpenMesh::Vec3f Color; //使用浮点颜色值
};

class Mesh:public OpenMesh::TriMesh_ArrayKernelT<MyTraits>
{
public:
    Mesh(QString name);
    Mesh();

    void getBoundingBox();

    //计算BoundingBox
    void computeBoundingBox();

    //计算顶点数、面片数、边数
    void computeEntityNumbers();

    // 0--vertices 1-- wireframe 2-- flatLine
    void draw(int flag);

private:
    //画OpenGL原点
    void drawOrigin();

    //画BoundingBox
    void drawBoundingBox();

   public:
    int mVertexNum, mFaceNum, mEdgeNum;
    BoundingBox BBox;
    QString MeshName;

};
}
#endif // MESH_H
