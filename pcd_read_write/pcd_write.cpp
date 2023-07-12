#include <iostream>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>

using namespace std;

int main(int argc, char** argv)
{
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    for (size_t i=0; i<5; ++i)
    {
        pcl::PointXYZ pt;
        pt.x = i;
        pt.y = 0;
        pt.z = 0;
        cloud->push_back(pt);
    }
    cout << "==点群情報==" << endl;
    cout << *cloud << endl;

    cout << "==座標==" << endl;
    for (size_t i=0; i<cloud->size(); ++i)
        cout << cloud->points[i] << endl;
    
    pcl::io::savePCDFile("test.pcd", *cloud);

    return (0);
}

/*
#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

int main(int argc, char **argv)
{
    pcl::PointCloud<pcl::PointXYZ> cloud;

    // Fill in the cloud data
    cloud.width = 5;
    cloud.height = 1;
    cloud.is_dense = false;
    cloud.points.resize(cloud.width * cloud.height);

    for (size_t i = 0; i < cloud.points.size(); ++i)
    {
        cloud.points[i].x = 1024 * rand() / (RAND_MAX + 1.0f);
        cloud.points[i].y = 1024 * rand() / (RAND_MAX + 1.0f);
        cloud.points[i].z = 1024 * rand() / (RAND_MAX + 1.0f);
    }

    pcl::io::savePCDFileASCII("test_pcd.pcd", cloud);
    std::cerr << "Saved " << cloud.points.size() << " data points to test_pcd.pcd." << std::endl;

    for (size_t i = 0; i < cloud.points.size(); ++i)
        std::cerr << "    " << cloud.points[i].x << " " << cloud.points[i].y << " " << cloud.points[i].z << std::endl;

    return (0);
}
*/