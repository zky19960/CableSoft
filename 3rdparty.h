#pragma once

#ifndef _PARTY_H_
#define _PARTY_H_

/*************************************************
C++头文件部分
**************************************************/

#include <algorithm>

#include <iostream>

#include <vector>
#include <string>

#include <cmath>
#include <ctime>
#include <cstdlib>

#include <fstream>

/*************************************************
PCL头文件部分
**************************************************/
#include  <pcl/point_types.h> 
#include  <pcl/point_cloud.h>
#include  <pcl/point_types_conversion.h> 

#include  <pcl/ModelCoefficients.h>

#include  <pcl/common/centroid.h>
#include  <pcl/common/common.h>
#include  <pcl/common/transforms.h>

#include  <pcl/console/time.h>
#include  <pcl/console/print.h>
#include  <pcl/console/parse.h>

#include  <pcl/filters/extract_indices.h>
#include  <pcl/filters/passthrough.h> 
#include  <pcl/filters/radius_outlier_removal.h>

#include  <pcl/features/normal_3d.h> 
#include  <pcl/features/normal_3d_omp.h>
#include  <pcl/features/integral_image_normal.h>
#include  <pcl/features/principal_curvatures.h>
#include  <pcl/features/moment_of_inertia_estimation.h> 

#include  <pcl/kdtree/kdtree_flann.h>
#include  <pcl/keypoints/uniform_sampling.h>

#include  <pcl/io/pcd_io.h> 
#include  <pcl/io/ply_io.h> 

#include  <pcl/search/search.h> 
#include  <pcl/search/kdtree.h> 

#include  <pcl/sample_consensus/ransac.h>
#include  <pcl/sample_consensus/sac_model_plane.h>
#include  <pcl/sample_consensus/sac_model_circle.h>
#include  <pcl/sample_consensus/sac_model_circle3d.h>

#include  <pcl/segmentation/region_growing.h> 
#include  <pcl/segmentation/sac_segmentation.h>
#include  <pcl/segmentation/extract_clusters.h>

#include  <pcl/visualization/cloud_viewer.h> 
#include  <pcl/visualization/pcl_visualizer.h>
#include  <pcl/visualization/impl/point_cloud_color_handlers.hpp>

/*************************************************
PCL库依赖三方库头文件部分
**************************************************/

#include <boost/thread/thread.hpp>

#include <vtkAutoInit.h>
#include <vtkPolyLine.h>

VTK_MODULE_INIT(vtkRenderingOpenGL2);//调用OpenGL渲染法线宏
VTK_MODULE_INIT(vtkInteractionStyle);
VTK_MODULE_INIT(vtkRenderingVolumeOpenGL2);
VTK_MODULE_INIT(vtkRenderingFreeType);

#endif 