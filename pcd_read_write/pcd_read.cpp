#include <iostream>
#include <string>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>

using namespace std;

int main(int argc, char** argv)
{
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    if (pcl::io::loadPCDFile("test.pcd", *cloud)<0)
    {
        cout << "file not found. test.pcd" << endl;
        return (-1);
    }

    cout << "=点群の情報=" << endl;
    cout << *cloud << endl;

    cout << "=点の座標=" << endl;
    for (size_t i=0; i<cloud->size(); ++i)
        cout << cloud->points[i] << endl;

    return (0);
}