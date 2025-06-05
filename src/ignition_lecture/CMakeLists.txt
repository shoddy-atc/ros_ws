# 1. まず必要なCMakeのバージョンを指定
cmake_minimum_required(VERSION 3.8)

# 2. プロジェクトの名前を宣言
project(ignition_lecture)

# 3. コンパイラの警告設定（コードの品質を保つため）
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 4. ROS 2に必要なパッケージを探す
find_package(ament_cmake REQUIRED)

# 5. テスト用の設定
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# launchファイルをインストール
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.launch.py"
)
 # worldファイル
install(DIRECTORY worlds
  DESTINATION share/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.sdf" PATTERN "*.world"
)
# modelファイル
install(DIRECTORY models
  DESTINATION share/${PROJECT_NAME}
)

# 6. ROS 2パッケージとして完成させる
ament_package()