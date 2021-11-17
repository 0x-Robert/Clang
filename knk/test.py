# 2차원 numpy 배열인 A 에서 가로 2번째, 세로 첫번째 요소를 구하는 방법은 ? ( 세로축은 axis = 0, 가로축은 axis = 1 이라고 하자
import numpy as np


A = np.array(
     [[0,1,2],
      [3,4,5],
      [6,7,8]]
)

print(A[0][1]) #answer
# print(A[2][1])
# print(A[1][0])
# print(A[1][2])
# B = np.array([[0,3,6],
#               [1,4,7],
#               [2,5,8]])
# print(B[1][0])