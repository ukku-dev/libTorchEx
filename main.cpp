#include <torch/script.h> // One-stop header.
#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // TorchScript 모델 로드
    // torch::jit::script::Module module;
    // try {
    //     //module = torch::jit::load("resnet18_traced.pt");
    //     module = std::make_shared<torch::jit::BuiltinModule>("example_module");
    // } catch (const c10::Error& e) {
    //     std::cerr << "Error loading the model\n";
    //     return -1;
    // }

    // // OpenCV로 이미지 읽기
    // cv::Mat image = cv::imread("input_image.jpg");
    // if (image.empty()) {
    //     std::cerr << "Could not open or find the image!\n";
    //     return -1;
    // }

    // // 이미지를 224x224로 리사이즈
    // cv::resize(image, image, cv::Size(224, 224));

    // // BGR에서 RGB로 변환
    // cv::cvtColor(image, image, cv::COLOR_BGR2RGB);

    // // 이미지를 tensor로 변환 및 정규화
    // torch::Tensor img_tensor = torch::from_blob(image.data, {1, image.rows, image.cols, 3}, torch::kByte);
    // img_tensor = img_tensor.permute({0, 3, 1, 2}); // HWC to CHW
    // img_tensor = img_tensor.to(torch::kFloat32).div(255);
    // img_tensor = torch::data::transforms::Normalize<>({0.485, 0.456, 0.406}, {0.229, 0.224, 0.225})(img_tensor);

    // // 추론 수행
    // torch::Tensor output = module.forward({img_tensor}).toTensor();

    // // 결과 출력
    // std::cout << "Output: " << output.slice(/*dim=*/1, /*start=*/0, /*end=*/5) << std::endl;

    return 0;
}