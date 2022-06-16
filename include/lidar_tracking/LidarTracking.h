#ifndef LIDAR_TRACKING_LIDARTRACKING_H
#define LIDAR_TRACKING_LIDARTRACKING_H

#include <ros/ros.h>
#include <string>
#include <vector>
#include <std_msgs/Bool.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/PointCloud2.h>
#include <visualization_msgs/Marker.h>

#include <pcl/point_types.h>
#include <pcl_ros/transforms.h>
#include <pcl_ros/point_cloud.h>

class LidarTracking {
    public:
    LidarTracking();


}

#endif //LIDAR_TRACKING_LIDARTRACKING_H