# KiTTI tracking dataset visualizer

## requirements 

- Ubuntu 
- docker
- docker-compose

downlaod left color images, camera calibration matrices, and training labels of [KITTI tracking datasets](http://www.cvlibs.net/datasets/kitti/eval_tracking.php)  
Unzip and put them under `datasets` directory.

### Run

```
# mkdir build && cd build
# cmkae .. && make -j8
# ./demo IMAGE_SET_ID
```
