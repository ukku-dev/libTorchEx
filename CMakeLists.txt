cmake_minimum_required(VERSION 3.10)
project(resnet_inference)

# C++14 이상 사용
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# CUDA 아키텍처 설정 (Turing 예시)
set(CMAKE_CUDA_ARCHITECTURES 80)

# OpenCV를 찾기 위한 경로 설정
set(OpenCV_INCLUDE_DIRS /usr/include/opencv)
set(CUDAToolkit_INCLUDE_DIR /usr/local/cuda/include)
set(OpenCV_LIBRARIES /usr/lib/x86_64-linux-gnu/)
set(OpenCV_DIR /usr/share/OpenCV/)

# Torch 라이브러리 경로 설정
set(Torch_DIR "/home/ai/libtorch/share/cmake/Torch")

# OpenCV 라이브러리 경로 설정 (필요시 설정)
#set(OpenCV_DIR "/path/to/opencv/build")

# Torch 라이브러리 찾기
find_package(Torch REQUIRED)

# OpenCV 라이브러리 찾기
find_package(OpenCV REQUIRED)

# 실행 파일 생성
add_executable(resnet_inference main.cpp)

# 라이브러리 링크
target_link_libraries(resnet_inference "${TORCH_LIBRARIES}" "${OpenCV_LIBS}")

# C++14 사용 설정
set_property(TARGET resnet_inference PROPERTY CXX_STANDARD 14)