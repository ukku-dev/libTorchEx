import torch
import torchvision.models as models

# 사전 훈련된 ResNet 모델 로드
model = models.resnet18(pretrained=True)

# 모델을 평가 모드로 전환
model.eval()

# 더미 입력 데이터 생성 (1개의 이미지, 3개의 채널, 224x224 크기)
example_input = torch.rand(1, 3, 224, 224)

# TorchScript로 모델을 트레이스
traced_script_module = torch.jit.trace(model, example_input)

# 모델 저장
traced_script_module.save("resnet18_traced.pt")